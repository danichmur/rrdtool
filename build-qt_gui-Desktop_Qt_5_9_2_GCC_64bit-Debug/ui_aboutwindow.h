/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QStringLiteral("AboutWindow"));
        AboutWindow->resize(468, 246);
        centralwidget = new QWidget(AboutWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 341, 61));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 80, 391, 71));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 130, 211, 51));
        AboutWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AboutWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 468, 30));
        AboutWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AboutWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AboutWindow->setStatusBar(statusbar);

        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "About", Q_NULLPTR));
        label->setText(QApplication::translate("AboutWindow", "RRDTools v 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("AboutWindow", "GUI for rrdtools", Q_NULLPTR));
        label_3->setText(QApplication::translate("AboutWindow", " by Daniel Muraveyko", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
