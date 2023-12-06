#include "charite.h"
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QtDebug>
#include <QObject>
#include "charite.h"
#include<QTableView>
#include<QSqlQueryModel>
#include <QMessageBox>
charite::charite()
{
Codechar=0;
Typechar="";
date="";
QTE=0;
}
//4
charite::charite(int Codechar,QString Typechar,QString date,int QTE)
{this->Codechar=Codechar;this->Typechar=Typechar;this->date=date;this->QTE=QTE;}
int charite::getQTE(){return QTE;}
int charite::getCodechar(){return  Codechar;}
QString charite::getTypechar(){return  Typechar;}
QString charite::getdate(){return  date;}
void charite::setQTE(int QTE){this->QTE=QTE;}
void charite::setCodechar(int Codechar){this->Codechar=Codechar;}
void charite::setTypechar(QString Typechar){this->Typechar=Typechar;}
void charite::setdate(QString date){this->date=date;}



bool charite::ajouter()
{
    QString Codechar_string=QString::number(Codechar);
     QString QTE_string=QString::number(QTE);
    QSqlQuery query;
          query.prepare("INSERT INTO CHARITE(CODECHAR,TYPECHAR,DATEE,QTE)"
                        "VALUES(:CODECHAR,:TYPECHAR,:DATE,:QTE)");
          query.bindValue(":CODECHAR", Codechar_string);
          query.bindValue(":TYPECHAR", Typechar);
          query.bindValue(":DATEE", date);
          query.bindValue(":QTE", QTE_string);


 return query.exec();
}


QSqlQueryModel* charite::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("select * from CHARITE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("code_charite"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("type_charite"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("QTE"));
    return model;

}
bool charite::supprimer(int Codechar)
{
    QSqlQuery query;
    query.prepare("Delete from CHARITE where CODECHAR =:Codechar");
    query.bindValue(":Codechar",Codechar);
    return query.exec();
}

bool charite::modifier(int Codechar)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM charite WHERE CODECHAR = :Codechar");

    query.bindValue(":Codechar", Codechar);
    if (!query.exec())
    {
        qDebug() << "ERREUR LORS DE L'EXECUTION DE LA REQUETE SELECT.";
        return false;
    }
    if (query.next())
    {
        QString codechar_string = QString::number(Codechar);
        QString typechar_string = Typechar;
        QString date_string = date;
        QString qte_string = QString::number(QTE);

        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE charite SET TYPECHAR = :typechar, DATE = :date, QTE = :qte WHERE CODECHAR = :codechar");
        updateQuery.bindValue(":codechar", codechar_string);
        updateQuery.bindValue(":typechar", typechar_string);
        updateQuery.bindValue(":date", date_string);
        updateQuery.bindValue(":qte", qte_string);

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

bool charite::rechercher_codechar(int Codechar)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM charite WHERE Codechar = :Codechar");

    query.bindValue(":Codechar", Codechar);

    if (query.exec() && query.next()) {
        setCodechar(query.value("Codechar").toInt());
        setTypechar(query.value("typechar").toString());
        setdate(query.value("datee").toString());
        setQTE(query.value("qte").toInt());

        return true;
    }

    return false;
}
bool charite::rechercher_date(QString date)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM charite WHERE datee = :date");
    query.bindValue(":date", date);

    if (query.exec() && query.next()) {
        setCodechar(query.value("Codechar").toInt());
        setTypechar(query.value("typechar").toString());
        setdate(query.value("datee").toString());
        setQTE(query.value("qte").toInt());

        return true;
    }

    return false;
}

QSqlQueryModel * charite::trier_typechar()  //ASC
    {
        QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("SELECT * FROM charite ORDER BY typechar");

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("codecher"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("typechar"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("datee"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("qte "));


        return model;
    }
QSqlQueryModel * charite::trier_date()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM charite ORDER BY date");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("codecher"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("typechar"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("qte "));
  ;
    return model;
}
