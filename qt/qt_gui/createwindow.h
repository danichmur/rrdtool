#ifndef CREATEWINDOW_H
#define CREATEWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class CreateWindow;
}

class CreateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateWindow(QWidget *parent = 0);
    ~CreateWindow();

private slots:
    void on_pbCreate_clicked();

private:
    bool check_rra(std::string num);
    bool check_ds(std::string num);
    Ui::CreateWindow *ui;
};

#endif // CREATEWINDOW_H
