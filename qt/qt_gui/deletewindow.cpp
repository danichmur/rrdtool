#include "deletewindow.h"
#include "ui_deletewindow.h"
#define COUNT 20
#define LEN 4096

DeleteWindow::DeleteWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteWindow)
{
    ui->setupUi(this);
    fill_cb();
}

DeleteWindow::~DeleteWindow()
{
    delete ui;
}

void DeleteWindow::on_pushButton_clicked()
{
    QComboBox* cbName = this->findChild<QComboBox*>("cbName");
    if(rrdtools_remove(cbName->currentText().toStdString().c_str()) != 0){
        QMessageBox msgBox;
        msgBox.setText(QString::fromStdString("Can't remove rrd!"));
        msgBox.exec();
    }
}

void DeleteWindow::fill_cb(){
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
