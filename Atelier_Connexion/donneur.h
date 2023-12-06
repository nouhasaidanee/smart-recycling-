#ifndef DONNEUR_H
#define DONNEUR_H
#include<QString>
#include<QSqlQueryModel>

class donneur
{
public:
    donneur();
    donneur(int, int, int, QString, QString, QString, QString );
        int getid();
           int getnum_tele();
              int getqte_don();
        QString getnom();
         QString getprenom();
          QString getadresse();
          QString getmail();

          void setid(int);
           void setnum_tele(int);
            void setqte_don(int);
             void setnom(QString);
              void setprenom(QString);
               void setadresse(QString);
                void setmail(QString);
                bool ajouter();
                 QSqlQueryModel* afficher();
                 bool supprimer( int);
     bool modifier(int ancienId, int nouveauId, int nouveauNumTele, int nouvelleQteDon, const QString& nouvelleAdresse, const QString& nouveauMail);
   QSqlQueryModel* trierParColonne(const QString& colonne);
  bool incrementerDon();
  donneur trouverDonneurPlusGenereux() const;
   private:
   int id ,num_tele,qte_don;
   QString nom, prenom, adresse, mail ;

};

#endif // DONNEUR_H
