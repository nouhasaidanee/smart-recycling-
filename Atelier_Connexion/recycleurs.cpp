#include"recycleurs.h"
#include <QObject>
#include<QSqlQueryModel>
#include <QMessageBox>
Recycleurs::Recycleurs()
{
id_recycleur=0;
nom_prenom="";
adresse="";
num_tele=0;
type_materiaux="";
}
Recycleurs::Recycleurs(int id_recycleur,QString nom_prenom,QString adresse,int num_tele,QString type_materiaux)
{   this->id_recycleur=id_recycleur;
    this->nom_prenom=nom_prenom;
    this->adresse=adresse;
    this->num_tele=num_tele;
    this->type_materiaux=type_materiaux;
}
int Recycleurs::getid_recycleur(){return id_recycleur;}
QString Recycleurs::getnom_prenom(){return nom_prenom;}
QString Recycleurs::getadresse(){return adresse;}
int Recycleurs::getnum_tele(){return num_tele;}
QString Recycleurs::gettype_materiaux(){return type_materiaux;}
void Recycleurs::setid_recycleur(int id_recycleur){this->id_recycleur=id_recycleur;}
void Recycleurs::setnom_prenom(QString nom_prenom){this->nom_prenom=nom_prenom;}
void Recycleurs::setadresse(QString adresse){this->adresse=adresse;}
void Recycleurs::setnum_tele(int num_tele){this->num_tele=num_tele;}
void Recycleurs::settype_materiaux(QString type_materiaux){this->type_materiaux=type_materiaux;}

bool Recycleurs::ajouter()
{
    QSqlQuery query;
    QString id_recycleur_string = QString::number(id_recycleur);
    QString num_tele_string = QString::number(num_tele);
    query.prepare("INSERT INTO RECYCLEUR(ID_RECYCLEUR,NOM_PRENOM,ADRESSE,NUM_TELE,TYPE_MATERIAUX)"
                  "VALUES(:id_recycleur,:nom_prenom,:adresse,:num_tele,:type_materiaux)");
    query.bindValue(":id_recycleur", id_recycleur_string);
    query.bindValue(":nom_prenom", nom_prenom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":num_tele", num_tele_string);
    query.bindValue(":type_materiaux", type_materiaux);
    return query.exec();
}



QSqlQueryModel * Recycleurs::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from RECYCLEUR");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_RECYCLEUR"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NUM_TELE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TYPE_MATERIAUX"));


    return model;
}

bool Recycleurs::supprimer(QString nom_prenom)
{
    QSqlQuery query;
    query.prepare("Delete from recycleur where NOM_PRENOM =:nom");
    query.bindValue(":nom",nom_prenom);
    return query.exec();
}

bool Recycleurs::modifier(int id_recycleur)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM recycleur WHERE ID_RECYCLEUR = :id_recycleur");

    query.bindValue(":id_recycleur", id_recycleur);
    if (!query.exec())
    {
        qDebug() << "ERREUR LORS DE L'EXECUTION DE LA REQUETE SELECT.";
        return false;
    }
    if (query.next())
    {
        QString id_recycleur_string = QString::number(id_recycleur);
        QString nom_prenom_string = nom_prenom;
        QString adresse_string = adresse;
        QString num_tele_string = QString::number(num_tele);
        QString type_materiaux_string = type_materiaux;

        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE RECYCLEUR SET ADRESSE = :adresse, NOM_PRENOM = :nom_prenom, NUM_TELE = :num_tele, TYPE_MATERIAUX = :type_materiaux WHERE ID_RECYCLEUR = :id_recycleur");
        updateQuery.bindValue(":id_recycleur", id_recycleur_string);
        updateQuery.bindValue(":nom_prenom", nom_prenom);
        updateQuery.bindValue(":adresse", adresse);
        updateQuery.bindValue(":num_tele", num_tele);
        updateQuery.bindValue(":type_materiaux", type_materiaux);

        if (updateQuery.exec())
        {
            return true;
        }
        else
        {
            // Gérer l'erreur d'exécution de la requête UPDATE
            qDebug() << "Erreur lors de l'exécution de la requête Mise à Jour." << updateQuery.lastError().text();
            return false;
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Référence non trouvée pour la modification.");
        msgBox.exec();
        return false; // Arrêter le processus ici si la référence n'est pas trouvée pour la modification
    }
}

bool Recycleurs::rechercher_id_recycleur(int id_recycleur)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM recycleur WHERE ID_RECYCLEUR = :ID_RECYCLEUR");

    query.bindValue(":ID_RECYCLEUR", id_recycleur);

    if (query.exec() && query.next()) {
        setid_recycleur(query.value("ID_RECYCLEUR").toInt());
        setnom_prenom(query.value("NOM_PRENOM").toString());
        setadresse(query.value("ADRESSE").toString());
        setnum_tele(query.value("NUM_TELE").toInt());
        settype_materiaux(query.value("TYPE_MATERIAUX").toString());

        return true;
    }

    return false;
}




QSqlQueryModel * Recycleurs::trier_nom()  //ASC
    {
        QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("SELECT * FROM recycleur ORDER BY NOM_PRENOM");

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_RECYCLEUR"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_PRENOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("NUM_TELE "));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("TYPE_MATERIAUX"));

        return model;
    }
QSqlQueryModel * Recycleurs::trier_type_materiaux()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM recycleur ORDER BY TYPE_MATERIAUX");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_RECYCLEUR"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NUM_TELE "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TYPE_MATERIAUX"));
  ;
    return model;
}
