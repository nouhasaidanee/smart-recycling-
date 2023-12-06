#ifndef WINDOWSFOUR_H
#define WINDOWSFOUR_H

#include <QMainWindow>
#include"donneur.h"
#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QSerialPort>

namespace Ui {
class WindowsFour;
}

class WindowsFour : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowsFour(QWidget *parent = nullptr);
    ~WindowsFour();
signals :
    void loggedOut();

private slots:
    void on_pushButtonLogout_clicked();
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_modifier_clicked();





  void on_comboBox_3_currentIndexChanged(const QString &arg1);


    void on_lineEdit_recherche_textChanged(const QString &text);
    void rechercherDonneur(const QString& termeRecherche);
     void on_pb_pdf_clicked();

void on_comboBox_4_currentIndexChanged(const QString &arg1);

void on_pb_supprimer_client_clicked();

void on_pb_ajouter_client_clicked();

void on_modifier_client_clicked();

void on_pdf_client_clicked();

private:
    Ui::WindowsFour *ui;
     donneur d;
     QSerialPort *arduino;
};

#endif // WINDOWSFOUR_H
