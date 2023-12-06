/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *statusBar_2;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QLabel *label_id;
    QLabel *label_np;
    QLabel *label_ad;
    QLabel *label_numtel;
    QLabel *label_5typem;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QLineEdit *le_adresse;
    QLineEdit *le_tele;
    QLineEdit *le_type;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier;
    QPushButton *pushButtonLogout;
    QWidget *tab_2;
    QTableView *tab_recycleur;
    QWidget *tab_3;
    QLabel *label_6;
    QLineEdit *supp_nom;
    QPushButton *pb_supprimer;
    QWidget *tab_4;
    QLineEdit *le_id_2;
    QPushButton *pb_chercher;
    QLabel *id_2;
    QComboBox *cb_trie;
    QPushButton *pb_trierNom;
    QLabel *label_2;
    QTableView *tab_rec;
    QPushButton *PDF_pb;
    QLabel *label_21;
    QTableView *tabrech;
    QWidget *tab_6;
    QCustomPlot *gplot;
    QPushButton *stat;
    QWidget *tab_7;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1186, 816);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        statusBar_2 = new QTabWidget(centralWidget);
        statusBar_2->setObjectName(QStringLiteral("statusBar_2"));
        statusBar_2->setGeometry(QRect(150, 10, 1111, 691));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 30, 671, 441));
        label_id = new QLabel(groupBox_2);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(10, 80, 56, 16));
        label_np = new QLabel(groupBox_2);
        label_np->setObjectName(QStringLiteral("label_np"));
        label_np->setGeometry(QRect(10, 150, 111, 16));
        label_ad = new QLabel(groupBox_2);
        label_ad->setObjectName(QStringLiteral("label_ad"));
        label_ad->setGeometry(QRect(10, 210, 56, 16));
        label_numtel = new QLabel(groupBox_2);
        label_numtel->setObjectName(QStringLiteral("label_numtel"));
        label_numtel->setGeometry(QRect(10, 270, 56, 16));
        label_5typem = new QLabel(groupBox_2);
        label_5typem->setObjectName(QStringLiteral("label_5typem"));
        label_5typem->setGeometry(QRect(10, 340, 121, 16));
        le_id = new QLineEdit(groupBox_2);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(170, 80, 113, 22));
        le_nom = new QLineEdit(groupBox_2);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(170, 150, 113, 22));
        le_adresse = new QLineEdit(groupBox_2);
        le_adresse->setObjectName(QStringLiteral("le_adresse"));
        le_adresse->setGeometry(QRect(170, 210, 113, 22));
        le_tele = new QLineEdit(groupBox_2);
        le_tele->setObjectName(QStringLiteral("le_tele"));
        le_tele->setGeometry(QRect(170, 270, 113, 22));
        le_type = new QLineEdit(groupBox_2);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(170, 340, 113, 22));
        pb_ajouter = new QPushButton(groupBox_2);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(400, 210, 93, 28));
        pb_modifier = new QPushButton(groupBox_2);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(400, 160, 93, 28));
        pushButtonLogout = new QPushButton(tab);
        pushButtonLogout->setObjectName(QStringLiteral("pushButtonLogout"));
        pushButtonLogout->setGeometry(QRect(570, 490, 93, 28));
        statusBar_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_recycleur = new QTableView(tab_2);
        tab_recycleur->setObjectName(QStringLiteral("tab_recycleur"));
        tab_recycleur->setGeometry(QRect(20, 100, 621, 301));
        statusBar_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 200, 171, 31));
        supp_nom = new QLineEdit(tab_3);
        supp_nom->setObjectName(QStringLiteral("supp_nom"));
        supp_nom->setGeometry(QRect(330, 200, 161, 31));
        pb_supprimer = new QPushButton(tab_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(550, 310, 93, 28));
        statusBar_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        le_id_2 = new QLineEdit(tab_4);
        le_id_2->setObjectName(QStringLiteral("le_id_2"));
        le_id_2->setGeometry(QRect(150, 100, 171, 41));
        pb_chercher = new QPushButton(tab_4);
        pb_chercher->setObjectName(QStringLiteral("pb_chercher"));
        pb_chercher->setGeometry(QRect(340, 100, 61, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/valider.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_chercher->setIcon(icon);
        pb_chercher->setIconSize(QSize(35, 40));
        id_2 = new QLabel(tab_4);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(0, 100, 211, 41));
        cb_trie = new QComboBox(tab_4);
        cb_trie->setObjectName(QStringLiteral("cb_trie"));
        cb_trie->setGeometry(QRect(560, 100, 121, 41));
        pb_trierNom = new QPushButton(tab_4);
        pb_trierNom->setObjectName(QStringLiteral("pb_trierNom"));
        pb_trierNom->setGeometry(QRect(690, 100, 71, 51));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/image/trie.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_trierNom->setIcon(icon1);
        pb_trierNom->setIconSize(QSize(45, 45));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 100, 151, 41));
        tab_rec = new QTableView(tab_4);
        tab_rec->setObjectName(QStringLiteral("tab_rec"));
        tab_rec->setGeometry(QRect(430, 180, 331, 211));
        tab_rec->setSelectionMode(QAbstractItemView::SingleSelection);
        tab_rec->setSelectionBehavior(QAbstractItemView::SelectRows);
        PDF_pb = new QPushButton(tab_4);
        PDF_pb->setObjectName(QStringLiteral("PDF_pb"));
        PDF_pb->setGeometry(QRect(350, 410, 41, 21));
        PDF_pb->setStyleSheet(QLatin1String("QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 10px;\n"
"max-width: 50px;\n"
"min-height: 13px;\n"
"max-height: 13px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images_espace/Images_espace/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        PDF_pb->setIcon(icon2);
        label_21 = new QLabel(tab_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(230, 400, 101, 41));
        tabrech = new QTableView(tab_4);
        tabrech->setObjectName(QStringLiteral("tabrech"));
        tabrech->setGeometry(QRect(40, 180, 351, 192));
        statusBar_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gplot = new QCustomPlot(tab_6);
        gplot->setObjectName(QStringLiteral("gplot"));
        gplot->setGeometry(QRect(80, 80, 601, 311));
        stat = new QPushButton(tab_6);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(520, 410, 93, 28));
        statusBar_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        horizontalLayout = new QHBoxLayout(tab_7);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(tab_7);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout->addWidget(widget);

        statusBar_2->addTab(tab_7, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1186, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        statusBar_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "AJOUT", Q_NULLPTR));
        label_id->setText(QApplication::translate("MainWindow", "identifiant", Q_NULLPTR));
        label_np->setText(QApplication::translate("MainWindow", "nom et prenom", Q_NULLPTR));
        label_ad->setText(QApplication::translate("MainWindow", "adresse", Q_NULLPTR));
        label_numtel->setText(QApplication::translate("MainWindow", "telephone", Q_NULLPTR));
        label_5typem->setText(QApplication::translate("MainWindow", "type de materiaux", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "MODIFIER", Q_NULLPTR));
        pushButtonLogout->setText(QApplication::translate("MainWindow", "log out", Q_NULLPTR));
        statusBar_2->setTabText(statusBar_2->indexOf(tab), QApplication::translate("MainWindow", "ajouter un recycleur", Q_NULLPTR));
        statusBar_2->setTabText(statusBar_2->indexOf(tab_2), QApplication::translate("MainWindow", "afficher les recyleurs ", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "tapez le nom du recycleur", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        statusBar_2->setTabText(statusBar_2->indexOf(tab_3), QApplication::translate("MainWindow", "supprimer un recycleur", Q_NULLPTR));
        pb_chercher->setText(QString());
        id_2->setText(QApplication::translate("MainWindow", "CHERCHER SUIVANT ID", Q_NULLPTR));
        cb_trie->clear();
        cb_trie->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "nom_prenom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "type_materiax", Q_NULLPTR)
        );
        pb_trierNom->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "TRI SUIVANT LE NOM ", Q_NULLPTR));
        PDF_pb->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "Exporter en PDF", Q_NULLPTR));
        statusBar_2->setTabText(statusBar_2->indexOf(tab_4), QApplication::translate("MainWindow", "chercher", Q_NULLPTR));
        stat->setText(QApplication::translate("MainWindow", "sati", Q_NULLPTR));
        statusBar_2->setTabText(statusBar_2->indexOf(tab_6), QApplication::translate("MainWindow", "staistique", Q_NULLPTR));
        statusBar_2->setTabText(statusBar_2->indexOf(tab_7), QApplication::translate("MainWindow", "arduino", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
