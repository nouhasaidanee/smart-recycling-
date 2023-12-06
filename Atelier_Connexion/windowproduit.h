#ifndef WINDOWPRODUIT_H
#define WINDOWPRODUIT_H


#include "produit.h"
#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QGraphicsScene>
#include<QPrinter>


namespace Ui {
class WindowProduit;
}

class WindowProduit : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowProduit(QWidget *parent = nullptr);
    ~WindowProduit();
signals :
    void loggedOut();
private slots:
    void on_pushButtonlogout_clicked();
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();
    void on_comboBox_3_currentIndexChanged(const QString &colonne);
    void on_lineEdit_recherche_textChanged(const QString &text);
        void rechercherproduit(const QString& termeRecherche);

        void on_pb_pdf_clicked();

private:
    Ui::WindowProduit *ui;
    Produit pr;
};

#endif // WINDOWPRODUIT_H
