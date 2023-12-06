/********************************************************************************
** Form generated from reading UI file 'windowsfour.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSFOUR_H
#define UI_WINDOWSFOUR_H

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

class Ui_WindowsFour
{
public:
    QWidget *centralwidget;
    QTabWidget *tab_donneur;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *le_id_ancien;
    QLineEdit *le_id_nouveau;
    QLineEdit *le_num_tele_nouveau;
    QLineEdit *le_qte_don_nouvelle;
    QLineEdit *le_adresse_nouvelle;
    QLineEdit *le_mail_nouveau;
    QPushButton *modifier;
    QWidget *widget_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QPushButton *pb_ajouter;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *le_adresse;
    QLineEdit *le_mail;
    QLineEdit *le_num_tele;
    QLineEdit *le_qte_don;
    QLabel *label_7;
    QWidget *widget_3;
    QTableView *tab_don;
    QWidget *widget_1;
    QLabel *label_8;
    QLineEdit *le_id_sup;
    QPushButton *pb_supprimer;
    QWidget *tab_2;
    QComboBox *comboBox_3;
    QTableView *tableView2;
    QWidget *tab_3;
    QTableView *tableView_3;
    QLineEdit *lineEdit_recherche;
    QWidget *tab_4;
    QPushButton *pdf_client;
    QWidget *tab_5;
    QPushButton *pb_pdf;
    QWidget *tab_6;
    QGroupBox *groupBox_3;
    QLabel *id_client;
    QLabel *nom_client;
    QLabel *prenom_client;
    QLabel *mail_client;
    QLabel *num_tele_client;
    QLabel *qte_don_client;
    QLineEdit *le_id_client;
    QLineEdit *le_nom_client;
    QLineEdit *le_prenom_client;
    QLineEdit *le_mail_client;
    QLineEdit *le_num_tele_client;
    QLineEdit *le_qte_achat_client;
    QPushButton *pb_ajouter_client;
    QLineEdit *le_adresse_client;
    QLabel *label_15;
    QWidget *tab_7;
    QLabel *id_sup_client_label;
    QLineEdit *le_id_sup_client;
    QPushButton *pb_supprimer_client;
    QWidget *tab_8;
    QTableView *tab_don_client;
    QWidget *tab_9;
    QGroupBox *groupBox_4;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *le_id_ancien_client;
    QLineEdit *le_id_nouveau_client;
    QLineEdit *le_num_tele_nouveau_client;
    QLineEdit *le_qte_achat_nouvelle_client;
    QLineEdit *le_adresse_nouvelle_client;
    QLineEdit *le_mail_nouveau_client;
    QPushButton *modifier_client;
    QWidget *tab_10;
    QComboBox *comboBox_4;
    QTableView *tableView2_client;
    QWidget *tab_11;
    QPushButton *pushButtonLogout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowsFour)
    {
        if (WindowsFour->objectName().isEmpty())
            WindowsFour->setObjectName(QStringLiteral("WindowsFour"));
        WindowsFour->resize(800, 600);
        centralwidget = new QWidget(WindowsFour);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tab_donneur = new QTabWidget(centralwidget);
        tab_donneur->setObjectName(QStringLiteral("tab_donneur"));
        tab_donneur->setGeometry(QRect(140, 30, 601, 341));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 461, 211));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 30, 47, 14));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 60, 91, 16));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 80, 101, 20));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 120, 71, 16));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 150, 47, 14));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 190, 47, 14));
        le_id_ancien = new QLineEdit(groupBox_2);
        le_id_ancien->setObjectName(QStringLiteral("le_id_ancien"));
        le_id_ancien->setGeometry(QRect(150, 20, 113, 20));
        le_id_nouveau = new QLineEdit(groupBox_2);
        le_id_nouveau->setObjectName(QStringLiteral("le_id_nouveau"));
        le_id_nouveau->setGeometry(QRect(150, 50, 113, 20));
        le_num_tele_nouveau = new QLineEdit(groupBox_2);
        le_num_tele_nouveau->setObjectName(QStringLiteral("le_num_tele_nouveau"));
        le_num_tele_nouveau->setGeometry(QRect(150, 80, 113, 20));
        le_qte_don_nouvelle = new QLineEdit(groupBox_2);
        le_qte_don_nouvelle->setObjectName(QStringLiteral("le_qte_don_nouvelle"));
        le_qte_don_nouvelle->setGeometry(QRect(150, 110, 113, 20));
        le_adresse_nouvelle = new QLineEdit(groupBox_2);
        le_adresse_nouvelle->setObjectName(QStringLiteral("le_adresse_nouvelle"));
        le_adresse_nouvelle->setGeometry(QRect(150, 140, 113, 20));
        le_mail_nouveau = new QLineEdit(groupBox_2);
        le_mail_nouveau->setObjectName(QStringLiteral("le_mail_nouveau"));
        le_mail_nouveau->setGeometry(QRect(150, 180, 113, 20));
        modifier = new QPushButton(groupBox_2);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(330, 120, 75, 23));
        tab_donneur->addTab(tab, QString());
        widget_2 = new QWidget();
        widget_2->setObjectName(QStringLiteral("widget_2"));
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 441, 301));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 41, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 47, 14));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 110, 47, 14));
        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(140, 30, 113, 20));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(140, 70, 113, 20));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(140, 110, 113, 20));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(310, 110, 75, 23));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 150, 47, 14));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 190, 47, 14));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 230, 47, 14));
        le_adresse = new QLineEdit(groupBox);
        le_adresse->setObjectName(QStringLiteral("le_adresse"));
        le_adresse->setGeometry(QRect(140, 150, 113, 20));
        le_mail = new QLineEdit(groupBox);
        le_mail->setObjectName(QStringLiteral("le_mail"));
        le_mail->setGeometry(QRect(140, 190, 113, 20));
        le_num_tele = new QLineEdit(groupBox);
        le_num_tele->setObjectName(QStringLiteral("le_num_tele"));
        le_num_tele->setGeometry(QRect(140, 230, 113, 20));
        le_qte_don = new QLineEdit(groupBox);
        le_qte_don->setObjectName(QStringLiteral("le_qte_don"));
        le_qte_don->setGeometry(QRect(140, 270, 113, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 270, 47, 14));
        tab_donneur->addTab(widget_2, QString());
        widget_3 = new QWidget();
        widget_3->setObjectName(QStringLiteral("widget_3"));
        tab_don = new QTableView(widget_3);
        tab_don->setObjectName(QStringLiteral("tab_don"));
        tab_don->setGeometry(QRect(10, 20, 471, 251));
        tab_donneur->addTab(widget_3, QString());
        widget_1 = new QWidget();
        widget_1->setObjectName(QStringLiteral("widget_1"));
        label_8 = new QLabel(widget_1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 33, 61, 21));
        le_id_sup = new QLineEdit(widget_1);
        le_id_sup->setObjectName(QStringLiteral("le_id_sup"));
        le_id_sup->setGeometry(QRect(160, 40, 113, 20));
        pb_supprimer = new QPushButton(widget_1);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(310, 120, 75, 23));
        tab_donneur->addTab(widget_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        comboBox_3 = new QComboBox(tab_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(80, 10, 241, 31));
        tableView2 = new QTableView(tab_2);
        tableView2->setObjectName(QStringLiteral("tableView2"));
        tableView2->setGeometry(QRect(55, 61, 291, 191));
        tab_donneur->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(100, 70, 256, 192));
        lineEdit_recherche = new QLineEdit(tab_3);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(160, 40, 113, 20));
        tab_donneur->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pdf_client = new QPushButton(tab_4);
        pdf_client->setObjectName(QStringLiteral("pdf_client"));
        pdf_client->setGeometry(QRect(120, 80, 75, 23));
        tab_donneur->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pb_pdf = new QPushButton(tab_5);
        pb_pdf->setObjectName(QStringLiteral("pb_pdf"));
        pb_pdf->setGeometry(QRect(210, 70, 75, 23));
        tab_donneur->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBox_3 = new QGroupBox(tab_6);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 50, 401, 251));
        id_client = new QLabel(groupBox_3);
        id_client->setObjectName(QStringLiteral("id_client"));
        id_client->setGeometry(QRect(50, 30, 47, 14));
        nom_client = new QLabel(groupBox_3);
        nom_client->setObjectName(QStringLiteral("nom_client"));
        nom_client->setGeometry(QRect(50, 50, 47, 14));
        prenom_client = new QLabel(groupBox_3);
        prenom_client->setObjectName(QStringLiteral("prenom_client"));
        prenom_client->setGeometry(QRect(50, 80, 47, 14));
        mail_client = new QLabel(groupBox_3);
        mail_client->setObjectName(QStringLiteral("mail_client"));
        mail_client->setGeometry(QRect(50, 110, 47, 14));
        num_tele_client = new QLabel(groupBox_3);
        num_tele_client->setObjectName(QStringLiteral("num_tele_client"));
        num_tele_client->setGeometry(QRect(50, 140, 47, 14));
        qte_don_client = new QLabel(groupBox_3);
        qte_don_client->setObjectName(QStringLiteral("qte_don_client"));
        qte_don_client->setGeometry(QRect(50, 170, 47, 14));
        le_id_client = new QLineEdit(groupBox_3);
        le_id_client->setObjectName(QStringLiteral("le_id_client"));
        le_id_client->setGeometry(QRect(130, 20, 113, 20));
        le_nom_client = new QLineEdit(groupBox_3);
        le_nom_client->setObjectName(QStringLiteral("le_nom_client"));
        le_nom_client->setGeometry(QRect(130, 50, 113, 20));
        le_prenom_client = new QLineEdit(groupBox_3);
        le_prenom_client->setObjectName(QStringLiteral("le_prenom_client"));
        le_prenom_client->setGeometry(QRect(130, 80, 113, 20));
        le_mail_client = new QLineEdit(groupBox_3);
        le_mail_client->setObjectName(QStringLiteral("le_mail_client"));
        le_mail_client->setGeometry(QRect(130, 110, 113, 20));
        le_num_tele_client = new QLineEdit(groupBox_3);
        le_num_tele_client->setObjectName(QStringLiteral("le_num_tele_client"));
        le_num_tele_client->setGeometry(QRect(130, 140, 113, 20));
        le_qte_achat_client = new QLineEdit(groupBox_3);
        le_qte_achat_client->setObjectName(QStringLiteral("le_qte_achat_client"));
        le_qte_achat_client->setGeometry(QRect(130, 180, 113, 20));
        pb_ajouter_client = new QPushButton(groupBox_3);
        pb_ajouter_client->setObjectName(QStringLiteral("pb_ajouter_client"));
        pb_ajouter_client->setGeometry(QRect(260, 70, 75, 23));
        le_adresse_client = new QLineEdit(groupBox_3);
        le_adresse_client->setObjectName(QStringLiteral("le_adresse_client"));
        le_adresse_client->setGeometry(QRect(130, 210, 113, 20));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(40, 200, 47, 14));
        tab_donneur->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        id_sup_client_label = new QLabel(tab_7);
        id_sup_client_label->setObjectName(QStringLiteral("id_sup_client_label"));
        id_sup_client_label->setGeometry(QRect(60, 60, 47, 14));
        le_id_sup_client = new QLineEdit(tab_7);
        le_id_sup_client->setObjectName(QStringLiteral("le_id_sup_client"));
        le_id_sup_client->setGeometry(QRect(170, 60, 113, 20));
        pb_supprimer_client = new QPushButton(tab_7);
        pb_supprimer_client->setObjectName(QStringLiteral("pb_supprimer_client"));
        pb_supprimer_client->setGeometry(QRect(330, 110, 75, 23));
        tab_donneur->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tab_don_client = new QTableView(tab_8);
        tab_don_client->setObjectName(QStringLiteral("tab_don_client"));
        tab_don_client->setGeometry(QRect(10, 30, 471, 251));
        tab_donneur->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        groupBox_4 = new QGroupBox(tab_9);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 40, 461, 211));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 30, 47, 14));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 60, 91, 16));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 80, 101, 20));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 120, 71, 16));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 150, 47, 14));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 190, 47, 14));
        le_id_ancien_client = new QLineEdit(groupBox_4);
        le_id_ancien_client->setObjectName(QStringLiteral("le_id_ancien_client"));
        le_id_ancien_client->setGeometry(QRect(150, 20, 113, 20));
        le_id_nouveau_client = new QLineEdit(groupBox_4);
        le_id_nouveau_client->setObjectName(QStringLiteral("le_id_nouveau_client"));
        le_id_nouveau_client->setGeometry(QRect(150, 50, 113, 20));
        le_num_tele_nouveau_client = new QLineEdit(groupBox_4);
        le_num_tele_nouveau_client->setObjectName(QStringLiteral("le_num_tele_nouveau_client"));
        le_num_tele_nouveau_client->setGeometry(QRect(150, 80, 113, 20));
        le_qte_achat_nouvelle_client = new QLineEdit(groupBox_4);
        le_qte_achat_nouvelle_client->setObjectName(QStringLiteral("le_qte_achat_nouvelle_client"));
        le_qte_achat_nouvelle_client->setGeometry(QRect(150, 110, 113, 20));
        le_adresse_nouvelle_client = new QLineEdit(groupBox_4);
        le_adresse_nouvelle_client->setObjectName(QStringLiteral("le_adresse_nouvelle_client"));
        le_adresse_nouvelle_client->setGeometry(QRect(150, 140, 113, 20));
        le_mail_nouveau_client = new QLineEdit(groupBox_4);
        le_mail_nouveau_client->setObjectName(QStringLiteral("le_mail_nouveau_client"));
        le_mail_nouveau_client->setGeometry(QRect(150, 180, 113, 20));
        modifier_client = new QPushButton(groupBox_4);
        modifier_client->setObjectName(QStringLiteral("modifier_client"));
        modifier_client->setGeometry(QRect(330, 120, 75, 23));
        tab_donneur->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        comboBox_4 = new QComboBox(tab_10);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(120, 20, 241, 31));
        tableView2_client = new QTableView(tab_10);
        tableView2_client->setObjectName(QStringLiteral("tableView2_client"));
        tableView2_client->setGeometry(QRect(90, 70, 291, 191));
        tab_donneur->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        tab_donneur->addTab(tab_11, QString());
        pushButtonLogout = new QPushButton(centralwidget);
        pushButtonLogout->setObjectName(QStringLiteral("pushButtonLogout"));
        pushButtonLogout->setGeometry(QRect(520, 420, 93, 28));
        WindowsFour->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowsFour);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        WindowsFour->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowsFour);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        WindowsFour->setStatusBar(statusbar);

        retranslateUi(WindowsFour);

        tab_donneur->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(WindowsFour);
    } // setupUi

    void retranslateUi(QMainWindow *WindowsFour)
    {
        WindowsFour->setWindowTitle(QApplication::translate("WindowsFour", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("WindowsFour", "modifier", Q_NULLPTR));
        label_9->setText(QApplication::translate("WindowsFour", "ancienId", Q_NULLPTR));
        label_10->setText(QApplication::translate("WindowsFour", "nouveauId", Q_NULLPTR));
        label_11->setText(QApplication::translate("WindowsFour", "nouveauNumTele", Q_NULLPTR));
        label_12->setText(QApplication::translate("WindowsFour", "nouvelleQteDon", Q_NULLPTR));
        label_13->setText(QApplication::translate("WindowsFour", "nouvelleAdresse", Q_NULLPTR));
        label_14->setText(QApplication::translate("WindowsFour", "nouveauMail", Q_NULLPTR));
        modifier->setText(QApplication::translate("WindowsFour", "modifier", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab), QApplication::translate("WindowsFour", "modifier_donneur", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("WindowsFour", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("WindowsFour", "id", Q_NULLPTR));
        label_2->setText(QApplication::translate("WindowsFour", "nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("WindowsFour", "prenom", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("WindowsFour", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("WindowsFour", "adresse", Q_NULLPTR));
        label_5->setText(QApplication::translate("WindowsFour", "mail", Q_NULLPTR));
        label_6->setText(QApplication::translate("WindowsFour", "num_tele", Q_NULLPTR));
        label_7->setText(QApplication::translate("WindowsFour", "qte_don", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(widget_2), QApplication::translate("WindowsFour", "Ajouter_un_donneur", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(widget_3), QApplication::translate("WindowsFour", "Afficher_des_donneur", Q_NULLPTR));
        label_8->setText(QApplication::translate("WindowsFour", "Identifient", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("WindowsFour", "supprimer", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(widget_1), QApplication::translate("WindowsFour", "Supprimer_un_donneur", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_2), QApplication::translate("WindowsFour", "trier_les_donneur", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_3), QApplication::translate("WindowsFour", "rechercher_donneur", Q_NULLPTR));
        pdf_client->setText(QApplication::translate("WindowsFour", "client", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_4), QApplication::translate("WindowsFour", "exporte_client", Q_NULLPTR));
        pb_pdf->setText(QApplication::translate("WindowsFour", "donneur", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_5), QApplication::translate("WindowsFour", "exporter unpdf", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("WindowsFour", "ajout_client", Q_NULLPTR));
        id_client->setText(QApplication::translate("WindowsFour", "id_client", Q_NULLPTR));
        nom_client->setText(QApplication::translate("WindowsFour", "nom_client", Q_NULLPTR));
        prenom_client->setText(QApplication::translate("WindowsFour", "prenom", Q_NULLPTR));
        mail_client->setText(QApplication::translate("WindowsFour", "mail", Q_NULLPTR));
        num_tele_client->setText(QApplication::translate("WindowsFour", "num_tele_client", Q_NULLPTR));
        qte_don_client->setText(QApplication::translate("WindowsFour", "qte_achat", Q_NULLPTR));
        pb_ajouter_client->setText(QApplication::translate("WindowsFour", "PushButton", Q_NULLPTR));
        label_15->setText(QApplication::translate("WindowsFour", "adresse", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_6), QApplication::translate("WindowsFour", "ajouter_client", Q_NULLPTR));
        id_sup_client_label->setText(QApplication::translate("WindowsFour", "id", Q_NULLPTR));
        pb_supprimer_client->setText(QApplication::translate("WindowsFour", "PushButton", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_7), QApplication::translate("WindowsFour", "supprimer_client", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_8), QApplication::translate("WindowsFour", "afficher_client", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("WindowsFour", "modifier", Q_NULLPTR));
        label_16->setText(QApplication::translate("WindowsFour", "ancienId", Q_NULLPTR));
        label_17->setText(QApplication::translate("WindowsFour", "nouveauId", Q_NULLPTR));
        label_18->setText(QApplication::translate("WindowsFour", "nouveauNumTele", Q_NULLPTR));
        label_19->setText(QApplication::translate("WindowsFour", "nouvelleQteDon", Q_NULLPTR));
        label_20->setText(QApplication::translate("WindowsFour", "nouvelleAdresse", Q_NULLPTR));
        label_21->setText(QApplication::translate("WindowsFour", "nouveauMail", Q_NULLPTR));
        modifier_client->setText(QApplication::translate("WindowsFour", "modifier", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_9), QApplication::translate("WindowsFour", "modifier_client", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_10), QApplication::translate("WindowsFour", "trier_client", Q_NULLPTR));
        tab_donneur->setTabText(tab_donneur->indexOf(tab_11), QApplication::translate("WindowsFour", "rechercher_client", Q_NULLPTR));
        pushButtonLogout->setText(QApplication::translate("WindowsFour", "Log out", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WindowsFour: public Ui_WindowsFour {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSFOUR_H
