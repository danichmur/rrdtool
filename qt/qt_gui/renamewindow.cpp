#include "renamewindow.h"
#include "ui_renamewindow.h"
#define COUNT 20
#define LEN 4096

using namespace std;

RenameWindow::RenameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RenameWindow)
{
    ui->setupUi(this);
    fill_cb();
}

RenameWindow::~RenameWindow()
{
    delete ui;
}

void RenameWindow::on_pbRename_clicked()
{
    QComboBox* cbNames = this->findChild<QComboBox*>("cbNames");
    QTextEdit* teName = this->findChild<QTextEdit*>("teName");

    if(rrdtools_rename(cbNames->currentText().toStdString().c_str(),
                       teName->toPlainText().toUtf8().constData()) != 0){
        QMessageBox msgBox;
        msgBox.setText(QString::fromStdString(rrd_get_error()));
        msgBox.exec();
    }
}

void RenameWindow::fill_cb(){
    QComboBox* cbNames = this->findChild<QComboBox*>("cbNames");
    char **list = (char **) calloc(COUNT, sizeof(char *));
    for(int i = 0; i < 10; i++){
        list[i] = (char *) calloc(LEN, sizeof(char));
    }
    get_db_list(list);
    int i = 0;
    while(strcmp(list[i], "") != 0){
        cbNames->addItem(list[i]);
        free(list[i++]);
    }
    free(list);
}
