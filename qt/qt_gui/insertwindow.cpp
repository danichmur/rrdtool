#include "insertwindow.h"
#include "ui_insertwindow.h"

InsertWindow::InsertWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InsertWindow)
{
    ui->setupUi(this);
}

InsertWindow::~InsertWindow()
{
    delete ui;
}
