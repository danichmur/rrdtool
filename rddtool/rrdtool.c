#include <stdio.h>
#include "rrdtools.h"
#include <malloc.h>
#include "config_manager.h"
#define MAX 20
#define LEN 40

void get_db_list_test();

char *db_path = "/home/parallels/test.rrd";

int main(int argc, char** argv) {
    initialize();
   // create();
//    rrdtools_remove("2test.rrd");
    char *list = (char *) calloc(MAX*LEN, sizeof(char));
    rrdtools_info("rename_test.rrd", list);
    printf("%s", list);


    clear();
//
    free(list);
    return 0;
}

void get_db_list_test(){
    char **list = (char **) calloc(MAX, LEN);
    for(int i = 0; i < MAX; i++)
        list[i] = (char *)calloc(LEN, sizeof(char));

    get_db_list(list);

    int i = 0;
    while(strcmp(list[i], "") != 0){
        printf("%s\n", list[i++]);
    }

    for(int i = 0; i < MAX; i++)
        free(list[i]);
    free(list);
}











//void choose_command(int argc, char** argv);
//
//
//void update();
//void graph();


//
//void choose_command(int argc, char** argv){
//    if (strcmp(argv[1], "create")==0) {
//        create();
//    }
//    else if (strcmp(argv[1], "update")==0) {
//        update();
//    }
//    else if (strcmp(argv[1], "graph")==0) {
//        graph();
//    }
//
//}
void create(){
    size_t create_argc = 7;
    char *create_argv[] = {
            "create",
            "2test.rrd",
            "--start",
            "920804400",
            "DS:rrrr:COUNTER:600:U:U",
            "RRA:AVERAGE:0.5:1:24",
            "RRA:AVERAGE:0.5:6:10"
    };
    printf("Create status: %d\n", rrdtools_create(create_argc, create_argv));
}
//
//void update(){
//    size_t update_argc = 3;
//    size_t update_params_count = 15;
//    char *update_params[] = {
//            "920804700:12345", "920805000:12357", "920805300:12363",
//            "920805600:12363", "920805900:12363", "920806200:12373",
//            "920806500:12383", "920806800:12393", "920807100:12399",
//            "920807400:12405", "920807700:12411", "920808000:12415",
//            "920808300:12420", "920808600:12422", "920808900:12423"
//    };
//    for(int i = 0; i < update_params_count; i++) {
//        char *update_argv[] = {
//                "update",
//                db_path,
//                update_params[i]
//        };
//
//        printf("Update status: %d\n", rrd_update(update_argc, update_argv));
//    }
//}
//
//void graph(){
//    // char *param_with_path[100];
//    // strcpy(param_with_path,"DEF:myspeed=");
//    // strcat(param_with_path, db_path);
//    // strcat(param_with_path, ":speed:AVERAGE");
//    char ***calcpr =  malloc(sizeof(char));
//    int xsize, ysize;
//    double ymin, ymax;
//
//    size_t graph_argc = 8;
//    char* graph_argv[] = {
//            "graph",
//            "/home/parallels/speed.png",
//            "--start",
//            "920804400",
//            "--end",
//            "920808000",
//            "DEF:myspeed=/home/parallels/test.rrd:speed:AVERAGE",
//            "LINE2:myspeed#FF0000"
//    };
//    printf("Graph status: %d\n", rrd_graph(graph_argc, graph_argv,
//                                           calcpr, &xsize, &ysize, NULL,
//                                           &ymin, &ymax));
//}