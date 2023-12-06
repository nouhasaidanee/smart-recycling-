#include "windowproduit.h"
#include "ui_windowproduit.h"
#include "produit.h"
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
#include <QFileDialog>  // Ajoutez cette ligne pour inclure QFileDialog
#include <QTextDocument>
#include <QTextTable>

WindowProduit::WindowProduit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowProduit)
{
    ui->setupUi(this);
    connect(ui->comboBox3, SIGNAL(currentIndexChanged(const QString&)), this, SLOT(on_comboBox_3_currentIndexChanged(const QString&)));
    Produit p;
        // Configurez le QTableView
    ui->tab_produit->setModel(p.afficher());
    ui->comboBox3->addItem("id");
    ui->comboBox3->addItem("nom");
    ui->comboBox3->addItem("prix");
    ui->le_id->setValidator( new QIntValidator(0, 99999999, this));
     ui->tab_produit->setModel(pr.afficher());
    connect(ui->pb_modifier, SIGNAL(clicked()), this, SLOT(on_pb_modifier_clicked()));
    connect(ui->lineEdit_recherche, SIGNAL(textChanged(const QString&)), this, SLOT(on_lineEdit_recherche_textChanged(const QString&)));
}

WindowProduit::~WindowProduit()
{
    delete ui;
}

void WindowProduit::on_pushButtonlogout_clicked()
{
    emit loggedOut();
    hide();
}


void WindowProduit::on_pb_ajouter_clicked()
{   int id = ui->le_id->text().toInt();
     int stock= ui->le_stock->text().toInt();
     float prix = ui->le_prix->text().toInt();
    QString type = ui->le_type->text();
    QString arome = ui->le_arome->text();
    QString couleur= ui->le_couleur->text();
    qDebug() << couleur ;
   Produit p(id,stock, prix, type, arome,couleur);

   bool test =p.ajouter() ;
   QMessageBox msgBox;
   if(test){
       msgBox.setText("ajout succes");
   ui->tab_produit->setModel(p.afficher());}
   else    msgBox.setText("ajout echec");
    msgBox.exec();
}

void WindowProduit::on_pb_supprimer_clicked()
{
   Produit p2;
    p2.setid(ui->le_id_supp->text().toInt());
    bool test =p2.supprimer(p2.getid()) ;
    QMessageBox msgBox;
    if(test){
        msgBox.setText("suppresion succes");
        ui->tab_produit->setModel(p2.afficher());}
    else    msgBox.setText("suppresion echec");
     msgBox.exec();
}

void WindowProduit::on_pb_modifier_clicked()
{
     int id = ui->le_id_modif->text().toInt();
      int nouveau_id = ui->le_idnew_modif->text().toInt();
      QString nouveau_couleur = ui->le_couleur_modif->text();
      QString nouveau_arome = ui->le_arome_modif->text();
       QString nouveau_type = ui->le_type_modif->text();
        double nouveau_prix = ui->le_prix_modif->text().toInt();
       int nouveau_stock = ui->le_stock_modif->text().toInt();

       // Appelez la fonction de modification de produit
         Produit p2; bool test = p2.modifier(id,  nouveau_id, nouveau_couleur,  nouveau_stock, nouveau_prix, nouveau_type,nouveau_arome);
         if (test) {
             // La modification a réussi
             qDebug() << "Produit modifié avec succès!";
         } else {
             // La modification a échoué
             qDebug() << "Échec de la modification du produit!";
         }


}
void WindowProduit::on_comboBox_3_currentIndexChanged(const QString &colonne)
{
    Produit p;
      QSqlQueryModel* model = p.trierParColonne(colonne);


        // Assure-toi de libérer l'ancien modèle de la mémoire pour éviter les fuites de mémoire
        QAbstractItemModel* previousModel = ui->tableView2->model();
        ui->tableView2->setModel(model);

        if (previousModel) {
            delete previousModel;
        }
}
void WindowProduit::on_lineEdit_recherche_textChanged(const QString &text) {
    rechercherproduit(text);
}

// Mettez à jour votre fonction de recherche
void WindowProduit::rechercherproduit(const QString& termeRecherche) {
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
void WindowProduit::on_pb_pdf_clicked()
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
    model = static_cast<QSqlQueryModel*>(ui->tab_produit->model());
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
