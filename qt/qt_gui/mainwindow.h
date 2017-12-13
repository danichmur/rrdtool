#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGroupBox>
#include "createwindow.h"
#include "rrdtools.h"
#include "config_manager.h"
#include "insertwindow.h"
#include "renamewindow.h"
#include "deletewindow.h"
#include "settingswindow.h"
#include "aboutwindow.h"
#include "getdatawindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAll_databases_triggered();
    void on_actionCreate_database_triggered();
    void on_actionName_triggered();
    void on_actionDelete_database_triggered();
    void on_actionSettings_triggered();
    void on_actionInfo_triggered();
    void on_actionAbou_triggered();
    void on_actionGet_data_triggered();
    void on_actionPropertis_triggered();

    void on_pbInfo_clicked();

    void on_actionInsert_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
