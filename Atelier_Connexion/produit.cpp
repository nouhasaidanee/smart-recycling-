#include "produit.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QObject>
#include <vector>
#include<QString>
#include<QSqlQueryModel>
#include <QCoreApplication>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
//#include <pistache/client.h>


Produit::Produit()
{

}

Produit::Produit(int id, int stock, float prix, QString arome, QString type, QString couleur){
    this->id = id;
    this->couleur = couleur;
    this->stock = stock;
    this->prix = prix;
    this->arome = arome;
    this->type = type;
}

bool Produit::ajouter(){
    QSqlQuery query;
    QString id_string = QString::number(id);
    QString stock_string = QString::number(stock);
    QString prix_string = QString::number(prix);

    // Check if the product with the specified ID already exists
    query.prepare("SELECT COUNT(*) FROM produit WHERE id = :id");
    query.bindValue(":id", id_string);

    if (!query.exec()) {
        return false;
    }

    query.next();
    if (query.value(0).toInt() > 0) {
        // Product already exists
        return false;
    }
    qDebug() << couleur ;
    // Add the new product to the table
    query.prepare("INSERT INTO produit (id, stock, prix, arome, type, couleur) "
                  "VALUES (:id, :stock, :prix, :arome, :type, :couleur)");
    query.bindValue(":id", id_string);
    query.bindValue(":stock", stock_string);
    query.bindValue(":prix", prix_string);
    query.bindValue(":arome", arome);
    query.bindValue(":type", type);
    query.bindValue(":couleur", couleur);

    return query.exec();
}

QSqlQueryModel* Produit::afficher(){
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM produit");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("couleur"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("stock"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("arome"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("type"));

    return model;
}

bool Produit::supprimer(int id){
    QSqlQuery query;
    QString id_string = QString::number(id);

    // Check if the product with the specified ID exists
    query.prepare("SELECT COUNT(*) FROM produit WHERE id = :id");
    query.bindValue(":id", id_string);
    if (!query.exec()) {
        return false;
    }
    query.next();
    if (query.value(0).toInt() == 0) {
        // Product does not exist
        return false;
    }

    // Delete the product from the table
    query.prepare("DELETE FROM produit WHERE id = :id");
    query.bindValue(":id", id);

    return query.exec();
}

bool Produit::modifier(int id, int nouveau_id, const QString& nouveau_couleur, int nouvelle_stock, double nouveau_prix, const QString& nouveau_type, const QString& nouveau_arome) {
    QSqlQuery query;

    // Vérifier si le produit avec l'ancien ID existe
    query.prepare("SELECT COUNT(*) FROM produit WHERE id = :id");
    query.bindValue(":id", id);
    if (!query.exec()) {
        return false;
    }
    query.next();
    if (query.value(0).toInt() == 0) {
        // Le produit avec l'ancien ID n'existe pas
        return false;
    }

    // Mettre à jour les informations du produit avec le nouveau ID
    query.prepare("UPDATE produit SET couleur = :nouveau_couleur, stock = :nouvelle_stock, prix = :nouveau_prix, type = :nouveau_type, arome = :nouveau_arome "
                  "WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":nouveau_couleur", nouveau_couleur);
    query.bindValue(":nouvelle_stock", nouvelle_stock);
    query.bindValue(":nouveau_prix", nouveau_prix);
    query.bindValue(":nouveau_type", nouveau_type);
    query.bindValue(":nouveau_arome", nouveau_arome);

    // Exécuter la requête de mise à jour
    return query.exec();
}
QSqlQueryModel* Produit::trierParColonne(const QString& colonne) {
    QSqlQueryModel* model = new QSqlQueryModel;
    QSqlQuery query;

    QString queryString = "SELECT * FROM donneur ORDER BY ";

    if (colonne == "prix") {
        queryString += "prix";
    } else if (colonne == "couleur") {
        queryString += "couleur";
    } else if (colonne == "type") {
        queryString += "type";
    } else {
        // Si la colonne n'est pas reconnue, trier par ID par défaut
        queryString += "prix";
    }

    query.prepare(queryString);
    query.exec();

    model->setQuery(query);

    return model;
}

//calcul revenue**********
// Ajoutez cette fonction à la classe Produit
double Produit::calculerRevenu() const {
    // Supposons que la charité soit de 10%
    const double pourcentageCharite = 0.1;

    // Calculez le revenu après avoir soustrait la charité
    double revenuSansCharite = prix * stock;

    // montant de la charité
    double montantCharite = revenuSansCharite * pourcentageCharite;

    // salaire des recycleurs (5%) du revenu
    const double pourcentageSalaireRecycleurs = 0.05;
    double salaireRecycleurs = revenuSansCharite * pourcentageSalaireRecycleurs;

    // revenu final
    double revenuFinal = revenuSansCharite - montantCharite - salaireRecycleurs;

    // Affichage du revenu
    qDebug() << "Revenu calculé : " << revenuFinal;

    return revenuFinal;
}

