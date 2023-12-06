#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include <QObject>
#include<QSqlQueryModel>

class client
{
public:
    client();

    client(int, int, int, QString, QString, QString, QString );
        int getid();
           int getnum_tele();
              int getqte_achat();
        QString getnom();
         QString getprenom();
          QString getadresse();
          QString getmail();

          void setid(int);
           void setnum_tele(int);
            void setqte_achat(int);
             void setnom(QString);
              void setprenom(QString);
               void setadresse(QString);
                void setmail(QString);
                bool ajouter();
                 QSqlQueryModel* afficher_client();
                 bool supprimer( int);
     bool modifier(int ancienId, int nouveauId, int nouveauNumTele, int nouvelleQte_achat, const QString& nouvelleAdresse, const QString& nouveauMail);
   QSqlQueryModel* trierParColonne(const QString& colonne);

private:
int id ,num_tele,qte_achat;
QString nom, prenom, adresse, mail ;
};

#endif // CLIENT_H
