#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include "rrdtools.h"
#include "config_manager.h"

namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = 0);
    ~SettingsWindow();

private slots:
    void on_pbSave_clicked();

private:
    void fill();
    Ui::SettingsWindow *ui;
};

#endif // SETTINGSWINDOW_H
