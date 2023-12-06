#ifndef RECYCLEURS_H
#define RECYCLEURS_H

#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QDebug>
#include <QSqlError>

class Recycleurs
{
    int id_recycleur,num_tele;
    QString nom_prenom,adresse,type_materiaux;
public:
    Recycleurs();
    Recycleurs(int,QString,QString,int,QString);
    int getid_recycleur();
    QString getnom_prenom();
    QString getadresse();
    QString gettype_materiaux();
    int getnum_tele();
    void setid_recycleur(int);
    void setnom_prenom(QString);
    void setadresse(QString);
    void setnum_tele(int);
    void settype_materiaux(QString);
    bool ajouter();

    QSqlQueryModel *afficher();
    bool supprimer(QString nom_prenom);
    bool modifier(int);
   bool rechercher_id_recycleur(int id_recycleur);
   QSqlQueryModel* afficher_id_recycleur(int & id_recycleur);
    QSqlQueryModel * trier_nom();
    QSqlQueryModel * trier_type_materiaux();

    void getDatabaseValue(int id_recycleur);

};

#endif // CLIENT_H
