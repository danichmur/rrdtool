#ifndef RENAMEWINDOW_H
#define RENAMEWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QTextStream>
#include "rrdtools.h"
#include "config_manager.h"
#include <QMessageBox>
#include "mainwindow.h"

namespace Ui {
class RenameWindow;
}

class RenameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RenameWindow(QWidget *parent = 0);
    ~RenameWindow();

private slots:
    void on_pbRename_clicked();

private:
    Ui::RenameWindow *ui;
    void fill_cb();
};

#endif // RENAMEWINDOW_H
