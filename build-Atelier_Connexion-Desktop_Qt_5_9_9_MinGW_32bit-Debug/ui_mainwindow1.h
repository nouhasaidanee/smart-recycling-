/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QWidget *centralwidget;
    QTabWidget *calendrier;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_code;
    QLineEdit *le_type;
    QLineEdit *le_date;
    QLineEdit *le_qte;
    QPushButton *pb_ajouter;
    QLabel *label_4;
    QPushButton *pb_modifier;
    QWidget *tab_4;
    QTableView *tab_charite;
    QWidget *tab;
    QLabel *label_5;
    QLineEdit *le_coude;
    QPushButton *pb_supprimer;
    QWidget *tab_5;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QComboBox *lokza;
    QTableView *table12;
    QPushButton *PDF_pb;
    QWidget *tab_6;
    QTableView *tab_rech;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *coderech;
    QLineEdit *daterech;
    QPushButton *pb_rech_code;
    QPushButton *pb_rech_date;
    QWidget *tab_3;
    QCustomPlot *gplot;
    QPushButton *pb_stat;
    QWidget *tab_7;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_4;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButtonLogout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName(QStringLiteral("MainWindow1"));
        MainWindow1->resize(1139, 671);
        centralwidget = new QWidget(MainWindow1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        calendrier = new QTabWidget(centralwidget);
        calendrier->setObjectName(QStringLiteral("calendrier"));
        calendrier->setGeometry(QRect(80, 50, 871, 461));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 40, 591, 261));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 101, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 81, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 56, 16));
        le_code = new QLineEdit(groupBox);
        le_code->setObjectName(QStringLiteral("le_code"));
        le_code->setGeometry(QRect(150, 30, 113, 22));
        le_type = new QLineEdit(groupBox);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(150, 60, 113, 22));
        le_date = new QLineEdit(groupBox);
        le_date->setObjectName(QStringLiteral("le_date"));
        le_date->setGeometry(QRect(150, 90, 113, 22));
        le_qte = new QLineEdit(groupBox);
        le_qte->setObjectName(QStringLiteral("le_qte"));
        le_qte->setGeometry(QRect(150, 130, 113, 22));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(310, 90, 93, 28));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 130, 56, 16));
        pb_modifier = new QPushButton(groupBox);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(310, 130, 93, 28));
        calendrier->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_charite = new QTableView(tab_4);
        tab_charite->setObjectName(QStringLiteral("tab_charite"));
        tab_charite->setGeometry(QRect(45, 31, 481, 201));
        calendrier->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 50, 81, 16));
        le_coude = new QLineEdit(tab);
        le_coude->setObjectName(QStringLiteral("le_coude"));
        le_coude->setGeometry(QRect(160, 50, 113, 22));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(320, 160, 93, 28));
        calendrier->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 370, 93, 28));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 90, 131, 16));
        lokza = new QComboBox(tab_5);
        lokza->setObjectName(QStringLiteral("lokza"));
        lokza->setGeometry(QRect(270, 90, 101, 22));
        table12 = new QTableView(tab_5);
        table12->setObjectName(QStringLiteral("table12"));
        table12->setGeometry(QRect(95, 150, 521, 192));
        PDF_pb = new QPushButton(tab_5);
        PDF_pb->setObjectName(QStringLiteral("PDF_pb"));
        PDF_pb->setGeometry(QRect(110, 370, 131, 28));
        calendrier->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tab_rech = new QTableView(tab_6);
        tab_rech->setObjectName(QStringLiteral("tab_rech"));
        tab_rech->setGeometry(QRect(460, 60, 351, 251));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 100, 101, 16));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 170, 151, 16));
        coderech = new QLineEdit(tab_6);
        coderech->setObjectName(QStringLiteral("coderech"));
        coderech->setGeometry(QRect(200, 100, 113, 22));
        daterech = new QLineEdit(tab_6);
        daterech->setObjectName(QStringLiteral("daterech"));
        daterech->setGeometry(QRect(200, 170, 113, 22));
        pb_rech_code = new QPushButton(tab_6);
        pb_rech_code->setObjectName(QStringLiteral("pb_rech_code"));
        pb_rech_code->setGeometry(QRect(290, 130, 93, 28));
        pb_rech_date = new QPushButton(tab_6);
        pb_rech_date->setObjectName(QStringLiteral("pb_rech_date"));
        pb_rech_date->setGeometry(QRect(300, 200, 93, 28));
        calendrier->addTab(tab_6, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gplot = new QCustomPlot(tab_3);
        gplot->setObjectName(QStringLiteral("gplot"));
        gplot->setGeometry(QRect(150, 50, 591, 321));
        pb_stat = new QPushButton(tab_3);
        pb_stat->setObjectName(QStringLiteral("pb_stat"));
        pb_stat->setGeometry(QRect(590, 390, 93, 28));
        calendrier->addTab(tab_3, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        toolButton = new QToolButton(tab_7);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(110, 70, 27, 22));
        toolButton_2 = new QToolButton(tab_7);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(110, 140, 27, 22));
        toolButton_3 = new QToolButton(tab_7);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(110, 200, 27, 22));
        toolButton_4 = new QToolButton(tab_7);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(110, 270, 27, 22));
        label_9 = new QLabel(tab_7);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 70, 56, 16));
        label_10 = new QLabel(tab_7);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(240, 130, 56, 16));
        pushButton_4 = new QPushButton(tab_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 310, 93, 28));
        calendarWidget = new QCalendarWidget(tab_7);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(350, 80, 304, 218));
        calendrier->addTab(tab_7, QString());
        pushButtonLogout = new QPushButton(centralwidget);
        pushButtonLogout->setObjectName(QStringLiteral("pushButtonLogout"));
        pushButtonLogout->setGeometry(QRect(740, 490, 93, 28));
        MainWindow1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow1);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1139, 26));
        MainWindow1->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow1);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow1->setStatusBar(statusbar);

        retranslateUi(MainWindow1);

        calendrier->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow1)
    {
        MainWindow1->setWindowTitle(QApplication::translate("MainWindow1", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow1", "ajout", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow1", "code charite", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow1", "type charite", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow1", "date", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow1", "ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow1", "qte", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow1", "modifier", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab_2), QApplication::translate("MainWindow1", "ajouter charit\303\250", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab_4), QApplication::translate("MainWindow1", "afficher charit\303\250", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow1", "code charite", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow1", "suprimer", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab), QApplication::translate("MainWindow1", "supprimer charit\303\250", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow1", "tri", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow1", "tri suivant ", Q_NULLPTR));
        lokza->clear();
        lokza->insertItems(0, QStringList()
         << QApplication::translate("MainWindow1", "typechar", Q_NULLPTR)
         << QApplication::translate("MainWindow1", "date", Q_NULLPTR)
        );
        PDF_pb->setText(QApplication::translate("MainWindow1", "telecherger (PDF)", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab_5), QApplication::translate("MainWindow1", "tri", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow1", "code de charite", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow1", "date de charite", Q_NULLPTR));
        pb_rech_code->setText(QApplication::translate("MainWindow1", "rechercher", Q_NULLPTR));
        pb_rech_date->setText(QApplication::translate("MainWindow1", "recherche", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab_6), QApplication::translate("MainWindow1", "recherche", Q_NULLPTR));
        pb_stat->setText(QApplication::translate("MainWindow1", "statistique", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab_3), QApplication::translate("MainWindow1", "stat", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow1", "...", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("MainWindow1", "...", Q_NULLPTR));
        toolButton_3->setText(QApplication::translate("MainWindow1", "...", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("MainWindow1", "...", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow1", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow1", "TextLabel", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow1", "PushButton", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab_7), QApplication::translate("MainWindow1", "calendrier", Q_NULLPTR));
        pushButtonLogout->setText(QApplication::translate("MainWindow1", "Log out", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
