//
// Created by parallels on 11/13/17.
//

#ifndef RDDTOOL_CONFIG_MANAGER_H
#define RDDTOOL_CONFIG_MANAGER_H

#include <dirent.h>
#include <sys/stat.h>
#include <malloc.h>
#include "iniparser/iniparser.h"

#ifdef __cplusplus
extern "C" {
#endif

void get_db_list(char**);
const char * get_db_path();
const char * get_res_path();
int set_db_path(const char *);
int set_res_path(const char *);
int initialize_ini();
int clear_ini();
#ifdef __cplusplus
}
#endif

#endif //RDDTOOL_CONFIG_MANAGER_H
