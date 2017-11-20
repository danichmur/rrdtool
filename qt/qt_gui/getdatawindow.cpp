#include "getdatawindow.h"
#include "ui_getdatawindow.h"
#define COUNT 20
#define LEN 4096

using namespace std;

GetDataWindow::GetDataWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GetDataWindow)
{
    ui->setupUi(this);
    fill_cb_gd();
}

GetDataWindow::~GetDataWindow()
{
    delete ui;
}

void gd_message_alert(string text){
    QMessageBox msgBox;
    msgBox.setText(QString::fromStdString(text));
    msgBox.exec();
}

void GetDataWindow::fill_cb_gd(){
    QComboBox* cbName = this->findChild<QComboBox*>("cbName");
    char **list = (char **) calloc(COUNT, sizeof(char *));
    for(int i = 0; i < COUNT; i++){
        list[i] = (char *) calloc(LEN, sizeof(char));
    }
    get_db_list(list);
    int i = 0;
    while(strcmp(list[i], "") != 0){
        cbName->addItem(list[i]);
        free(list[i++]);
    }
    free(list);
}


bool check_start_end(QTextEdit* te){
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

bool check_step(QTextEdit* te){
    std::string text = te->toPlainText().toUtf8().constData();
    try {
        string::size_type sz;
        int l = stoi(text,&sz);
        if(l < 0){
            gd_message_alert(string("step must be > 0"));
            return false;
        }
    }
    catch (const invalid_argument& ia) {
        gd_message_alert(string("check step field"));
        return false;
    }
    return true;
}

void GetDataWindow::on_pbFetch_clicked()
{
    QTextEdit* teEnd = this->findChild<QTextEdit*>("teEnd");
    QTextEdit* teStart = this->findChild<QTextEdit*>("teStart");
    QTextEdit* teStep = this->findChild<QTextEdit*>("teStep");
    QTextEdit* teFile = this->findChild<QTextEdit*>("teFile");
    QComboBox* cbCF = this->findChild<QComboBox*>("cbCF");
    QComboBox* cbName = this->findChild<QComboBox*>("cbName");
    QComboBox* cbType = this->findChild<QComboBox*>("cbType");

    if(!check_start_end(teStart)){
        gd_message_alert(string("check start field"));
        return;
    }

    if(!check_start_end(teEnd)){
        gd_message_alert(string("check end field"));
        return;
    }

    if(!check_step(teStep)){
        gd_message_alert(string("check step field"));
        return;
    }

    string start_str = teStart->toPlainText().toUtf8().constData();
    string::size_type sz;
    time_t start = stol(start_str,&sz);
    string end_str = teEnd->toPlainText().toUtf8().constData();
    time_t end = stol(end_str,&sz);
    unsigned long step = stol(teStep->toPlainText().toUtf8().constData(), &sz);
    string db_str = cbName->currentText().toUtf8().constData();
    const char *db_path = db_str.c_str();
    string cf_str = cbCF->currentText().toUpper().toUtf8().constData();
    const char *cf = cf_str.c_str();
    string file_str = teFile->toPlainText().toUtf8().constData();
    const char *file = file_str.c_str();
    enum FETCH_TYPE a;
    string type = cbType->currentText().toUtf8().constData();
    if(type.compare("JSON") == 0){
        a = JSON;
    } else {
        a = CSV;
    }

    if(rrdtools_fetch_in_file(db_path, cf, &start, &end, &step, file, a) == 0){
        QString path = get_res_path();
        QDesktopServices::openUrl(QUrl::fromLocalFile(path));
    } else {
        gd_message_alert(rrd_get_error());
    }
}

