#ifndef DELETEWINDOW_H
#define DELETEWINDOW_H

#include "rrdtools.h"
#include "config_manager.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QComboBox>

namespace Ui {
class DeleteWindow;
}

class DeleteWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteWindow(QWidget *parent = 0);
    ~DeleteWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DeleteWindow *ui;
    void fill_cb();
};

#endif // DELETEWINDOW_H
