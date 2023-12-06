#include "donneur.h"
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
#include <QSqlQueryModel>
#include <QString>
donneur::donneur()
{
    id= 0;
    num_tele= 0;
         qte_don= 0;
 nom="";
 prenom ="";
  adresse="" ;
  mail="" ;
}
donneur::donneur(int id, int num_tele, int  qte_don, QString nom, QString prenom, QString adresse, QString mail ){
  this->id =id;
   this->num_tele=num_tele;
            this->qte_don= qte_don;
    this->nom= nom ;
     this->prenom= prenom;
     this->adresse= adresse;
     this->mail = mail;
}
int donneur::getid(){
    return id;
}
int donneur::getqte_don(){
    return qte_don;
}
int donneur::getnum_tele(){
    return num_tele ;
}
QString  donneur::getnom(){

    return nom;
}
QString  donneur::getprenom(){

    return prenom;
}
QString  donneur::getadresse(){

    return adresse;
}
QString  donneur::getmail(){

    return mail;
}
void donneur::setid(int id) {
     this->id =id;
}
void donneur::setnum_tele(int num_tele){
    this->num_tele=num_tele;

}
void donneur::setqte_don(int qte_don){
   this->qte_don= qte_don;

}
void donneur::setnom(QString nom){
    this->nom= nom ;
}
void donneur::setprenom(QString prenom){

     this->prenom= prenom ;
}
void donneur::setadresse(QString adresse){
     this->adresse= adresse;
}
void donneur::setmail(QString mail){
     this->mail= mail;
}
bool donneur::ajouter(){

    QSqlQuery query;
       query.prepare("INSERT INTO donneur (id, nom, prenom, mail, adresse, qte_don, num_tele) "
                     "VALUES (:id, :nom, :prenom, :mail, :adresse, :qte_don, :num_tele)");

       query.bindValue(":id", id);
       query.bindValue(":num_tele", num_tele);
       query.bindValue(":qte_don", qte_don);
       query.bindValue(":nom", nom);
       query.bindValue(":prenom", prenom);
       query.bindValue(":mail", mail);
       query.bindValue(":adresse", adresse);

       return query.exec();

}
QSqlQueryModel* donneur::afficher(){
    QSqlQueryModel *model = new QSqlQueryModel;
       model->setQuery("SELECT * FROM donneur");



       return model;
}
bool donneur::supprimer( int id){

    QSqlQuery query;
    QString id_string = QString::number(id);

       // Check if the donneur with the specified ID exists
       query.prepare("SELECT COUNT(*) FROM donneur WHERE id = :id");
       query.bindValue(":id", id);
       if (!query.exec()) {
           return false;
       }
       query.next();
       if (query.value(0).toInt() == 0) {
           // donneur does not exist
           return false;
       }

       // Delete the donneur from the table
    query.prepare(" Delete from donneur where id= :id");
    query.bindValue(0,id);

    return query.exec();



}
bool donneur::modifier(int ancienId, int nouveauId, int nouveauNumTele, int nouvelleQteDon, const QString& nouvelleAdresse, const QString& nouveauMail) {
    QSqlQuery query;

    // Vérifier si l'enregistrement avec l'ancien ID existe
    query.prepare("SELECT COUNT(*) FROM donneur WHERE id = :ancienId");
    query.bindValue(":ancienId", ancienId);

    if (!query.exec() || !query.next() || query.value(0).toInt() == 0) {
        // L'enregistrement avec l'ancien ID n'existe pas
        return false;
    }

    // Mettre à jour les attributs de l'objet donneur
    setid(nouveauId);
    setnum_tele(nouveauNumTele);
    setqte_don(nouvelleQteDon);
    setadresse(nouvelleAdresse);
    setmail(nouveauMail);

    // Mettre à jour l'enregistrement dans la base de données
    query.prepare("UPDATE donneur SET id = :nouveauId, num_tele = :nouveauNumTele, qte_don = :nouvelleQteDon, adresse = :nouvelleAdresse, mail = :nouveauMail WHERE id = :ancienId");
    query.bindValue(":nouveauId", nouveauId);
    query.bindValue(":nouveauNumTele", nouveauNumTele);
    query.bindValue(":nouvelleQteDon", nouvelleQteDon);
    query.bindValue(":nouvelleAdresse", nouvelleAdresse);
    query.bindValue(":nouveauMail", nouveauMail);
    query.bindValue(":ancienId", ancienId);

    if (!query.exec()) {
        // Erreur lors de la mise à jour de l'enregistrement
        return false;
    }

    return true;
}





// ... (autres fonctions et déclarations de la classe donneur)

QSqlQueryModel* donneur::trierParColonne(const QString& colonne) {
    QSqlQueryModel* model = new QSqlQueryModel;
    QSqlQuery query;

    QString queryString = "SELECT * FROM donneur ORDER BY ";

    if (colonne == "id") {
        queryString += "id";
    } else if (colonne == "nom") {
        queryString += "nom";
    } else if (colonne == "qte_don") {
        queryString += "qte_don";
    } else {
        // Si la colonne n'est pas reconnue, trier par ID par défaut
        queryString += "id";
    }

    query.prepare(queryString);
    query.exec();

    model->setQuery(query);

    return model;
}

// dans votre classe donneur
