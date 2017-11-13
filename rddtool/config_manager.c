//
// Created by parallels on 11/13/17.
//

#include "config_manager.h"


dictionary  *ini;
const char *conf_file_name = "../conf.ini";
const char *db_path;

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

int initialize(){
    ini = iniparser_load(conf_file_name);
    if (ini==NULL) {
        fprintf(stderr, "cannot parse %s\n", conf_file_name);
        return -1 ;
    }
    db_path = iniparser_getstring(ini, "config:db_path", "~/");
    return 0;
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
    return db_path;
}
void set_db_path(char * new_db_path){
    char path[80];
    if(new_db_path[0] == '~'){
        strcpy(path, getenv("HOME"));
        char substr[strlen(new_db_path) - 1];
        strncpy(substr, new_db_path+1, strlen(new_db_path));
        strcat(path, substr);
    } else {
        strcpy(path, new_db_path);
    }
    iniparser_set(ini, "config:db_path", path);
    strcpy(db_path, path);
}

int clear(){
    save_ini();
    iniparser_freedict(ini);
}