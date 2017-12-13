//
// Created by danichmur on 11/13/17.
//

#include <math.h>
#include "rrdtools.h"

#define PATH 1
#define LEN 30
#define DB_PATH 6
#define FILE_PATH_LEN 4096

void create_path(char* path, const char *db_name, const char * type){
    strcpy(path, type);
    strcat(path, db_name);
}

void create_path_graph(char *path, char *param){
    char *param_new = malloc(strlen(param) * sizeof(char));
    strcpy(param_new, param);
    char *token = strtok(param_new, "=");
    strcpy(path, token);
    strcat(path, "=");
    strcat(path, get_res_path());
    token = strtok(NULL, "=");
    strcat(path, token);
    free(param_new);
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
                fwrite(data->value.u_blo.ptr, data->value.u_blo.size, 1, (FILE *) output);
                break;
        }
        data = data->next;
    }
}

void rrdtools_info(const char *name, char *output){
    char path[FILE_PATH_LEN];
    create_path(path, name, get_db_path());
    rrdtools_info_print(rrd_info_r(path), output);
}

int rrdtools_create(int argc, char** argv){
    char path[FILE_PATH_LEN];
    create_path(path, argv[PATH], get_db_path());
    argv[PATH] = path;
    return rrd_create(argc, argv);
}

int rrdtools_remove(const char *db_name){
    char path[FILE_PATH_LEN];
    create_path(path, db_name, get_db_path());
    return remove(path);
}

int rrdtools_tune(int argc, char** argv) {
    char path[FILE_PATH_LEN];
    create_path(path, argv[PATH], get_db_path());
    argv[PATH] = path;
    return rrd_tune(argc, argv);
}

int rrdtools_rename(const char* old_name, const char* new_name){
    char old_path[FILE_PATH_LEN];
    create_path(old_path, old_name, get_db_path());
    char new_path[FILE_PATH_LEN];
    create_path(new_path, new_name, get_db_path());
    return rename(old_path, new_path);
}

size_t rrd_dump_opt_cb_fileout(const void *data, size_t len, void *user) {
    return (size_t)fprintf((FILE*)user, "%s", (char*)data);
}

int rrdtools_dump(const char *name, FILE *file){
    char path[FILE_PATH_LEN];
    create_path(path, name, get_db_path());
    return rrd_dump_cb_r(path, 1, rrd_dump_opt_cb_fileout, file);
}

void fetch_to_array(char *result, rrd_value_t *data,
                    unsigned long size, time_t start,
                    unsigned long step, char ***ds_namv, unsigned long ds_cnt){

    for(int i = 0; i < size; i++){
        result += sprintf(result, "%li",
                          (long) (start + step * (i + 1)));
        for(int j = 0; j < ds_cnt; j++) {
            result += sprintf(result, ":%lf", data[i*ds_cnt + j]);
        }
        result += sprintf(result, "\n");
    }
}

void fetch_to_json(char *result, rrd_value_t *data,
                   unsigned long size, time_t start,
                   unsigned long step, char ***ds_namv, unsigned long ds_cnt){
    result += sprintf(result, "{\"result\": [{\n");
    for(int i = 0; i < size; i++){
        if(i != 0) {
            result += sprintf(result, ",\n");
        }
        result += sprintf(result,"\"%li\":[",(long) (start + step*(i+1)));
        for(int j = 0; j < ds_cnt; j++) {
            if(j != 0) {
                result += sprintf(result, ",");
            }
            result += sprintf(result, "{\"%s\":\"%lf\"}", (*ds_namv)[j], data[i*ds_cnt + j]);
        }
        result += sprintf(result, "]");
    }
    result += sprintf(result,"\n}]}");
}

void fetch_to_csv(char *result, rrd_value_t *data,
                  unsigned long size, time_t start,
                  unsigned long step, char ***ds_namv, unsigned long ds_cnt) {
    result += sprintf(result, "time");
    for(int j = 0; j < ds_cnt; j++) {
        result += sprintf(result,",%s",(*ds_namv)[j]);
    }
    result += sprintf(result, "\n");

    for(int i = 0; i < size; i++){
        result += sprintf(result, "%li", (long) (start + step*(i+1)));
        for(int j = 0; j < ds_cnt; j++) {
            result += sprintf(result, ",%lf", data[i*ds_cnt + j]);
        }
        result += sprintf(result, "\r\n");
    }
}

int rrdtools_fetch(const char *filename, const char *cf, time_t *start, time_t *end,
                   unsigned long *step, char *result, enum FETCH_TYPE fetch){
    rrd_value_t *data;
    unsigned long ds_cnt;
    char **ds_namv = NULL;
    char new_path[FILE_PATH_LEN];
    create_path(new_path, filename, get_db_path());
    int rrd_res = rrd_fetch_r(new_path, cf, start, end, step, &ds_cnt, &ds_namv, &data);
    if(rrd_res != 0){
        return -1;
    }
    unsigned long size = (*end - *start) / *step - 1;

    switch (fetch){
        case ARRAY:
            fetch_to_array(result, data, size, *start, *step, &ds_namv, ds_cnt);
            break;
        case JSON:
            fetch_to_json(result, data, size, *start, *step, &ds_namv, ds_cnt);
            break;
        case CSV:
            fetch_to_csv(result, data, size, *start, *step, &ds_namv, ds_cnt);
            break;
    }
    free(data);
    return rrd_res;
}

int rrdtools_fetch_in_file(const char *filename, const char *cf, time_t *start, time_t *end,
                   unsigned long *step, const char *file, enum FETCH_TYPE fetch) {
    char *result = (char*)malloc(LEN*LEN*sizeof(char));
    int rrd_res = rrdtools_fetch(filename, cf, start, end, step, result, fetch);
    if(rrd_res != 0){
        return -1;
    }
    char file_path[FILE_PATH_LEN];
    create_path(file_path, file,  get_res_path());
    FILE *fp=fopen(file_path, "w");
    fprintf(fp, "%s", result);
    free(result);
    fclose(fp);
    return rrd_res;
}

int rrdools_graph(int graph_argc, char** graph_argv, char ***calcpr,
                  int *xsize, int *ysize, double *ymin, double *ymax) {
    char res_path[FILE_PATH_LEN];
    create_path(res_path, graph_argv[PATH],  get_res_path());
    graph_argv[PATH] = res_path;
    char path[FILE_PATH_LEN];
    create_path_graph(path, graph_argv[DB_PATH]);
    graph_argv[DB_PATH] = path;

    return rrd_graph(graph_argc, graph_argv,
                    calcpr, xsize, ysize, NULL,
                    ymin, ymax);
}
