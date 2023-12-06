#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Produit
{
        int id;
       QString couleur;
       QString type;
       QString arome;
       float prix;
       int stock;


       //date fabrication
       //date peremption
public:
    Produit();
     Produit(int, int,float , QString, QString,  QString);

     int getid(){return id;}
     int getstock(){return stock;}
     float getprix(){ return prix;}
        QString getcouleur() const {return couleur;}
        QString gettype() const {return type;}
        QString getarome() const {return arome;}



        void setid(int id){this->id=id;}
        void setstock(int stock){this->stock=stock;}

        void setprix(float prix){this->prix=prix;}
           void setcouleur(QString c){couleur=c;}
           void settype(QString p){type=p;}
           void setarome(QString a){arome=a;}
     bool ajouter();
     QSqlQueryModel * afficher();
     bool supprimer( int );
     bool modifier(int , int , const QString& , int , double , const QString& , const QString& );

     QSqlQueryModel* trierParColonne(const QString& colonne);

      double calculerRevenu() const;

      //notif


};

#endif // PRODUIT_H
