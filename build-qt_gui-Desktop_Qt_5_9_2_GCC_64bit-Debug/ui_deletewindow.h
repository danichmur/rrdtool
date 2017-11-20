/********************************************************************************
** Form generated from reading UI file 'deletewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOW_H
#define UI_DELETEWINDOW_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteWindow
{
public:
    QWidget *centralwidget;
    QComboBox *cbName;
    QLabel *lbName;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteWindow)
    {
        if (DeleteWindow->objectName().isEmpty())
            DeleteWindow->setObjectName(QStringLiteral("DeleteWindow"));
        DeleteWindow->resize(380, 234);
        centralwidget = new QWidget(DeleteWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        cbName = new QComboBox(centralwidget);
        cbName->setObjectName(QStringLiteral("cbName"));
        cbName->setGeometry(QRect(130, 40, 201, 41));
        lbName = new QLabel(centralwidget);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setGeometry(QRect(40, 44, 98, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(139, 130, 191, 36));
        DeleteWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeleteWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 380, 30));
        DeleteWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DeleteWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DeleteWindow->setStatusBar(statusbar);

        retranslateUi(DeleteWindow);

        QMetaObject::connectSlotsByName(DeleteWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteWindow)
    {
        DeleteWindow->setWindowTitle(QApplication::translate("DeleteWindow", "Delete", Q_NULLPTR));
        lbName->setText(QApplication::translate("DeleteWindow", "Name:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DeleteWindow", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteWindow: public Ui_DeleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
