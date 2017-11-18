#include "createwindow.h"
#include "ui_createwindow.h"
#include <iostream>

using namespace std;

CreateWindow::CreateWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateWindow)
{
    ui->setupUi(this);
}

CreateWindow::~CreateWindow()
{
    delete ui;
}

void message_alert(string text){
    QMessageBox msgBox;
    msgBox.setText(QString::fromStdString(text));
    msgBox.exec();
}

bool check_empty(QTextEdit* te, string name){
    std::string text = te->toPlainText().toUtf8().constData();
    if(text.compare("")== 0){
         message_alert("Check " + name + " field!");
        return false;
    }
    return true;
}

bool check_start(QTextEdit* te){
    std::string text = te->toPlainText().toUtf8().constData();
    if(text.compare("N") == 0){
        return true;
    }
    try {
        string::size_type sz;
        stol(text,&sz);
    }
    catch (const invalid_argument& ia) {
        message_alert("Check start field!");
        return false;
    }
    return true;
}

bool check_min_max(QTextEdit* te, string name){
    std::string text = te->toPlainText().toUtf8().constData();
    if(text.compare("U") == 0){
        return true;
    }
    try {
        string::size_type sz;
        stol(text,&sz);
    }
    catch (const invalid_argument& ia) {
        message_alert("Check " + name + " field!");
        return false;
    }
    return true;
}

bool check_int_field(QTextEdit* te, string name){
    std::string text = te->toPlainText().toUtf8().constData();
    try {
        string::size_type sz;
        int i = stoi(text,&sz);
        if(i < 0){
            message_alert("Check " + name + " field!");
            return false;
        }
    }
    catch (const invalid_argument& ia) {
        message_alert("Check " + name + " field!");
        return false;
    }
    return true;
}

bool CreateWindow::check_ds(string num){
    string ds = "teDS";
    QString name = QString::fromStdString(ds + num + string("Hb"));
    QTextEdit* teHb = this->findChild<QTextEdit*>(name);
    name = QString::fromStdString(ds + num + string("Max"));
    QTextEdit* teMax = this->findChild<QTextEdit*>(name);
    name = QString::fromStdString(ds + num + string("Min"));
    QTextEdit* teMin = this->findChild<QTextEdit*>(name);
    name = QString::fromStdString(ds + num + string("Name"));
    QTextEdit* teName = this->findChild<QTextEdit*>(name);

    if(!check_int_field(teHb, "Hb" + num) ||
       !check_min_max(teMax, "Max" + num) ||
       !check_min_max(teMin, "Min" + num)){
        return false;
    }

    if(!check_empty(teName, "DS" + num + "Name")){
        return false;
    }
    return true;
}

bool check_double_field(QTextEdit* te, string name){
    std::string text = te->toPlainText().toUtf8().constData();
    try {
        string::size_type sz;
        int i = stod(text,&sz);
        if(i < 0 || i > 1){
             message_alert("Check " + name + " field!");
            return false;
        }
    }
    catch (const invalid_argument& ia) {
        message_alert("Check " + name + " field!");
        return false;
    }

    return true;
}

bool CreateWindow::check_rra(string num){
    string rra = "teRRA";
    QString name = QString::fromStdString(rra + num + string("NoC"));
    QTextEdit* teNoc = this->findChild<QTextEdit*>(name);
    name = QString::fromStdString(rra + num + string("PPoints"));
    QTextEdit* tePPoints = this->findChild<QTextEdit*>(name);
    name = QString::fromStdString(rra + num + string("Veracity"));
    QTextEdit* teVeracity = this->findChild<QTextEdit*>(name);

    if(!check_int_field(teNoc, "RRA " + num + " NoC") ||
       !check_int_field(tePPoints, "RRA " + num + " PPoints")){
        return false;
    }

    if(!check_double_field(teVeracity, "teRRA " + num + " Veracity")){
        return false;
    }

    return true;
}

void CreateWindow::on_pbCreate_clicked()
{
    QTextEdit* teName = this->findChild<QTextEdit*>("teName");
    QTextEdit* teStart = this->findChild<QTextEdit*>("teStart");
    QTextEdit* teStep = this->findChild<QTextEdit*>("teStep");

    if(!check_empty(teName , "Name") ){
        return;
    }

    if(!check_start(teStart) ||
       !check_int_field(teStep, "step")){
        return;
    }

    if(!check_ds("1") || !check_ds("2")){
        return;
    }

    if(!check_rra("1") || !check_rra("2") || !check_rra("3")){
        return;
    }

    cout << "GOOD!\n";
}
