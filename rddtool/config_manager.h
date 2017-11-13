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

void get_db_list(char**);
const char * get_db_path();
void set_db_path(char *);
int initialize();
int clear();

#endif //RDDTOOL_CONFIG_MANAGER_H
