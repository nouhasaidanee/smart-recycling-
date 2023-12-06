#include "windowsfour.h"
#include "ui_windowsfour.h"
#include "donneur.h"
#include "client.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtDebug>
#include <QSortFilterProxyModel>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QFile>
#include <QPdfWriter>
#include <QPainter>
#include <QFont>
#include <QMarginsF>
#include <QMessageBox>
#include <QSqlError>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextTable>
#include <QSortFilterProxyModel>
#include <QGraphicsScene>
#include <QPrinter>

WindowsFour::WindowsFour(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowsFour)
{
    ui->setupUi(this);

    // Dans le constructeur de MainWindow
    connect(ui->lineEdit_recherche, SIGNAL(textChanged(const QString&)), this, SLOT(on_lineEdit_recherche_textChanged(const QString&)));


    connect(ui->comboBox_3, SIGNAL(currentIndexChanged(const QString&)), this, SLOT(on_comboBox_3_currentIndexChanged(const QString&)));

    // Configurez le QTableView
          ui->tab_don->setModel(d.afficher());
          ui->comboBox_3->addItem("id");
          ui->comboBox_3->addItem("nom");
          ui->comboBox_3->addItem("qte_don");
          ui->tab_don->setModel(d.afficher());

          connect(ui->comboBox_4, SIGNAL(currentIndexChanged(const QString&)), this, SLOT(on_comboBox_3_currentIndexChanged(const QString&)));
client c;
              // Configurez le QTableView
                    ui->tab_don_client->setModel(c.afficher_client());
                    ui->comboBox_4->addItem("id");
                    ui->comboBox_4->addItem("nom");
                    ui->comboBox_4->addItem("qte_achat");

}

WindowsFour::~WindowsFour()
{
    delete ui;
}

void WindowsFour::on_pushButtonLogout_clicked()
{
    emit loggedOut();
    hide();
}


void WindowsFour::on_pb_ajouter_clicked()
{
    int id = ui->le_id->text().toInt();
       int  qte_don = ui->le_qte_don->text().toInt();
         int num_tele = ui->le_num_tele->text().toInt();
      QString nom = ui->le_nom->text();
         QString prenom = ui->le_prenom->text();
             QString adresse= ui->le_adresse->text();
                 QString mail = ui->le_mail->text();
    donneur d(id,num_tele,qte_don,nom,prenom,adresse,mail);



     bool test= d.ajouter();
      QMessageBox msgbox;
      if(test) {
          msgbox.setText("ajout avec succes.");
            ui->tab_don->setModel(d.afficher()); }
      else
          msgbox.setText(" echec d' ajout");
      msgbox.exec();



}

void WindowsFour::on_pb_supprimer_clicked()
{
    donneur d;
    d.setid(ui->le_id_sup->text().toInt());
    bool test= d.supprimer(d.getid());
    QMessageBox msgbox;
    if(test)
       { msgbox.setText("supprimer avec succes.");
     ui->tab_don->setModel(d.afficher());
    }
    else
        msgbox.setText(" echec de supp");
    msgbox.exec();
}

void WindowsFour::on_modifier_clicked()
{
    int ancienId = ui->le_id_ancien->text().toInt(); // L'ancien ID pour identifier l'enregistrement à modifier
       int nouveauId = ui->le_id_nouveau->text().toInt(); // Nouveau ID
       int nouveauNumTele = ui->le_num_tele_nouveau->text().toInt(); // Nouveau numéro de téléphone
       int nouvelleQteDon = ui->le_qte_don_nouvelle->text().toInt(); // Nouvelle quantité de don
       QString nouvelleAdresse = ui->le_adresse_nouvelle->text(); // Nouvelle adresse
       QString nouveauMail = ui->le_mail_nouveau->text(); // Nouveau mail

       donneur d;

       bool test = d.modifier(ancienId, nouveauId, nouveauNumTele, nouvelleQteDon, nouvelleAdresse, nouveauMail);

       QMessageBox msgbox;
       if (test) {
           msgbox.setText("Modification réussie.");
           ui->tab_don->setModel(d.afficher());
       } else {
           msgbox.setText("Échec de la modification.");
       }
       msgbox.exec();
}








void WindowsFour::on_comboBox_3_currentIndexChanged(const QString &colonne)
{
    donneur d;
      QSqlQueryModel* model = d.trierParColonne(colonne);


        // Assure-toi de libérer l'ancien modèle de la mémoire pour éviter les fuites de mémoire
        QAbstractItemModel* previousModel = ui->tableView2->model();
        ui->tableView2->setModel(model);

        if (previousModel) {
            delete previousModel;
        }
}




// Ajoutez la définition du nouveau slot
void WindowsFour::on_lineEdit_recherche_textChanged(const QString &text) {
    rechercherDonneur(text);
}

// Mettez à jour votre fonction de recherche
void WindowsFour::rechercherDonneur(const QString& termeRecherche) {
    QSqlQueryModel* model = new QSqlQueryModel;

    // Construction de la requête SQL en utilisant une clause WHERE combinant plusieurs conditions
    QString queryString = "SELECT * FROM donneur WHERE "
                         "nom LIKE '%" + termeRecherche + "%' OR "
                         "id LIKE '%" + termeRecherche + "%' OR "
                         "qte_don LIKE '%" + termeRecherche + "%'";

    QSqlQuery query;
    query.prepare(queryString);
    query.exec();

    // Mise à jour du modèle de la vue
    model->setQuery(query);
    ui->tableView_3->setModel(model);
}







void WindowsFour::on_pb_pdf_clicked()
{

        QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", QString(), "Fichiers PDF (*.pdf)");

        if (fileName.isEmpty()) {
            return;  // L'utilisateur a annulé la sélection du fichier
        }

        // Créez le périphérique d'impression
        QPrinter printer(QPrinter::PrinterResolution);

        // Définissez le nom du fichier de sortie
        printer.setOutputFileName(fileName);
        printer.setOutputFormat(QPrinter::PdfFormat);

        // Créez un document QText pour contenir le contenu du PDF
        QTextDocument doc;

        // Créez un curseur pour ajouter du texte au document
        QTextCursor cursor(&doc);

        // Ajoutez un en-tête au document
        QTextCharFormat format;
        format.setFont(QFont("Arial", 16, QFont::Bold));
        cursor.insertText("Liste des Employés\n\n", format);

        // Obtenez le modèle de la table et parcourez les lignes pour ajouter les données au document
        QSqlQueryModel *model = new QSqlQueryModel();
        model = static_cast<QSqlQueryModel*>(ui->tab_don->model());
        int rowCount = model->rowCount();
        int colCount = model->columnCount();

        // Créez une table pour afficher les données
        QTextTable *table = cursor.insertTable(rowCount + 1, colCount);

        // Remplissez la première ligne avec les noms de colonnes
        for (int col = 0; col < colCount; ++col) {
            table->cellAt(0, col).firstCursorPosition().insertText(model->headerData(col, Qt::Horizontal).toString());
        }

        // Remplissez le reste de la table avec les données de la base de données
        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < colCount; ++col) {
                table->cellAt(row + 1, col).firstCursorPosition().insertText(model->data(model->index(row, col)).toString());
            }
        }

        // Imprimez le document sur le périphérique d'impression
        doc.print(&printer);

        QMessageBox::information(this, "Export PDF", "Exportation en PDF réussie !");
}
// dans votre classe MainWindow











void WindowsFour::on_comboBox_4_currentIndexChanged(const QString &colonne)
{
 client c ;
      QSqlQueryModel* model = c.trierParColonne(colonne);


        // Assure-toi de libérer l'ancien modèle de la mémoire pour éviter les fuites de mémoire
        QAbstractItemModel* previousModel = ui->tableView2_client->model();
        ui->tableView2_client->setModel(model);

        if (previousModel) {
            delete previousModel;
        }
}




// Ajoutez la définition du nouveau slot




// Mettez à jour votre fonction de recherche






void WindowsFour::on_pb_supprimer_client_clicked()
{
    client c;
    c.setid(ui->le_id_sup_client->text().toInt());
    bool test= c.supprimer(c.getid());
    QMessageBox msgbox;
    if(test)
       { msgbox.setText("supprimer avec succes.");
     ui->tab_don_client->setModel(c.afficher_client());
    }
    else
        msgbox.setText(" echec de supp");
    msgbox.exec();
}

void WindowsFour::on_pb_ajouter_client_clicked()
{
    int id = ui->le_id_client->text().toInt();
       int  qte_achat = ui->le_qte_achat_client->text().toInt();
         int num_tele = ui->le_num_tele_client->text().toInt();
      QString nom = ui->le_nom_client->text();
         QString prenom = ui->le_prenom_client->text();
             QString adresse= ui->le_adresse_client->text();
                 QString mail = ui->le_mail_client->text();
    client c(id,num_tele,qte_achat,nom,prenom,adresse,mail);



     bool test= c.ajouter();
      QMessageBox msgbox;
      if(test) {
          msgbox.setText("ajout avec succes.");
            ui->tab_don_client->setModel(c.afficher_client()); }
      else
          msgbox.setText(" echec d' ajout");
      msgbox.exec();


}

void WindowsFour::on_modifier_client_clicked()
{
    int ancienId = ui->le_id_ancien_client->text().toInt(); // L'ancien ID pour identifier l'enregistrement à modifier
       int nouveauId = ui->le_id_nouveau_client->text().toInt(); // Nouveau ID
       int nouveauNumTele = ui->le_num_tele_nouveau_client->text().toInt(); // Nouveau numéro de téléphone
       int nouvelleQteachat = ui->le_qte_achat_nouvelle_client->text().toInt(); // Nouvelle quantité de don
       QString nouvelleAdresse = ui->le_adresse_nouvelle_client->text(); // Nouvelle adresse
       QString nouveauMail = ui->le_mail_nouveau_client->text(); // Nouveau mail

       client c;

       bool test = c.modifier(ancienId, nouveauId, nouveauNumTele, nouvelleQteachat , nouvelleAdresse, nouveauMail);

       QMessageBox msgbox;
       if (test) {
           msgbox.setText("Modification réussie.");
           ui->tab_don_client->setModel(c.afficher_client());
       } else {
           msgbox.setText("Échec de la modification.");
       }
       msgbox.exec();
}


void WindowsFour::on_pdf_client_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", QString(), "Fichiers PDF (*.pdf)");

    if (fileName.isEmpty()) {
        return;  // L'utilisateur a annulé la sélection du fichier
    }

    // Créez le périphérique d'impression
    QPrinter printer(QPrinter::PrinterResolution);

    // Définissez le nom du fichier de sortie
    printer.setOutputFileName(fileName);
    printer.setOutputFormat(QPrinter::PdfFormat);

    // Créez un document QText pour contenir le contenu du PDF
    QTextDocument doc;

    // Créez un curseur pour ajouter du texte au document
    QTextCursor cursor(&doc);

    // Ajoutez un en-tête au document
    QTextCharFormat format;
    format.setFont(QFont("Arial", 16, QFont::Bold));
    cursor.insertText("Liste des Employés\n\n", format);

    // Obtenez le modèle de la table et parcourez les lignes pour ajouter les données au document
    QSqlQueryModel *model = new QSqlQueryModel();
    model = static_cast<QSqlQueryModel*>(ui->tab_don_client->model());
    int rowCount = model->rowCount();
    int colCount = model->columnCount();

    // Créez une table pour afficher les données
    QTextTable *table = cursor.insertTable(rowCount + 1, colCount);

    // Remplissez la première ligne avec les noms de colonnes
    for (int col = 0; col < colCount; ++col) {
        table->cellAt(0, col).firstCursorPosition().insertText(model->headerData(col, Qt::Horizontal).toString());
    }

    // Remplissez le reste de la table avec les données de la base de données
    for (int row = 0; row < rowCount; ++row) {
        for (int col = 0; col < colCount; ++col) {
            table->cellAt(row + 1, col).firstCursorPosition().insertText(model->data(model->index(row, col)).toString());
        }
    }

    // Imprimez le document sur le périphérique d'impression
    doc.print(&printer);

    QMessageBox::information(this, "Export PDF", "Exportation en PDF réussie !");
}



