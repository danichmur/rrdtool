#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#define LEN 100
#define COUNT 30

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menuBar()->setNativeMenuBar(false);
    initialize_ini();
    QGroupBox *group = this->findChild<QGroupBox*>("groupBox");
    group->setVisible(false);
}


MainWindow::~MainWindow()
{
    delete ui;
    clear_ini();
}

void MainWindow::on_actionAll_databases_triggered()
{
    QTextBrowser* textBrowser = this->findChild<QTextBrowser*>("textBrowser");
    textBrowser->clear();

    char **list = (char **) calloc(10, sizeof(char *));
    for(int i = 0; i < 10; i++){
        list[i] = (char *) calloc(100, sizeof(char));
    }
    get_db_list(list);
    int i = 0;
    while(strcmp(list[i], "") != 0){
        textBrowser->append(QString::fromStdString(list[i]));
        free(list[i++]);
    }
    free(list);
}

void MainWindow::on_actionCreate_database_triggered()
{
    CreateWindow *createWindow = new CreateWindow();
    createWindow->show();

}

void MainWindow::on_actionName_triggered()
{
    RenameWindow *renameWindow = new RenameWindow();
    renameWindow->show();
}

void MainWindow::on_actionDelete_database_triggered()
{
    DeleteWindow *deleteWindow = new DeleteWindow();
    deleteWindow->show();
}

void MainWindow::on_actionSettings_triggered()
{
    SettingsWindow *settingsWindow = new SettingsWindow();
    settingsWindow->show();
}

void MainWindow::on_actionInfo_triggered()
{
    QGroupBox *group = this->findChild<QGroupBox*>("groupBox");
    QComboBox *cbNames = this->findChild<QComboBox*>("cbNames");
    char **list = (char **) calloc(COUNT, sizeof(char *));
    for(int i = 0; i < COUNT; i++){
        list[i] = (char *) calloc(LEN, sizeof(char));
    }
    get_db_list(list);
    int i = 0;
    while(strcmp(list[i], "") != 0){
        cbNames->addItem(list[i]);
        free(list[i++]);
    }
    free(list);
    group->setVisible(true);
}

void MainWindow::on_actionAbou_triggered()
{
    AboutWindow *aboutWindow = new AboutWindow();
    aboutWindow->show();
}

void MainWindow::on_actionGet_data_triggered()
{
    GetDataWindow *getDataWindow = new GetDataWindow();
    getDataWindow->show();
}

void MainWindow::on_pbInfo_clicked()
{
    QGroupBox *group = this->findChild<QGroupBox*>("groupBox");
    QComboBox *cbNames = this->findChild<QComboBox*>("cbNames");
    std::string name = cbNames->currentText().toStdString();
    char *list = (char *) calloc(LEN*LEN, sizeof(char *));
    rrdtools_info(name.c_str(), list);
    QTextBrowser* textBrowser = this->findChild<QTextBrowser*>("textBrowser");
    textBrowser->clear();
    textBrowser->append(QString::fromStdString(list));
    free(list);
    group->setVisible(false);
}
