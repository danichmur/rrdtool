#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menuBar()->setNativeMenuBar(false);
    initialize_ini();
}


MainWindow::~MainWindow()
{
    delete ui;
    clear_ini();
}



void MainWindow::on_actionAll_databases_triggered()
{
    char **list = (char **) calloc(10, sizeof(char *));
    for(int i = 0; i < 10; i++){
        list[i] = (char *) calloc(100, sizeof(char));
    }
    get_db_list(list);
    for(int i = 0; i < 10; i++){
        printf("%s\n", list[i]);
        free(list[i]);
    }
    free(list);
}

void MainWindow::on_actionCreate_database_triggered()
{
    CreateWindow *createWindow = new CreateWindow();
    createWindow->show();

}
