#ifndef GETDATAWINDOW_H
#define GETDATAWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QMessageBox>
#include <QComboBox>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <QTextEdit>
#include "rrdtools.h"
#include "config_manager.h"
#include <QDir>
#include <QDesktopServices>
#include <iostream>

namespace Ui {
class GetDataWindow;
}

class GetDataWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GetDataWindow(QWidget *parent = 0);
    ~GetDataWindow();

private slots:
    void on_pbFetch_clicked();

private:
    Ui::GetDataWindow *ui;
    void fill_cb_gd();
};

#endif // GETDATAWINDOW_H
