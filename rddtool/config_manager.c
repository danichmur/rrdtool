//
// Created by danichmur on 11/13/17.
//

#include "config_manager.h"
#define FILE_PATH_LEN 4096

dictionary  *ini;
const char *conf_file_name = "/home/parallels/rrdtool/rddtool/conf.ini";

int save_ini(){
    FILE *conf;
    if ((conf=fopen(conf_file_name, "w"))==NULL) {
        fprintf(stderr, "Can't open %s.\n", conf_file_name);
        return -1;
    }
    iniparser_dump_ini(ini, conf);
    fclose(conf);
    return 0;
}

int initialize_ini(){
    ini = iniparser_load(conf_file_name);
    if (ini==NULL) {
        fprintf(stderr, "cannot parse %s\n", conf_file_name);
        return -1;
    }
    return 0;
}

void get_db_list(char** list){
    DIR  *dir = opendir(get_db_path());
    if(dir) {
        int i = 0;
        struct dirent *ent;
        while((ent = readdir(dir)) != NULL) {
            sprintf(list[i++], "%s", ent->d_name);
        }
    }
}

const char * get_db_path(){
    return iniparser_getstring(ini, "config:db_path", "~/");
}

const char * get_res_path(){
    return iniparser_getstring(ini, "config:res_path", "~/");
}

static void make_directory(const char *dir) {
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

int set_path(const char * new_db_path, const char * name){
    if(strcmp(new_db_path, "") == 0){
        return -1;
    }
    char path[FILE_PATH_LEN];
    if(new_db_path[0] == '~'){
        strcpy(path, getenv("HOME"));
        char substr[strlen(new_db_path) - 1];
        strncpy(substr, new_db_path+1, strlen(new_db_path));
        strcat(path, substr);
    } else {
        strcpy(path, new_db_path);
    }
    make_directory(path);
    iniparser_set(ini, name, path);
    return 0;
}

int set_db_path(const char * new_db_path){
    return set_path(new_db_path, "config:db_path");
}

int set_res_path(const char * new_db_path){
    return set_path(new_db_path, "config:res_path");
}

int clear_ini(){
    save_ini();
    iniparser_freedict(ini);
    return 0;
}