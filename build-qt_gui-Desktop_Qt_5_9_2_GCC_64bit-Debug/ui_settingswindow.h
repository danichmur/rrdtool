/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QWidget *centralwidget;
    QLabel *lbDB;
    QLabel *lbRes;
    QPushButton *pbSave;
    QTextEdit *teDB;
    QTextEdit *teRES;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QStringLiteral("SettingsWindow"));
        SettingsWindow->resize(1034, 258);
        centralwidget = new QWidget(SettingsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lbDB = new QLabel(centralwidget);
        lbDB->setObjectName(QStringLiteral("lbDB"));
        lbDB->setGeometry(QRect(40, 50, 171, 41));
        lbRes = new QLabel(centralwidget);
        lbRes->setObjectName(QStringLiteral("lbRes"));
        lbRes->setGeometry(QRect(40, 110, 141, 41));
        pbSave = new QPushButton(centralwidget);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        pbSave->setGeometry(QRect(379, 160, 161, 36));
        teDB = new QTextEdit(centralwidget);
        teDB->setObjectName(QStringLiteral("teDB"));
        teDB->setGeometry(QRect(210, 40, 721, 51));
        teRES = new QTextEdit(centralwidget);
        teRES->setObjectName(QStringLiteral("teRES"));
        teRES->setGeometry(QRect(210, 100, 721, 51));
        SettingsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SettingsWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1034, 30));
        SettingsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SettingsWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SettingsWindow->setStatusBar(statusbar);

        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QApplication::translate("SettingsWindow", "Settings", Q_NULLPTR));
        lbDB->setText(QApplication::translate("SettingsWindow", "DB directory:", Q_NULLPTR));
        lbRes->setText(QApplication::translate("SettingsWindow", "Res directory:", Q_NULLPTR));
        pbSave->setText(QApplication::translate("SettingsWindow", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
