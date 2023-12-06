/********************************************************************************
** Form generated from reading UI file 'arduino.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARDUINO_H
#define UI_ARDUINO_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnOuvrir;
    QPushButton *btnFermer;
    QLabel *lblLumiere;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1192, 608);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnOuvrir = new QPushButton(centralWidget);
        btnOuvrir->setObjectName(QStringLiteral("btnOuvrir"));

        verticalLayout->addWidget(btnOuvrir);

        btnFermer = new QPushButton(centralWidget);
        btnFermer->setObjectName(QStringLiteral("btnFermer"));

        verticalLayout->addWidget(btnFermer);

        lblLumiere = new QLabel(centralWidget);
        lblLumiere->setObjectName(QStringLiteral("lblLumiere"));

        verticalLayout->addWidget(lblLumiere);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1192, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(btnOuvrir, SIGNAL(clicked()), MainWindow, SLOT(on_btnOuvrir_clicked()));
        QObject::connect(btnFermer, SIGNAL(clicked()), MainWindow, SLOT(on_btnFermer_clicked()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btnOuvrir->setText(QApplication::translate("MainWindow", "Ouvrir Bo\303\256te", Q_NULLPTR));
        btnFermer->setText(QApplication::translate("MainWindow", "Fermer Bo\303\256te", Q_NULLPTR));
        lblLumiere->setText(QApplication::translate("MainWindow", "Valeur de lumi\303\250re :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARDUINO_H
