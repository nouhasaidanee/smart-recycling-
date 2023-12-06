#include "client.h"
#include <QtDebug>
#include<QObject>
#include <QSqlQueryModel>
#include <QString>
#include<QMessageBox>
#include <QSqlQuery>
#include <QFile>
#include <QPdfWriter>
#include <QPainter>
#include <QFont>
#include <QMarginsF>

#include <QSqlQuery>
client::client()
{
    id= 0;
    num_tele= 0;
         qte_achat= 0;
 nom="";
 prenom ="";
  adresse="" ;
  mail="" ;
}



client::client(int id, int num_tele, int  qte_achat, QString nom, QString prenom, QString adresse, QString mail ){
  this->id =id;
   this->num_tele=num_tele;
            this->qte_achat= qte_achat;
    this->nom= nom ;
     this->prenom= prenom;
     this->adresse= adresse;
     this->mail = mail;
}
int client::getid(){
    return id;
}
int client::getqte_achat(){
    return qte_achat;
}
int client::getnum_tele(){
    return num_tele ;
}
QString  client::getnom(){

    return nom;
}
QString  client::getprenom(){

    return prenom;
}
QString  client::getadresse(){

    return adresse;
}
QString  client::getmail(){

    return mail;
}
void client::setid(int id) {
     this->id =id;
}
void client::setnum_tele(int num_tele){
    this->num_tele=num_tele;

}
void client::setqte_achat(int qte_achat){
   this->qte_achat= qte_achat;

}
void client::setnom(QString nom){
    this->nom= nom ;
}
void client::setprenom(QString prenom){

     this->prenom= prenom ;
}
void client::setadresse(QString adresse){
     this->adresse= adresse;
}
void client::setmail(QString mail){
     this->mail= mail;
}
bool client::ajouter(){

    QSqlQuery query;
       query.prepare("INSERT INTO client (id, nom, prenom, mail, adresse, qte_achat, num_tele) "
                     "VALUES (:id, :nom, :prenom, :mail, :adresse, :qte_achat, :num_tele)");

       query.bindValue(":id", id);
       query.bindValue(":num_tele", num_tele);
       query.bindValue(":qte_achat", qte_achat);
       query.bindValue(":nom", nom);
       query.bindValue(":prenom", prenom);
       query.bindValue(":mail", mail);
       query.bindValue(":adresse", adresse);

       return query.exec();

}
QSqlQueryModel* client::afficher_client(){
    QSqlQueryModel *model = new QSqlQueryModel;
       model->setQuery("SELECT * FROM client");



       return model;
}
bool client::supprimer( int id){

    QSqlQuery query;
    QString id_string = QString::number(id);

       // Check if the donneur with the specified ID exists
       query.prepare("SELECT COUNT(*) FROM client WHERE id = :id");
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
    query.prepare(" Delete from client where id= :id");
    query.bindValue(0,id);

    return query.exec();



}
bool client::modifier(int ancienId, int nouveauId, int nouveauNumTele, int nouvelleqte_achat, const QString& nouvelleAdresse, const QString& nouveauMail) {
    QSqlQuery query;

    // Vérifier si l'enregistrement avec l'ancien ID existe
    query.prepare("SELECT COUNT(*) FROM client WHERE id = :ancienId");
    query.bindValue(":ancienId", ancienId);

    if (!query.exec() || !query.next() || query.value(0).toInt() == 0) {
        // L'enregistrement avec l'ancien ID n'existe pas
        return false;
    }

    // Mettre à jour les attributs de l'objet donneur
    setid(nouveauId);
    setnum_tele(nouveauNumTele);
    setqte_achat(nouvelleqte_achat);
    setadresse(nouvelleAdresse);
    setmail(nouveauMail);

    // Mettre à jour l'enregistrement dans la base de données
    query.prepare("UPDATE donneur SET id = :nouveauId, num_tele = :nouveauNumTele, qte_don = :nouvelleQteDon, adresse = :nouvelleAdresse, mail = :nouveauMail WHERE id = :ancienId");
    query.bindValue(":nouveauId", nouveauId);
    query.bindValue(":nouveauNumTele", nouveauNumTele);
    query.bindValue(":nouvelleqte_achat", nouvelleqte_achat);
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

QSqlQueryModel* client::trierParColonne(const QString& colonne) {
    QSqlQueryModel* model = new QSqlQueryModel;
    QSqlQuery query;

    QString queryString = "SELECT * FROM client ORDER BY ";

    if (colonne == "id") {
        queryString += "id";
    } else if (colonne == "nom") {
        queryString += "nom";
    } else if (colonne == "qte_achat") {
        queryString += "qte_achat";
    } else {
        // Si la colonne n'est pas reconnue, trier par ID par défaut
        queryString += "id";
    }

    query.prepare(queryString);
    query.exec();

    model->setQuery(query);

    return model;
}
