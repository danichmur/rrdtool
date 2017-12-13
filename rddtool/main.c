//
// Created by parallels on 11/23/17.
//

#include <rrd.h>
#include "config_manager.h"
#define COUNT 20
#define LEN 4096

void graph();
void update();
char *db_path = "/home/parallels/rrdtool/rddtool/data/example";

int main(int argc, char **argv){
    graph();
//    initialize_ini();
//    char **list = (char **) calloc(COUNT, sizeof(char *));
//    for(int i = 0; i < COUNT; i++){
//        list[i] = (char *) calloc(LEN, sizeof(char));
//
//    }
//    get_db_list(list);
//
//    int i = 0;
//    while(strcmp(list[i], "") != 0) {
//        printf("%s\n", list[i++]);
//    }
//    clear_ini();
}


void update(){
    size_t update_argc = 3;
    size_t update_params_count = 15;
    char *update_params[] = {
            "920804700:12345", "920805000:12357", "920805300:12363",
            "920805600:12363", "920805900:12363", "920806200:12373",
            "920806500:12383", "920806800:12393", "920807100:12399",
            "920807400:12405", "920807700:12411", "920808000:12415",
            "920808300:12420", "920808600:12422", "920808900:12423"
    };
    for(int i = 0; i < update_params_count; i++) {
        char *update_argv[] = {
                "update",
                db_path,
                update_params[i]
        };

        printf("Update status: %d\n", rrd_update(update_argc, update_argv));
    }
}

void graph(){
    // char *param_with_path[100];
    // strcpy(param_with_path,"DEF:myspeed=");
    // strcat(param_with_path, db_path);
    // strcat(param_with_path, ":speed:AVERAGE");
    char ***calcpr =  malloc(sizeof(char));
    int xsize, ysize;
    double ymin, ymax;

    int graph_argc = 15;
    char* graph_argv[] = {
            "graph",
            "/home/parallels/speed3.png",
            "--start",
            "920804400",
            "--end",
            "920808000",
            "--vertical-label",
            "km/h",
            "DEF:myspeed=/home/parallels/rrdtool/rddtool/data/example:speed:AVERAGE",
            "CDEF:kmh=myspeed,3600,*",
            "CDEF:fast=kmh,100,GT,kmh,0,IF",
            "CDEF:good=kmh,100,GT,0,kmh,IF",
            "HRULE:100#0000FF:\"Maximum allowed\"",
      "AREA:good#00FF00:\"Good speed\"",
      "AREA:fast#FF0000:\"Too fast\""
    };

    printf("Graph status: %d\n", rrd_graph(graph_argc, graph_argv,
                                           calcpr, &xsize, &ysize, NULL,
                                           &ymin, &ymax));
}