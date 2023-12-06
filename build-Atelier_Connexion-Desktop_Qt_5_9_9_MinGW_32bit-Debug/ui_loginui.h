/********************************************************************************
** Form generated from reading UI file 'loginui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINUI_H
#define UI_LOGINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loginui
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Loginui)
    {
        if (Loginui->objectName().isEmpty())
            Loginui->setObjectName(QStringLiteral("Loginui"));
        Loginui->resize(800, 600);
        centralwidget = new QWidget(Loginui);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 310, 101, 41));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(270, 160, 131, 51));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 230, 131, 51));
        Loginui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Loginui);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Loginui->setMenuBar(menubar);
        statusbar = new QStatusBar(Loginui);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Loginui->setStatusBar(statusbar);

        retranslateUi(Loginui);

        QMetaObject::connectSlotsByName(Loginui);
    } // setupUi

    void retranslateUi(QMainWindow *Loginui)
    {
        Loginui->setWindowTitle(QApplication::translate("Loginui", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Loginui", "Log in", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Loginui: public Ui_Loginui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINUI_H
