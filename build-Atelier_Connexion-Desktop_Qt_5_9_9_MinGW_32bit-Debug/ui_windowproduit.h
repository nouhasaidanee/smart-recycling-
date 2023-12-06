/********************************************************************************
** Form generated from reading UI file 'windowproduit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWPRODUIT_H
#define UI_WINDOWPRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowProduit
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *le_id;
    QLineEdit *le_couleur;
    QLineEdit *le_type;
    QPushButton *pb_ajouter;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *le_prix;
    QLineEdit *le_stock;
    QLineEdit *le_arome;
    QWidget *tab_6;
    QPushButton *pb_pdf;
    QWidget *tab_2;
    QTableView *tab_produit;
    QWidget *tab_3;
    QLabel *label_7;
    QLineEdit *le_id_supp;
    QPushButton *pb_supprimer;
    QWidget *tab_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *le_id_modif;
    QLineEdit *le_idnew_modif;
    QLineEdit *le_couleur_modif;
    QLineEdit *le_stock_modif;
    QLineEdit *le_prix_modif;
    QLineEdit *le_type_modif;
    QLineEdit *le_arome_modif;
    QPushButton *pb_modifier;
    QWidget *tab_5;
    QTableView *tableView2;
    QComboBox *comboBox3;
    QWidget *tab_7;
    QTableView *tableView_3;
    QLineEdit *lineEdit_recherche;
    QPushButton *pushButtonlogout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowProduit)
    {
        if (WindowProduit->objectName().isEmpty())
            WindowProduit->setObjectName(QStringLiteral("WindowProduit"));
        WindowProduit->resize(1078, 694);
        centralwidget = new QWidget(WindowProduit);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, 70, 881, 491));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 40, 461, 311));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 56, 16));
        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(170, 60, 113, 22));
        le_couleur = new QLineEdit(groupBox);
        le_couleur->setObjectName(QStringLiteral("le_couleur"));
        le_couleur->setGeometry(QRect(160, 110, 113, 22));
        le_type = new QLineEdit(groupBox);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(170, 150, 113, 22));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(310, 120, 93, 28));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 110, 56, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 140, 56, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 180, 56, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 220, 56, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 260, 56, 16));
        le_prix = new QLineEdit(groupBox);
        le_prix->setObjectName(QStringLiteral("le_prix"));
        le_prix->setGeometry(QRect(170, 190, 113, 22));
        le_stock = new QLineEdit(groupBox);
        le_stock->setObjectName(QStringLiteral("le_stock"));
        le_stock->setGeometry(QRect(170, 230, 113, 22));
        le_arome = new QLineEdit(groupBox);
        le_arome->setObjectName(QStringLiteral("le_arome"));
        le_arome->setGeometry(QRect(160, 260, 113, 22));
        tabWidget->addTab(tab, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pb_pdf = new QPushButton(tab_6);
        pb_pdf->setObjectName(QStringLiteral("pb_pdf"));
        pb_pdf->setGeometry(QRect(200, 90, 131, 28));
        tabWidget->addTab(tab_6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_produit = new QTableView(tab_2);
        tab_produit->setObjectName(QStringLiteral("tab_produit"));
        tab_produit->setGeometry(QRect(5, 21, 591, 371));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(160, 80, 56, 16));
        le_id_supp = new QLineEdit(tab_3);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(200, 80, 113, 22));
        pb_supprimer = new QPushButton(tab_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(320, 150, 93, 28));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(55, 20, 91, 20));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(35, 50, 111, 20));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(25, 90, 121, 20));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(35, 130, 111, 20));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(35, 170, 91, 20));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(35, 220, 111, 20));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(45, 280, 101, 20));
        le_id_modif = new QLineEdit(tab_4);
        le_id_modif->setObjectName(QStringLiteral("le_id_modif"));
        le_id_modif->setGeometry(QRect(190, 20, 113, 22));
        le_idnew_modif = new QLineEdit(tab_4);
        le_idnew_modif->setObjectName(QStringLiteral("le_idnew_modif"));
        le_idnew_modif->setGeometry(QRect(200, 50, 113, 22));
        le_couleur_modif = new QLineEdit(tab_4);
        le_couleur_modif->setObjectName(QStringLiteral("le_couleur_modif"));
        le_couleur_modif->setGeometry(QRect(210, 90, 113, 22));
        le_stock_modif = new QLineEdit(tab_4);
        le_stock_modif->setObjectName(QStringLiteral("le_stock_modif"));
        le_stock_modif->setGeometry(QRect(210, 130, 113, 22));
        le_prix_modif = new QLineEdit(tab_4);
        le_prix_modif->setObjectName(QStringLiteral("le_prix_modif"));
        le_prix_modif->setGeometry(QRect(200, 170, 113, 22));
        le_type_modif = new QLineEdit(tab_4);
        le_type_modif->setObjectName(QStringLiteral("le_type_modif"));
        le_type_modif->setGeometry(QRect(220, 220, 113, 22));
        le_arome_modif = new QLineEdit(tab_4);
        le_arome_modif->setObjectName(QStringLiteral("le_arome_modif"));
        le_arome_modif->setGeometry(QRect(220, 270, 113, 22));
        pb_modifier = new QPushButton(tab_4);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(430, 180, 93, 28));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableView2 = new QTableView(tab_5);
        tableView2->setObjectName(QStringLiteral("tableView2"));
        tableView2->setGeometry(QRect(150, 130, 341, 192));
        comboBox3 = new QComboBox(tab_5);
        comboBox3->setObjectName(QStringLiteral("comboBox3"));
        comboBox3->setGeometry(QRect(180, 60, 231, 22));
        tabWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tableView_3 = new QTableView(tab_7);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(120, 120, 256, 192));
        lineEdit_recherche = new QLineEdit(tab_7);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(190, 50, 113, 22));
        tabWidget->addTab(tab_7, QString());
        pushButtonlogout = new QPushButton(centralwidget);
        pushButtonlogout->setObjectName(QStringLiteral("pushButtonlogout"));
        pushButtonlogout->setGeometry(QRect(830, 580, 93, 28));
        WindowProduit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowProduit);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1078, 26));
        WindowProduit->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowProduit);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        WindowProduit->setStatusBar(statusbar);

        retranslateUi(WindowProduit);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(WindowProduit);
    } // setupUi

    void retranslateUi(QMainWindow *WindowProduit)
    {
        WindowProduit->setWindowTitle(QApplication::translate("WindowProduit", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("WindowProduit", "ajot", Q_NULLPTR));
        label->setText(QApplication::translate("WindowProduit", "id", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("WindowProduit", "ajouter", Q_NULLPTR));
        label_2->setText(QApplication::translate("WindowProduit", "couleur", Q_NULLPTR));
        label_3->setText(QApplication::translate("WindowProduit", "type", Q_NULLPTR));
        label_4->setText(QApplication::translate("WindowProduit", "prix", Q_NULLPTR));
        label_5->setText(QApplication::translate("WindowProduit", "stock", Q_NULLPTR));
        label_6->setText(QApplication::translate("WindowProduit", "arome", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("WindowProduit", "ajouter un  produit", Q_NULLPTR));
        pb_pdf->setText(QApplication::translate("WindowProduit", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("WindowProduit", "exporter unpdf", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("WindowProduit", "afficher un produit", Q_NULLPTR));
        label_7->setText(QApplication::translate("WindowProduit", "id", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("WindowProduit", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("WindowProduit", "supprimer un produit", Q_NULLPTR));
        label_8->setText(QApplication::translate("WindowProduit", "id", Q_NULLPTR));
        label_9->setText(QApplication::translate("WindowProduit", "nouveau_id", Q_NULLPTR));
        label_10->setText(QApplication::translate("WindowProduit", "nouveau_couleur", Q_NULLPTR));
        label_11->setText(QApplication::translate("WindowProduit", "nouvelle_stock", Q_NULLPTR));
        label_12->setText(QApplication::translate("WindowProduit", "nouveau_prix", Q_NULLPTR));
        label_13->setText(QApplication::translate("WindowProduit", "nouveau_type", Q_NULLPTR));
        label_14->setText(QApplication::translate("WindowProduit", "nouveau_arome", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("WindowProduit", "modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("WindowProduit", "modifier un produit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("WindowProduit", "trie_produit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("WindowProduit", "recherche", Q_NULLPTR));
        pushButtonlogout->setText(QApplication::translate("WindowProduit", "log out", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WindowProduit: public Ui_WindowProduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWPRODUIT_H
