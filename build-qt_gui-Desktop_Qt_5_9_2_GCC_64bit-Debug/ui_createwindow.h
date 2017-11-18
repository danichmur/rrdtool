/********************************************************************************
** Form generated from reading UI file 'createwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWINDOW_H
#define UI_CREATEWINDOW_H

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

class Ui_CreateWindow
{
public:
    QWidget *centralwidget;
    QLabel *lbName;
    QTextEdit *teName;
    QLabel *lbStart;
    QTextEdit *teStart;
    QTextEdit *teStep;
    QLabel *lbStep;
    QLabel *lbDS;
    QPushButton *pbCreate;
    QComboBox *cbDS1Type;
    QLabel *lbDS1Name;
    QTextEdit *teDS1Name;
    QLabel *lbDS1Type;
    QLabel *lbDS1Hb;
    QTextEdit *teDS1Hb;
    QLabel *lbDS1Min;
    QTextEdit *teDS1Min;
    QTextEdit *teDS1Max;
    QLabel *lbDS1Max;
    QTextEdit *teDS2Min;
    QTextEdit *teDS2Name;
    QLabel *lbDS2Min;
    QTextEdit *teDS2Max;
    QLabel *lbDS2Max;
    QComboBox *cbDS2Type;
    QLabel *lbDS2Type;
    QTextEdit *teDS2Hb;
    QLabel *lbDS2Hb;
    QLabel *lbDS2Name;
    QLabel *lbRRA;
    QComboBox *cbRRA1Type;
    QLabel *lbRRA1Type;
    QTextEdit *teRRA1Veracity;
    QLabel *lbRRA1Veracity;
    QLabel *lbRRA1PPoints;
    QTextEdit *teRRA1PPoints;
    QLabel *lbRRA1NoC;
    QTextEdit *teRRA1NoC;
    QComboBox *cbRRA2Type;
    QLabel *lbRRA2PPoints;
    QLabel *lbRRA2Type;
    QTextEdit *teRRA2Veracity;
    QLabel *lbRRA2Veracity;
    QTextEdit *teRRA2NoC;
    QTextEdit *teRRA2PPoints;
    QLabel *lbRRA2NoC;
    QComboBox *cbRRA3Type;
    QLabel *lbRRA3PPoints;
    QLabel *lbRRA3Type;
    QTextEdit *teRRA3Veracity;
    QLabel *lbRRA3Veracity;
    QTextEdit *teRRA3NoC;
    QTextEdit *teRRA3PPoints;
    QLabel *lbRRA3NoC;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateWindow)
    {
        if (CreateWindow->objectName().isEmpty())
            CreateWindow->setObjectName(QStringLiteral("CreateWindow"));
        CreateWindow->resize(696, 1056);
        centralwidget = new QWidget(CreateWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lbName = new QLabel(centralwidget);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setGeometry(QRect(60, 30, 121, 41));
        QFont font;
        font.setPointSize(16);
        font.setKerning(true);
        lbName->setFont(font);
        lbName->setAlignment(Qt::AlignBottom|Qt::AlignJustify);
        teName = new QTextEdit(centralwidget);
        teName->setObjectName(QStringLiteral("teName"));
        teName->setGeometry(QRect(160, 30, 441, 41));
        lbStart = new QLabel(centralwidget);
        lbStart->setObjectName(QStringLiteral("lbStart"));
        lbStart->setGeometry(QRect(60, 90, 121, 41));
        lbStart->setFont(font);
        lbStart->setAlignment(Qt::AlignBottom|Qt::AlignJustify);
        teStart = new QTextEdit(centralwidget);
        teStart->setObjectName(QStringLiteral("teStart"));
        teStart->setGeometry(QRect(160, 90, 241, 41));
        QFont font1;
        font1.setPointSize(16);
        teStart->setFont(font1);
        teStart->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teStep = new QTextEdit(centralwidget);
        teStep->setObjectName(QStringLiteral("teStep"));
        teStep->setGeometry(QRect(500, 90, 101, 41));
        teStep->setFont(font1);
        lbStep = new QLabel(centralwidget);
        lbStep->setObjectName(QStringLiteral("lbStep"));
        lbStep->setGeometry(QRect(410, 90, 121, 41));
        lbStep->setFont(font);
        lbStep->setAlignment(Qt::AlignBottom|Qt::AlignJustify);
        lbDS = new QLabel(centralwidget);
        lbDS->setObjectName(QStringLiteral("lbDS"));
        lbDS->setGeometry(QRect(60, 140, 121, 41));
        QFont font2;
        font2.setPointSize(18);
        font2.setKerning(true);
        lbDS->setFont(font2);
        lbDS->setAlignment(Qt::AlignBottom|Qt::AlignJustify);
        pbCreate = new QPushButton(centralwidget);
        pbCreate->setObjectName(QStringLiteral("pbCreate"));
        pbCreate->setGeometry(QRect(500, 930, 171, 61));
        cbDS1Type = new QComboBox(centralwidget);
        cbDS1Type->setObjectName(QStringLiteral("cbDS1Type"));
        cbDS1Type->setGeometry(QRect(190, 250, 121, 33));
        lbDS1Name = new QLabel(centralwidget);
        lbDS1Name->setObjectName(QStringLiteral("lbDS1Name"));
        lbDS1Name->setGeometry(QRect(120, 200, 98, 25));
        teDS1Name = new QTextEdit(centralwidget);
        teDS1Name->setObjectName(QStringLiteral("teDS1Name"));
        teDS1Name->setGeometry(QRect(190, 190, 391, 41));
        lbDS1Type = new QLabel(centralwidget);
        lbDS1Type->setObjectName(QStringLiteral("lbDS1Type"));
        lbDS1Type->setGeometry(QRect(120, 250, 98, 31));
        lbDS1Hb = new QLabel(centralwidget);
        lbDS1Hb->setObjectName(QStringLiteral("lbDS1Hb"));
        lbDS1Hb->setGeometry(QRect(340, 250, 131, 31));
        teDS1Hb = new QTextEdit(centralwidget);
        teDS1Hb->setObjectName(QStringLiteral("teDS1Hb"));
        teDS1Hb->setGeometry(QRect(460, 250, 121, 31));
        teDS1Hb->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbDS1Min = new QLabel(centralwidget);
        lbDS1Min->setObjectName(QStringLiteral("lbDS1Min"));
        lbDS1Min->setGeometry(QRect(120, 300, 98, 31));
        teDS1Min = new QTextEdit(centralwidget);
        teDS1Min->setObjectName(QStringLiteral("teDS1Min"));
        teDS1Min->setGeometry(QRect(190, 300, 121, 31));
        teDS1Min->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teDS1Max = new QTextEdit(centralwidget);
        teDS1Max->setObjectName(QStringLiteral("teDS1Max"));
        teDS1Max->setGeometry(QRect(460, 300, 121, 31));
        teDS1Max->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbDS1Max = new QLabel(centralwidget);
        lbDS1Max->setObjectName(QStringLiteral("lbDS1Max"));
        lbDS1Max->setGeometry(QRect(400, 300, 98, 31));
        teDS2Min = new QTextEdit(centralwidget);
        teDS2Min->setObjectName(QStringLiteral("teDS2Min"));
        teDS2Min->setGeometry(QRect(190, 470, 121, 31));
        teDS2Min->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teDS2Name = new QTextEdit(centralwidget);
        teDS2Name->setObjectName(QStringLiteral("teDS2Name"));
        teDS2Name->setGeometry(QRect(190, 360, 391, 41));
        lbDS2Min = new QLabel(centralwidget);
        lbDS2Min->setObjectName(QStringLiteral("lbDS2Min"));
        lbDS2Min->setGeometry(QRect(120, 470, 98, 31));
        teDS2Max = new QTextEdit(centralwidget);
        teDS2Max->setObjectName(QStringLiteral("teDS2Max"));
        teDS2Max->setGeometry(QRect(460, 470, 121, 31));
        teDS2Max->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbDS2Max = new QLabel(centralwidget);
        lbDS2Max->setObjectName(QStringLiteral("lbDS2Max"));
        lbDS2Max->setGeometry(QRect(400, 470, 98, 31));
        cbDS2Type = new QComboBox(centralwidget);
        cbDS2Type->setObjectName(QStringLiteral("cbDS2Type"));
        cbDS2Type->setGeometry(QRect(190, 420, 121, 33));
        lbDS2Type = new QLabel(centralwidget);
        lbDS2Type->setObjectName(QStringLiteral("lbDS2Type"));
        lbDS2Type->setGeometry(QRect(120, 420, 98, 31));
        teDS2Hb = new QTextEdit(centralwidget);
        teDS2Hb->setObjectName(QStringLiteral("teDS2Hb"));
        teDS2Hb->setGeometry(QRect(460, 420, 121, 31));
        teDS2Hb->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbDS2Hb = new QLabel(centralwidget);
        lbDS2Hb->setObjectName(QStringLiteral("lbDS2Hb"));
        lbDS2Hb->setGeometry(QRect(340, 420, 131, 31));
        lbDS2Name = new QLabel(centralwidget);
        lbDS2Name->setObjectName(QStringLiteral("lbDS2Name"));
        lbDS2Name->setGeometry(QRect(120, 370, 98, 25));
        lbRRA = new QLabel(centralwidget);
        lbRRA->setObjectName(QStringLiteral("lbRRA"));
        lbRRA->setGeometry(QRect(60, 530, 121, 41));
        lbRRA->setFont(font2);
        lbRRA->setAlignment(Qt::AlignBottom|Qt::AlignJustify);
        cbRRA1Type = new QComboBox(centralwidget);
        cbRRA1Type->setObjectName(QStringLiteral("cbRRA1Type"));
        cbRRA1Type->setGeometry(QRect(190, 580, 121, 33));
        lbRRA1Type = new QLabel(centralwidget);
        lbRRA1Type->setObjectName(QStringLiteral("lbRRA1Type"));
        lbRRA1Type->setGeometry(QRect(80, 580, 98, 31));
        teRRA1Veracity = new QTextEdit(centralwidget);
        teRRA1Veracity->setObjectName(QStringLiteral("teRRA1Veracity"));
        teRRA1Veracity->setGeometry(QRect(520, 580, 101, 31));
        teRRA1Veracity->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbRRA1Veracity = new QLabel(centralwidget);
        lbRRA1Veracity->setObjectName(QStringLiteral("lbRRA1Veracity"));
        lbRRA1Veracity->setGeometry(QRect(420, 580, 131, 31));
        lbRRA1PPoints = new QLabel(centralwidget);
        lbRRA1PPoints->setObjectName(QStringLiteral("lbRRA1PPoints"));
        lbRRA1PPoints->setGeometry(QRect(80, 620, 161, 31));
        teRRA1PPoints = new QTextEdit(centralwidget);
        teRRA1PPoints->setObjectName(QStringLiteral("teRRA1PPoints"));
        teRRA1PPoints->setGeometry(QRect(190, 620, 121, 31));
        teRRA1PPoints->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbRRA1NoC = new QLabel(centralwidget);
        lbRRA1NoC->setObjectName(QStringLiteral("lbRRA1NoC"));
        lbRRA1NoC->setGeometry(QRect(340, 620, 161, 31));
        teRRA1NoC = new QTextEdit(centralwidget);
        teRRA1NoC->setObjectName(QStringLiteral("teRRA1NoC"));
        teRRA1NoC->setGeometry(QRect(520, 620, 101, 31));
        teRRA1NoC->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        cbRRA2Type = new QComboBox(centralwidget);
        cbRRA2Type->setObjectName(QStringLiteral("cbRRA2Type"));
        cbRRA2Type->setGeometry(QRect(190, 680, 121, 33));
        lbRRA2PPoints = new QLabel(centralwidget);
        lbRRA2PPoints->setObjectName(QStringLiteral("lbRRA2PPoints"));
        lbRRA2PPoints->setGeometry(QRect(80, 720, 161, 31));
        lbRRA2Type = new QLabel(centralwidget);
        lbRRA2Type->setObjectName(QStringLiteral("lbRRA2Type"));
        lbRRA2Type->setGeometry(QRect(80, 680, 98, 31));
        teRRA2Veracity = new QTextEdit(centralwidget);
        teRRA2Veracity->setObjectName(QStringLiteral("teRRA2Veracity"));
        teRRA2Veracity->setGeometry(QRect(520, 680, 101, 31));
        teRRA2Veracity->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbRRA2Veracity = new QLabel(centralwidget);
        lbRRA2Veracity->setObjectName(QStringLiteral("lbRRA2Veracity"));
        lbRRA2Veracity->setGeometry(QRect(420, 680, 131, 31));
        teRRA2NoC = new QTextEdit(centralwidget);
        teRRA2NoC->setObjectName(QStringLiteral("teRRA2NoC"));
        teRRA2NoC->setGeometry(QRect(520, 720, 101, 31));
        teRRA2NoC->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teRRA2PPoints = new QTextEdit(centralwidget);
        teRRA2PPoints->setObjectName(QStringLiteral("teRRA2PPoints"));
        teRRA2PPoints->setGeometry(QRect(190, 720, 121, 31));
        teRRA2PPoints->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbRRA2NoC = new QLabel(centralwidget);
        lbRRA2NoC->setObjectName(QStringLiteral("lbRRA2NoC"));
        lbRRA2NoC->setGeometry(QRect(340, 720, 161, 31));
        cbRRA3Type = new QComboBox(centralwidget);
        cbRRA3Type->setObjectName(QStringLiteral("cbRRA3Type"));
        cbRRA3Type->setGeometry(QRect(190, 780, 121, 33));
        lbRRA3PPoints = new QLabel(centralwidget);
        lbRRA3PPoints->setObjectName(QStringLiteral("lbRRA3PPoints"));
        lbRRA3PPoints->setGeometry(QRect(80, 820, 161, 31));
        lbRRA3Type = new QLabel(centralwidget);
        lbRRA3Type->setObjectName(QStringLiteral("lbRRA3Type"));
        lbRRA3Type->setGeometry(QRect(80, 780, 98, 31));
        teRRA3Veracity = new QTextEdit(centralwidget);
        teRRA3Veracity->setObjectName(QStringLiteral("teRRA3Veracity"));
        teRRA3Veracity->setGeometry(QRect(520, 780, 101, 31));
        teRRA3Veracity->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbRRA3Veracity = new QLabel(centralwidget);
        lbRRA3Veracity->setObjectName(QStringLiteral("lbRRA3Veracity"));
        lbRRA3Veracity->setGeometry(QRect(420, 780, 131, 31));
        teRRA3NoC = new QTextEdit(centralwidget);
        teRRA3NoC->setObjectName(QStringLiteral("teRRA3NoC"));
        teRRA3NoC->setGeometry(QRect(520, 820, 101, 31));
        teRRA3NoC->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teRRA3PPoints = new QTextEdit(centralwidget);
        teRRA3PPoints->setObjectName(QStringLiteral("teRRA3PPoints"));
        teRRA3PPoints->setGeometry(QRect(190, 820, 121, 31));
        teRRA3PPoints->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lbRRA3NoC = new QLabel(centralwidget);
        lbRRA3NoC->setObjectName(QStringLiteral("lbRRA3NoC"));
        lbRRA3NoC->setGeometry(QRect(340, 820, 161, 31));
        CreateWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 696, 30));
        CreateWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CreateWindow->setStatusBar(statusbar);

        retranslateUi(CreateWindow);

        QMetaObject::connectSlotsByName(CreateWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CreateWindow)
    {
        CreateWindow->setWindowTitle(QApplication::translate("CreateWindow", "MainWindow", Q_NULLPTR));
        lbName->setText(QApplication::translate("CreateWindow", "Name:", Q_NULLPTR));
        lbStart->setText(QApplication::translate("CreateWindow", "Start:", Q_NULLPTR));
        teStart->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">N</p></body></html>", Q_NULLPTR));
        teStep->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">300</span></p></body></html>", Q_NULLPTR));
        lbStep->setText(QApplication::translate("CreateWindow", "Step:", Q_NULLPTR));
        lbDS->setText(QApplication::translate("CreateWindow", "DS:", Q_NULLPTR));
        pbCreate->setText(QApplication::translate("CreateWindow", "Create", Q_NULLPTR));
        cbDS1Type->clear();
        cbDS1Type->insertItems(0, QStringList()
         << QApplication::translate("CreateWindow", "Counter", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Gauge", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Dcounter", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Derive", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Dderive", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Absolute", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Compute", Q_NULLPTR)
        );
        lbDS1Name->setText(QApplication::translate("CreateWindow", "Name:", Q_NULLPTR));
        lbDS1Type->setText(QApplication::translate("CreateWindow", "Type:", Q_NULLPTR));
        lbDS1Hb->setText(QApplication::translate("CreateWindow", "Heartbeat:", Q_NULLPTR));
        teDS1Hb->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">600</p></body></html>", Q_NULLPTR));
        lbDS1Min->setText(QApplication::translate("CreateWindow", "Min:", Q_NULLPTR));
        teDS1Min->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">U</p></body></html>", Q_NULLPTR));
        teDS1Max->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">U</p></body></html>", Q_NULLPTR));
        lbDS1Max->setText(QApplication::translate("CreateWindow", "Max:", Q_NULLPTR));
        teDS2Min->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">U</p></body></html>", Q_NULLPTR));
        lbDS2Min->setText(QApplication::translate("CreateWindow", "Min:", Q_NULLPTR));
        teDS2Max->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">U</p></body></html>", Q_NULLPTR));
        lbDS2Max->setText(QApplication::translate("CreateWindow", "Max:", Q_NULLPTR));
        cbDS2Type->clear();
        cbDS2Type->insertItems(0, QStringList()
         << QApplication::translate("CreateWindow", "Counter", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Gauge", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Dcounter", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Derive", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Dderive", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Absolute", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Compute", Q_NULLPTR)
        );
        lbDS2Type->setText(QApplication::translate("CreateWindow", "Type:", Q_NULLPTR));
        teDS2Hb->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">600</p></body></html>", Q_NULLPTR));
        lbDS2Hb->setText(QApplication::translate("CreateWindow", "Heartbeat:", Q_NULLPTR));
        lbDS2Name->setText(QApplication::translate("CreateWindow", "Name:", Q_NULLPTR));
        lbRRA->setText(QApplication::translate("CreateWindow", "RRA:", Q_NULLPTR));
        cbRRA1Type->clear();
        cbRRA1Type->insertItems(0, QStringList()
         << QApplication::translate("CreateWindow", "Average", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Min", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Max", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Last", Q_NULLPTR)
        );
        lbRRA1Type->setText(QApplication::translate("CreateWindow", "Type:", Q_NULLPTR));
        teRRA1Veracity->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0.5</p></body></html>", Q_NULLPTR));
        lbRRA1Veracity->setText(QApplication::translate("CreateWindow", "Veracity:", Q_NULLPTR));
        lbRRA1PPoints->setText(QApplication::translate("CreateWindow", "PPoints:", Q_NULLPTR));
        teRRA1PPoints->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        lbRRA1NoC->setText(QApplication::translate("CreateWindow", "Number of cells:", Q_NULLPTR));
        teRRA1NoC->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        cbRRA2Type->clear();
        cbRRA2Type->insertItems(0, QStringList()
         << QApplication::translate("CreateWindow", "Average", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Min", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Max", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Last", Q_NULLPTR)
        );
        lbRRA2PPoints->setText(QApplication::translate("CreateWindow", "PPoints:", Q_NULLPTR));
        lbRRA2Type->setText(QApplication::translate("CreateWindow", "Type:", Q_NULLPTR));
        teRRA2Veracity->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0.5</p></body></html>", Q_NULLPTR));
        lbRRA2Veracity->setText(QApplication::translate("CreateWindow", "Veracity:", Q_NULLPTR));
        teRRA2NoC->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        teRRA2PPoints->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        lbRRA2NoC->setText(QApplication::translate("CreateWindow", "Number of cells:", Q_NULLPTR));
        cbRRA3Type->clear();
        cbRRA3Type->insertItems(0, QStringList()
         << QApplication::translate("CreateWindow", "Average", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Min", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Max", Q_NULLPTR)
         << QApplication::translate("CreateWindow", "Last", Q_NULLPTR)
        );
        lbRRA3PPoints->setText(QApplication::translate("CreateWindow", "PPoints:", Q_NULLPTR));
        lbRRA3Type->setText(QApplication::translate("CreateWindow", "Type:", Q_NULLPTR));
        teRRA3Veracity->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0.5</p></body></html>", Q_NULLPTR));
        lbRRA3Veracity->setText(QApplication::translate("CreateWindow", "Veracity:", Q_NULLPTR));
        teRRA3NoC->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        teRRA3PPoints->setHtml(QApplication::translate("CreateWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        lbRRA3NoC->setText(QApplication::translate("CreateWindow", "Number of cells:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreateWindow: public Ui_CreateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWINDOW_H
