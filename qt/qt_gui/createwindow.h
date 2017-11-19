#ifndef CREATEWINDOW_H
#define CREATEWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QComboBox>
#include "rrdtools.h"
#include "config_manager.h"
#include <QVector>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <QTextStream>

namespace Ui {
class CreateWindow;
}

class CreateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateWindow(QWidget *parent = 0);
    ~CreateWindow();

private slots:
    void on_pbCreate_clicked();

private:
    std::string check_rra(std::string num);
    std::string check_ds(std::string num);
    Ui::CreateWindow *ui;
};

#endif // CREATEWINDOW_H
