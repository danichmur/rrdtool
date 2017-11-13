//
// Created by danichmur on 11/13/17.
//

#include <math.h>
#include "rrdtools.h"
#define RRD_NAME 1

void rrdtools_info_print(rrd_info_t *, char *);

char* create_path(char* path, char *db_name){
    strcpy(path, get_db_path());
    strcat(path, db_name);
    return path;
}

void rrdtools_info(char *name, char *output){
    char path[100];
    create_path(path, name);
    rrdtools_info_print(rrd_info_r(path), output);
}

void rrdtools_info_print(
        rrd_info_t * data, char *output) {
    while (data) {
        output += sprintf(output, "%s = ", data->key);

        switch (data->type) {
            case RD_I_VAL:
                if (isnan(data->value.u_val))
                    output +=  sprintf(output, "NaN\n");
                else
                    output +=  sprintf(output, "%0.10e\n", data->value.u_val);
                break;
            case RD_I_CNT:
                output += sprintf(output, "%lu\n", data->value.u_cnt);
                break;
            case RD_I_INT:
                output += sprintf(output, "%d\n", data->value.u_int);
                break;
            case RD_I_STR:
                output += sprintf(output, "\"%s\"\n", data->value.u_str);
                break;
            case RD_I_BLO:
                output += sprintf(output, "BLOB_SIZE:%lu\n", data->value.u_blo.size);
                fwrite(data->value.u_blo.ptr, data->value.u_blo.size, 1, output);
                break;
        }
        data = data->next;
    }
}

int rrdtools_create(int argc, char** argv){
    char path[100];
    create_path(path, argv[RRD_NAME]);
    argv[RRD_NAME] = path;
    return rrd_create(argc, argv);
}

int rrdtools_remove(char *db_name){
    char path[100];
    create_path(path, db_name);
    return remove(path);
}
