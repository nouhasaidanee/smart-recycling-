#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Project2A");
db.setUserName("nouha");//inserer nom de l'utilisateur
db.setPassword("nouha");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;


    return  test;
}
void Connection::fermerConnexion()
{db.close();}
