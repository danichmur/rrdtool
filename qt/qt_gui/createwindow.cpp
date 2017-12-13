#include "createwindow.h"
#include "ui_createwindow.h"
#include <iostream>
#define LEN 100

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

void CreateWindow::message_alert(string text){
    QMessageBox msgBox;
    msgBox.setText(QString::fromStdString(text));
    msgBox.exec();
}

bool check_empty(QTextEdit* te){
    std::string text = te->toPlainText().toUtf8().constData();
    if(text.compare("")== 0){
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
        long l = stol(text,&sz);
        if(l < 0){
            return false;
        }
    }
    catch (const invalid_argument& ia) {
        return false;
    }
    return true;
}

bool check_min_max(QTextEdit* te){
    std::string text = te->toPlainText().toUtf8().constData();
    if(text.compare("U") == 0){
        return true;
    }
    try {
        string::size_type sz;
        stol(text,&sz);
    }
    catch (const invalid_argument& ia) {
        return false;
    }
    return true;
}

bool check_int_field(QTextEdit* te){
    string text = te->toPlainText().toUtf8().constData();
    try {
        string::size_type sz;
        int i = stoi(text,&sz);
        if(i < 0){
            return false;
        }
    }
    catch (const invalid_argument& ia) {
        return false;
    }
    return true;
}

string CreateWindow::check_ds(string num){
    string ds = "teDS", cb = "cbDS", hb = "Hb",
            max = "Max", min = "Min", type = "Type", name = "Name";
    string qname = ds + num + hb;
    QTextEdit* teHb = this->findChild<QTextEdit*>(QString::fromStdString(qname));
    qname = ds + num + max;
    QTextEdit* teMax = this->findChild<QTextEdit*>(QString::fromStdString(qname));
    qname = ds + num + min;
    QTextEdit* teMin = this->findChild<QTextEdit*>(QString::fromStdString(qname));
    qname = ds + num + name;
    QTextEdit* teName = this->findChild<QTextEdit*>(QString::fromStdString(qname));
    qname = cb + num + type;
    QComboBox* cbDSType = this->findChild<QComboBox*>(QString::fromStdString(qname));

    bool isfist = num.compare("1") == 0 ? true : false;
    string check = "check";
    if(!check_int_field(teHb)){
        if(isfist) message_alert(check + hb + num);
        return "";
    }
    if(!check_min_max(teMax)){
        if(isfist) message_alert(max + num);
        return "";
    }
    if(!check_min_max(teMin)){
        if(isfist) message_alert(min + num);
        return "";
    }

    if(!check_empty(teName)){
        if(isfist) message_alert(string("DS") + num + name);
        return "";
    }

    QString div = QString::fromStdString(":");
    QString str;

    QTextStream out(&str);

    out << QString::fromStdString("DS:") << teName->toPlainText().toUtf8().constData() << div <<
            cbDSType->currentText().toUpper() << div <<
            teHb->toPlainText().toUtf8().constData() << div <<
            teMin->toPlainText().toUtf8().constData() << div <<
            teMax->toPlainText().toUtf8().constData();

    return str.toStdString();
}

bool check_double_field(QTextEdit* te){
    std::string text = te->toPlainText().toUtf8().constData();
    try {
        string::size_type sz;
        int i = stod(text,&sz);
        if(i < 0 || i > 1){
            return false;
        }

    }
    catch (const invalid_argument& ia) {
        return false;
    }

    return true;
}

string CreateWindow::check_rra(string num){
    string rra = "teRRA";
    string cb = "cbRRA";
    QString name = QString::fromStdString(rra + num + string("NoC"));
    QTextEdit* teNoc = this->findChild<QTextEdit*>(name);
    name = QString::fromStdString(rra + num + string("PPoints"));
    QTextEdit* tePPoints = this->findChild<QTextEdit*>(name);
    name = QString::fromStdString(rra + num + string("Veracity"));
    QTextEdit* teVeracity = this->findChild<QTextEdit*>(name);
    name = QString::fromStdString(cb + num + string("Type"));
    QComboBox* cbRRAType = this->findChild<QComboBox*>(name);

    bool isfist = num.compare("1") == 0 ? true : false;
    string check = "check";
    if(!check_int_field(teNoc)){
        if(isfist) message_alert("RRA " + num + " NoC");
        return "";
    }
    if(!check_int_field(tePPoints)){
        if(isfist) message_alert("RRA " + num + " PPoints");
        return "";
    }

    if(!check_double_field(teVeracity)){
        if(isfist) message_alert("teRRA " + num + " Veracity");
        return "";
    }

    QString div = QString::fromStdString(":");
    QString str;
    QTextStream out(&str);

    out << QString::fromStdString("RRA:") << cbRRAType->currentText().toUpper() << div <<
            teVeracity->toPlainText().toUtf8().constData() << div <<
            tePPoints->toPlainText().toUtf8().constData() << div <<
            teNoc->toPlainText().toUtf8().constData();
   return str.toStdString();
}

string intToString(int x){
    stringstream s;
    s << x;
    return s.str();
}

void CreateWindow::on_pbCreate_clicked()
{
    QTextEdit* teName = this->findChild<QTextEdit*>("teName");
    QTextEdit* teStart = this->findChild<QTextEdit*>("teStart");
    QTextEdit* teStep = this->findChild<QTextEdit*>("teStep");

    if(!check_empty(teName)){
        message_alert("check name field");
        return;
    }
    if(!check_start(teStart)){
        message_alert("check start field");
        return;
    }
    if(!check_int_field(teStep)){
        message_alert("check step field");
        return;
    }

    QVector<string> create_params;
    create_params.push_back("create");
    create_params.push_back(teName->toPlainText().toUtf8().constData());
    create_params.push_back("--start");
    create_params.push_back(teStart->toPlainText().toUtf8().constData());
    string step = teStep->toPlainText().toUtf8().constData();
    if(step.compare("") != 0){
        create_params.push_back("--step");
        create_params.push_back(step);
    }

    for(int i = 1; i <= 2; i++){
        string s = check_ds(intToString(i));
        if(s.compare("") == 0){
            if(i == 0) return;
        } else {
            create_params.push_back(s);
        }
    }

    for(int i = 1; i <= 3; i++){
        string s = check_rra(intToString(i));
        if(s.compare("") == 0){
            if(i == 0) return;
        } else {
            create_params.push_back(s);
        }
    }

    int argv = create_params.size();
    char **args = (char **) malloc(argv * sizeof(char*));
    for(int i = 0; i < argv; i++){
       args[i] = (char *) malloc(LEN*sizeof(char));
       strcpy(args[i], create_params[i].c_str());
    }
    if(rrdtools_create(argv, args) == 0){
        message_alert("RRD " + create_params[1] + " successfully created!");
    } else {
        message_alert(rrd_get_error());
    }
    cout << "argv: " << argv << endl << "argc: ";
    for(int i = 0; i < create_params.size(); i++){
        cout << create_params[i] << endl;
    }
    this->close();
}
