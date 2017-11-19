/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAll_databases;
    QAction *actionSettings;
    QAction *actionName;
    QAction *actionPropertis;
    QAction *actionGet_data;
    QAction *actionInfo;
    QAction *actionAbou;
    QAction *actionCreate_database;
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(542, 816);
        actionAll_databases = new QAction(MainWindow);
        actionAll_databases->setObjectName(QStringLiteral("actionAll_databases"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionName = new QAction(MainWindow);
        actionName->setObjectName(QStringLiteral("actionName"));
        actionPropertis = new QAction(MainWindow);
        actionPropertis->setObjectName(QStringLiteral("actionPropertis"));
        actionGet_data = new QAction(MainWindow);
        actionGet_data->setObjectName(QStringLiteral("actionGet_data"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QStringLiteral("actionInfo"));
        actionAbou = new QAction(MainWindow);
        actionAbou->setObjectName(QStringLiteral("actionAbou"));
        actionCreate_database = new QAction(MainWindow);
        actionCreate_database->setObjectName(QStringLiteral("actionCreate_database"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 501, 121));
        textBrowser->setAutoFillBackground(false);
        textBrowser->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 542, 30));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionCreate_database);
        menuFile->addSeparator();
        menuFile->addAction(actionAll_databases);
        menuFile->addSeparator();
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuEdit->addAction(actionName);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPropertis);
        menuTools->addAction(actionGet_data);
        menuTools->addSeparator();
        menuTools->addAction(actionInfo);
        menuHelp->addAction(actionAbou);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionAll_databases->setText(QApplication::translate("MainWindow", "All databases...", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        actionName->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        actionPropertis->setText(QApplication::translate("MainWindow", "Propertis", Q_NULLPTR));
        actionGet_data->setText(QApplication::translate("MainWindow", "Get data", Q_NULLPTR));
        actionInfo->setText(QApplication::translate("MainWindow", "Info", Q_NULLPTR));
        actionAbou->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionCreate_database->setText(QApplication::translate("MainWindow", "Create database...", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
