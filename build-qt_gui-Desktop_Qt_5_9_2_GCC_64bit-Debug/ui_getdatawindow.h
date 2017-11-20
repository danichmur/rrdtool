/********************************************************************************
** Form generated from reading UI file 'getdatawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETDATAWINDOW_H
#define UI_GETDATAWINDOW_H

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

class Ui_GetDataWindow
{
public:
    QWidget *centralwidget;
    QLabel *lName;
    QComboBox *cbName;
    QLabel *lStart;
    QTextEdit *teStart;
    QLabel *lEnd;
    QTextEdit *teEnd;
    QLabel *lStep;
    QTextEdit *teStep;
    QComboBox *cbType;
    QLabel *lType;
    QPushButton *pbFetch;
    QLabel *lCF;
    QComboBox *cbCF;
    QLabel *lFile;
    QTextEdit *teFile;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GetDataWindow)
    {
        if (GetDataWindow->objectName().isEmpty())
            GetDataWindow->setObjectName(QStringLiteral("GetDataWindow"));
        GetDataWindow->resize(494, 674);
        centralwidget = new QWidget(GetDataWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lName = new QLabel(centralwidget);
        lName->setObjectName(QStringLiteral("lName"));
        lName->setGeometry(QRect(70, 30, 98, 51));
        cbName = new QComboBox(centralwidget);
        cbName->setObjectName(QStringLiteral("cbName"));
        cbName->setGeometry(QRect(170, 30, 241, 51));
        lStart = new QLabel(centralwidget);
        lStart->setObjectName(QStringLiteral("lStart"));
        lStart->setGeometry(QRect(70, 100, 98, 51));
        teStart = new QTextEdit(centralwidget);
        teStart->setObjectName(QStringLiteral("teStart"));
        teStart->setGeometry(QRect(170, 100, 241, 41));
        lEnd = new QLabel(centralwidget);
        lEnd->setObjectName(QStringLiteral("lEnd"));
        lEnd->setGeometry(QRect(70, 160, 98, 51));
        teEnd = new QTextEdit(centralwidget);
        teEnd->setObjectName(QStringLiteral("teEnd"));
        teEnd->setGeometry(QRect(170, 160, 241, 41));
        lStep = new QLabel(centralwidget);
        lStep->setObjectName(QStringLiteral("lStep"));
        lStep->setGeometry(QRect(70, 220, 98, 51));
        teStep = new QTextEdit(centralwidget);
        teStep->setObjectName(QStringLiteral("teStep"));
        teStep->setGeometry(QRect(170, 220, 241, 41));
        cbType = new QComboBox(centralwidget);
        cbType->setObjectName(QStringLiteral("cbType"));
        cbType->setGeometry(QRect(170, 350, 241, 51));
        lType = new QLabel(centralwidget);
        lType->setObjectName(QStringLiteral("lType"));
        lType->setGeometry(QRect(70, 350, 98, 51));
        pbFetch = new QPushButton(centralwidget);
        pbFetch->setObjectName(QStringLiteral("pbFetch"));
        pbFetch->setGeometry(QRect(290, 550, 130, 51));
        lCF = new QLabel(centralwidget);
        lCF->setObjectName(QStringLiteral("lCF"));
        lCF->setGeometry(QRect(70, 280, 98, 51));
        cbCF = new QComboBox(centralwidget);
        cbCF->setObjectName(QStringLiteral("cbCF"));
        cbCF->setGeometry(QRect(170, 280, 241, 51));
        lFile = new QLabel(centralwidget);
        lFile->setObjectName(QStringLiteral("lFile"));
        lFile->setGeometry(QRect(70, 420, 98, 51));
        teFile = new QTextEdit(centralwidget);
        teFile->setObjectName(QStringLiteral("teFile"));
        teFile->setGeometry(QRect(170, 420, 241, 41));
        GetDataWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GetDataWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 494, 30));
        GetDataWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GetDataWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GetDataWindow->setStatusBar(statusbar);

        retranslateUi(GetDataWindow);

        QMetaObject::connectSlotsByName(GetDataWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GetDataWindow)
    {
        GetDataWindow->setWindowTitle(QApplication::translate("GetDataWindow", "Data", Q_NULLPTR));
        lName->setText(QApplication::translate("GetDataWindow", "Name:", Q_NULLPTR));
        lStart->setText(QApplication::translate("GetDataWindow", "Start:", Q_NULLPTR));
        lEnd->setText(QApplication::translate("GetDataWindow", "End:", Q_NULLPTR));
        lStep->setText(QApplication::translate("GetDataWindow", "Step:", Q_NULLPTR));
        cbType->clear();
        cbType->insertItems(0, QStringList()
         << QApplication::translate("GetDataWindow", "JSON", Q_NULLPTR)
         << QApplication::translate("GetDataWindow", "CSV", Q_NULLPTR)
         << QApplication::translate("GetDataWindow", "GRAPH", Q_NULLPTR)
        );
        lType->setText(QApplication::translate("GetDataWindow", "Type:", Q_NULLPTR));
        pbFetch->setText(QApplication::translate("GetDataWindow", "Fetch", Q_NULLPTR));
        lCF->setText(QApplication::translate("GetDataWindow", "CF:", Q_NULLPTR));
        cbCF->clear();
        cbCF->insertItems(0, QStringList()
         << QApplication::translate("GetDataWindow", "Average", Q_NULLPTR)
         << QApplication::translate("GetDataWindow", "Min", Q_NULLPTR)
         << QApplication::translate("GetDataWindow", "Max", Q_NULLPTR)
         << QApplication::translate("GetDataWindow", "Last", Q_NULLPTR)
        );
        lFile->setText(QApplication::translate("GetDataWindow", "File:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GetDataWindow: public Ui_GetDataWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETDATAWINDOW_H
