//
// Created by danichmur on 11/13/17.
//

#ifndef RDDTOOL_RRDTOOLS_H
#define RDDTOOL_RRDTOOLS_H

#include "config_manager.h"
#include <rrd.h>
#include <stdlib.h>

enum FETCH_TYPE {
    ARRAY,
    JSON,
    CSV
};

#ifdef __cplusplus
extern "C" {
#endif

int rrdtools_create(int argc, char** argv);
int rrdtools_remove(char*);
void rrdtools_info(char*, char*);
int rrdtools_tune(int argc, char** argv);
int rrdtools_rename(char*, char*);
int rrdtools_dump(char *, FILE *);
int rrdtools_fetch(char*, char*, time_t*, time_t*,
                   unsigned long*, char*, enum FETCH_TYPE);
int rrdtools_fetch_in_file(char*, char*, time_t*, time_t*,
                           unsigned long*, char*, enum FETCH_TYPE);
int rrdools_graph(int, char**, char***, int*, int*, double*, double*);

#ifdef __cplusplus
}
#endif

#endif //RDDTOOL_RRDTOOLS_H
