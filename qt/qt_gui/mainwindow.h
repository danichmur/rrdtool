#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "createwindow.h"
#include "rrdtools.h"
#include "config_manager.h"
#include "renamewindow.h"

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
