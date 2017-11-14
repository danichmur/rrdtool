//
// Created by danichmur on 11/13/17.
//

#ifndef RDDTOOL_RRDTOOLS_H
#define RDDTOOL_RRDTOOLS_H

#include "config_manager.h"
#include <rrd.h>

int rrdtools_create(int argc, char** argv);
int rrdtools_remove(char*);
void rrdtools_info(char*, char*);
int rrdtools_tune(int argc, char** argv);
int rrdtools_rename(char*, char*);
#endif //RDDTOOL_RRDTOOLS_H
