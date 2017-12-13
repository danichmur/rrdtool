#-------------------------------------------------
#
# Project created by QtCreator 2017-11-16T19:51:57
#
#-------------------------------------------------

QT       += core gui
QT       += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_gui
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += -L/home/parallels/rrdtool/rddtool/cmake-build-debug -lrddtool
LIBS += -L/usr/lib/x86_64-linux-gnu -lrrd
INCLUDEPATH += "/home/parallels/rrdtool/rddtool"

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    createwindow.cpp \
    renamewindow.cpp \
    deletewindow.cpp \
    settingswindow.cpp \
    aboutwindow.cpp \
    getdatawindow.cpp \
    insertwindow.cpp

HEADERS += \
        mainwindow.h \
        createwindow.h \
    renamewindow.h \
    deletewindow.h \
    settingswindow.h \
    aboutwindow.h \
    getdatawindow.h \
    insertwindow.h

FORMS += \
        mainwindow.ui \
    createwindow.ui \
    renamewindow.ui \
    deletewindow.ui \
    settingswindow.ui \
    aboutwindow.ui \
    getdatawindow.ui \
    insertwindow.ui
