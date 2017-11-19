/********************************************************************************
** Form generated from reading UI file 'renamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEWINDOW_H
#define UI_RENAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RenameWindow
{
public:
    QWidget *centralwidget;
    QComboBox *cbNames;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *teName;
    QPushButton *pbRename;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RenameWindow)
    {
        if (RenameWindow->objectName().isEmpty())
            RenameWindow->setObjectName(QStringLiteral("RenameWindow"));
        RenameWindow->resize(482, 296);
        centralwidget = new QWidget(RenameWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        cbNames = new QComboBox(centralwidget);
        cbNames->setObjectName(QStringLiteral("cbNames"));
        cbNames->setGeometry(QRect(190, 20, 201, 40));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 98, 40));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 90, 141, 40));
        teName = new QTextEdit(centralwidget);
        teName->setObjectName(QStringLiteral("teName"));
        teName->setGeometry(QRect(190, 90, 201, 40));
        pbRename = new QPushButton(centralwidget);
        pbRename->setObjectName(QStringLiteral("pbRename"));
        pbRename->setGeometry(QRect(260, 180, 130, 40));
        RenameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RenameWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 482, 30));
        RenameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RenameWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RenameWindow->setStatusBar(statusbar);

        retranslateUi(RenameWindow);

        QMetaObject::connectSlotsByName(RenameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RenameWindow)
    {
        RenameWindow->setWindowTitle(QApplication::translate("RenameWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("RenameWindow", "RRD:", Q_NULLPTR));
        label_2->setText(QApplication::translate("RenameWindow", "New name:", Q_NULLPTR));
        pbRename->setText(QApplication::translate("RenameWindow", "Rename", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RenameWindow: public Ui_RenameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEWINDOW_H
