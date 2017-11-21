cmake_minimum_required(VERSION 3.8)
project(rddtool)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c iniparser/dictionary.h iniparser/dictionary.c iniparser/iniparser.h iniparser/iniparser.c config_manager.h config_manager.c rrdtools.h rrdtools.c)

find_library(RRD_LIBRARY librrd.so HINTS /usr/lib/x86_64-linux-gnu)

add_executable(rddtool ${SOURCE_FILES})
#add_library (rddtool ${SOURCE_FILES})

target_link_libraries(rddtool PUBLIC ${RRD_LIBRARY})


