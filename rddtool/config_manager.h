//
// Created by parallels on 11/13/17.
//

#ifndef RDDTOOL_CONFIG_MANAGER_H
#define RDDTOOL_CONFIG_MANAGER_H

#include "iniparser/iniparser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <stdbool.h>
#include <sys/stat.h>

void get_db_list(char**);
const char * get_db_path();
const char * get_res_path();
void set_db_path(char *);
void set_res_path(char *);
int initialize();
int clear();

#endif //RDDTOOL_CONFIG_MANAGER_H
