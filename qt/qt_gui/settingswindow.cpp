#include "settingswindow.h"
#include "ui_settingswindow.h"

SettingsWindow::SettingsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);
    fill();
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void SettingsWindow::fill(){
    QTextEdit* teDBPath = this->findChild<QTextEdit*>(QString::fromStdString("teDB"));
    QTextEdit* teResPath = this->findChild<QTextEdit*>(QString::fromStdString("teRES"));
    teDBPath->setText(QString::fromStdString(get_db_path()));
    teResPath->setText(QString::fromStdString(get_res_path()));
}

void SettingsWindow::on_pbSave_clicked()
{
    QTextEdit* teDBPath = this->findChild<QTextEdit*>(QString::fromStdString("teDB"));
    QTextEdit* teResPath = this->findChild<QTextEdit*>(QString::fromStdString("teRES"));
    std::string new_db_path = teDBPath->toPlainText().toUtf8().constData();
    set_db_path(new_db_path.c_str());
    std::string new_res_path = teResPath->toPlainText().toUtf8().constData();
    set_res_path(new_res_path.c_str());
    this->close();
}
