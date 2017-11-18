//
// Created by danichmur on 11/13/17.
//

#include "config_manager.h"


dictionary  *ini;
const char *conf_file_name = "/home/parallels/rrdtool/rddtool/conf.ini";

bool check_file_rrd(const char * file_name){
    char *expansion = ".rrd";
    size_t ex_len = strlen(expansion);
    char subStr[ex_len + 1];
    strncpy(subStr, file_name+strlen(file_name)-ex_len, ex_len);
    subStr[ex_len] = 0;
    return strcmp(subStr, expansion) == 0;
}

int save_ini(){
    FILE *conf;
    if ((conf=fopen(conf_file_name, "w"))==NULL) {
        fprintf(stderr, "iniparser: cannot open %s\n", conf_file_name);
        return -1;
    }
    iniparser_dump_ini(ini, conf);
    fclose(conf);
}

int initialize_ini(){
    ini = iniparser_load(conf_file_name);
    if (ini==NULL) {
        fprintf(stderr, "cannot parse %s\n", conf_file_name);
        return -1 ;
    }
    return 0;
}

void add_db(char *name){
    const char * path = iniparser_getstring(ini, "rrd:db", "~/");
    FILE *fp=fopen(path, "a");
    fprintf(fp, "%s\n", name);
    fclose(fp);
}

void get_db_list(char** list){

    DIR  *dir = opendir(get_db_path());
    if(dir) {
        int i = 0;
        struct dirent *ent;
        while((ent = readdir(dir)) != NULL) {
            if(check_file_rrd(ent->d_name)) {
                sprintf(list[i++], "%s", ent->d_name);
            }
        }
    }
}

const char * get_db_path(){
    return iniparser_getstring(ini, "config:db_path", "~/");
}

const char * get_res_path(){
    return iniparser_getstring(ini, "config:res_path", "~/");
}

static void _mkdir(const char *dir) {
    char tmp[256];
    char *p = NULL;
    size_t len;

    snprintf(tmp, sizeof(tmp),"%s",dir);
    len = strlen(tmp);
    if(tmp[len - 1] == '/')
        tmp[len - 1] = 0;
    for(p = tmp + 1; *p; p++) {
        if (*p == '/') {
            *p = 0;
            if(access(tmp, F_OK) == -1 ) {
                mkdir(tmp, S_IRWXU);
            }
            *p = '/';
        }
    }
    mkdir(tmp, S_IRWXU);
}

void set_path(char * new_db_path, char * name){
    char path[80];
    if(new_db_path[0] == '~'){
        strcpy(path, getenv("HOME"));
        char substr[strlen(new_db_path) - 1];
        strncpy(substr, new_db_path+1, strlen(new_db_path));
        strcat(path, substr);
    } else {
        strcpy(path, new_db_path);
    }
    _mkdir(path);
    iniparser_set(ini, name, path);
}

void set_db_path(char * new_db_path){
    set_path(new_db_path, "config:db_path");
}

void set_res_path(char * new_db_path){
    set_path(new_db_path, "config:res_path");
}

int clear_ini(){
    save_ini();
    iniparser_freedict(ini);
}