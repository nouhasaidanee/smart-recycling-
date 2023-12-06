
#ifndef CHARITE_H
#define CHARITE_H
#include <QString>
#include <QSqlDatabase>
#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include<QTableView>
//7
class charite
{
public:
    charite();
    charite(int,QString,QString,int);
    //getters
    int getCodechar();
    QString getTypechar();
    QString getdate();
    int getQTE();

    //setters
    void setCodechar(int);
    void setTypechar(QString);
    void setdate(QString);
    void setQTE(int);

    //fonctionnalites de base relatives a l'entite etudiant
    bool ajouter();
    bool supprimer(int);
    QSqlQueryModel* afficher();
    bool modifier(int Codechar);
    bool rechercher_codechar(int Codechar);
      bool rechercher_date(QString date);
      QSqlQueryModel* afficher_codechar(int & codechar);
    QSqlQueryModel* afficher_date(QString & date);
   QSqlQueryModel *  trier_typechar();
   QSqlQueryModel * trier_date();
   // QSqlQueryModel *recherche(int Codechar,QString date);

private:
    int Codechar;
    QString Typechar;
    QString date;
    int QTE;
};

#endif // CHARITE_H
