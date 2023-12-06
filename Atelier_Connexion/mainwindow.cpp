#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "recycleurs.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QtWidgets>
#include"login.h"
#include "login.cpp"
#include <QTextStream>
#include <QFileDialog>
#include <QPrinter>
#include <QTextDocument>
#include<QPdfWriter>
#include<QPainter>
#include<QDesktopServices>
#include<QUrl>
#include <QVector2D>
#include <QVector>
#include <QTextEdit>
#include<QDesktopServices>
#include <QPainter>
#include <QSqlQuery>
#include<QDesktopServices>
#include<QPdfWriter>
#include <QMessageBox>
#include<QUrl>
#include<QFileDialog>
#include <QPixmap>
#include <QTabWidget>
#include <QtSql/QSqlQueryModel>
#include<QtSql/QSqlQuery>
#include<QVariant>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QByteArray>
#include "mainwindow.h"
#include <QVBoxLayout>
#include <QPixmap>
#include "mainwindow.h"
#include "arduino.h"
#include <QObject>
#include <QLabel>

// MainWindow.cpp
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
     arduino = new Arduino(this);
    ui->le_id->setValidator(new QIntValidator(0, 99999999, this));
    ui->le_tele->setValidator(new QIntValidator(0, 99999999, this));
    ui->tab_recycleur->setModel(R.afficher());
    ui->tab_rec->setModel(R.afficher());
    // Créer les boutons et le label
       btnOuvrir = new QPushButton("Ouvrir Boîte", this);
       btnFermer = new QPushButton("Fermer Boîte", this);
       lblLumiere = new QLabel("Valeur de lumière :", this);
       labelEtatBoite = new QLabel(this);

       // Positionner les widgets
           btnOuvrir->setGeometry(10, 10, 100, 30);
           btnFermer->setGeometry(120, 10, 100, 30);
           lblLumiere->setGeometry(10, 50, 200, 30);
           labelEtatBoite->setGeometry(10, 90, 200, 30);


       // Connecter les signaux/slots seulement si l'objet arduino est valide
       if (arduino)
       {
           connect(btnOuvrir, &QPushButton::clicked, this, &MainWindow::on_btnOuvrir_clicked);
           connect(btnFermer, &QPushButton::clicked, this, &MainWindow::on_btnFermer_clicked);
           connect(arduino, &Arduino::lumiereChanged, this, &MainWindow::onLumiereChanged);
       }
       // Configuration du port série pour Arduino
          QSerialPort *serial = new QSerialPort(this);
          serial->setPortName("COM7");  // Remplacez par le bon nom de port
          serial->setBaudRate(QSerialPort::Baud9600);
          // Ouvrez le port série
             if (serial->open(QIODevice::ReadWrite)) {
                 // Le port série est ouvert avec succès
                 qDebug() << "Port série ouvert avec succès";

                 // Connectez le port série à votre objet Arduino
                 arduino->setSerialPort(serial);
             } else {
                 // Erreur lors de l'ouverture du port série
                 qDebug() << "Erreur lors de l'ouverture du port série : " << serial->errorString();
             }

}


MainWindow::~MainWindow()
{
    // Déconnecter les signaux/slots avant la destruction
       disconnect(btnOuvrir, &QPushButton::clicked, this, &MainWindow::on_btnOuvrir_clicked);
       disconnect(btnFermer, &QPushButton::clicked, this, &MainWindow::on_btnFermer_clicked);
       disconnect(arduino, &Arduino::lumiereChanged, this, &MainWindow::onLumiereChanged);

    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{

    int id_recycleur=ui->le_id->text().toInt();
    QString nom_prenom=ui->le_nom->text();
    QString adresse=ui->le_adresse->text();
    int num_tele=ui->le_tele->text().toInt();
    QString type_materiaux=ui->le_type->text();

 Recycleurs R(id_recycleur,nom_prenom,adresse,num_tele,type_materiaux);

 QMessageBox msgBox;
     bool test=R.ajouter();
     if(test)
     {
         msgBox.setText("Ajout avec succès.");
         ui->tab_recycleur->setModel(R.afficher());
     }
     else
         msgBox.setText("Echec d'ajout!");
     msgBox.exec();



}

void MainWindow::on_pb_supprimer_clicked()
{

    QString nom_prenom = ui->supp_nom->text();
            Recycleurs R1;
            bool test=R1.supprimer(nom_prenom);
            ui->tab_recycleur->setModel(R.afficher());//refresh
            if(test)
            {

                QMessageBox::information(nullptr, QObject::tr("Supprimer un client"),
                            QObject::tr("client supprimé.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
                ui->tab_recycleur->setModel(R.afficher());//refresh

            }
}


void MainWindow::on_pb_modifier_clicked()
{
    int id_recycleur=ui->le_id->text().toInt();
    QString nom_prenom=ui->le_nom->text();
    QString adresse=ui->le_adresse->text();
    int num_tele=ui->le_tele->text().toInt();
    QString type_materiaux=ui->le_type->text();
    Recycleurs R(id_recycleur,nom_prenom,adresse,num_tele,type_materiaux);

    bool test=R.modifier(id_recycleur);

               if(test) {
                   ui->tab_recycleur->setModel(R.afficher());
                   QMessageBox::information(nullptr, QObject::tr("database is open"),
                               QObject::tr("Modification effectuée.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);}
}




void MainWindow::on_pb_chercher_clicked()
{
    int id_recycleur = ui->le_id_2->text().toInt();

    Recycleurs R;
    bool test = R.rechercher_id_recycleur(id_recycleur);

    QMessageBox msgBox;
    if (test)
    {
        msgBox.setText("Recycleur trouvé.");
        // Affichez les données dans votre tableau ou où vous le souhaitez
        ui->tabrech->setModel(R.afficher_id_recycleur(id_recycleur));
    }
    else
    {
        msgBox.setText("Recycleur introuvable!");
    }
    msgBox.exec();
}




QSqlQueryModel* Recycleurs::afficher_id_recycleur(int& id_recycleur) {
    QSqlQueryModel* model = new QSqlQueryModel;

    QSqlQuery query;
    query.prepare("SELECT * FROM recycleur WHERE ID_RECYCLEUR = :ID_RECYCLEUR");
    query.bindValue(":ID_RECYCLEUR", id_recycleur);

    if (query.exec()) {
        model->setQuery(query);
    } else {
        // Gérer l'erreur, par exemple, afficher un message d'erreur dans qDebug()
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
    }

    return model;
}


void MainWindow::on_pb_trierNom_clicked()
{
    QString critere=ui->cb_trie->currentText();
    if (critere=="nom_prenom")
        ui->tab_rec->setModel(R.trier_nom());
    else
    {
         (critere=="type_materiaux");
        ui->tab_rec->setModel(R.trier_type_materiaux());

}
}

void MainWindow::on_pb_log_in_clicked()
{
    {
        QString username=ui->lineEdit_email_2->text();
        QString prenom=ui->lineEdit_prenom_2->text();
        QString nom=ui->lineEdit_nom_2->text();
        QString motdepasse=ui->lineEdit_motdepasse->text();
        QString question=ui->quest->currentText();
        QString reponse=ui->reponse->text();
        login L(username,prenom,nom,motdepasse,question,reponse);


        bool test=L.ajouterL();
        if(test)
        {

        QMessageBox::information(nullptr, QObject::tr("Ok"),
                      QObject::tr("Ajout effectué.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
        ui->lineEdit_nom_2->setText("");
        ui->lineEdit_prenom_2->setText("");
        ui->lineEdit_email_2->setText("");
        ui->lineEdit_motdepasse->setText("");
        ui->reponse->setText("");
        ui->quest->setCurrentText("");
      }
             else

                 QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                      QObject::tr("Ajout non effectué.\n""minimum 8 caractère mot de passe\n""minimum 5 caractère username\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
    }



void MainWindow::on_PDF_pb_clicked()
{


        QString strStream;
               QTextStream out(&strStream);

               const int rowCount = ui->tab_recycleur->model()->rowCount();
               const int columnCount = ui->tab_recycleur->model()->columnCount();

               out <<  "<html>\n"
                      "<head>\n"
                      "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                   <<  QString("<title>%1</title>\n").arg("strTitle")
                   <<  "</head>\n"
                      "<body bgcolor=#ffffff link=#5000A0>\n"

                      //     "<align='right'> " << datefich << "</align>"
                      "<center> <H1>GESTION ANNIMAUX </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

               // headers
               out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
               for (int column = 0; column < columnCount; column++)
                   if (!ui->tab_recycleur->isColumnHidden(column))
                       out << QString("<th>%1</th>").arg(ui->tab_recycleur->model()->headerData(column, Qt::Horizontal).toString());
               out << "</tr></thead>\n";

               // data table
               for (int row = 0; row < rowCount; row++) {
                   out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                   for (int column = 0; column < columnCount; column++) {
                       if (!ui->tab_recycleur->isColumnHidden(column)) {
                           QString data = ui->tab_recycleur->model()->data(ui->tab_recycleur->model()->index(row, column)).toString().simplified();
                           out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                       }
                   }
                   out << "</tr>\n";
               }
               out <<  "</table> </center>\n"
                      "</body>\n"
                      "</html>\n";

               QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
               if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

               QPrinter printer (QPrinter::PrinterResolution);
               printer.setOutputFormat(QPrinter::PdfFormat);
               printer.setPaperSize(QPrinter::A4);
               printer.setOutputFileName(fileName);

               QTextDocument doc;
               doc.setHtml(strStream);
               doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
               doc.print(&printer);
    }






void MainWindow::on_stat_clicked()
{
    double dag=0;
       double dir=0;


       QSqlQuery q;
           q.prepare("SELECT * FROM recycleur WHERE type_materiaux like 'savon' ");
           q.exec();
             while (q.next())
           {
           dag++;
           }

             q.prepare("SELECT * FROM recycleu WHERE type_materiaux like  'bougie' ");
             q.exec();
               while (q.next())
             {
             dir++;
             }

       // set dark background gradient:
       QLinearGradient gradient(0, 0, 0, 400);
       gradient.setColorAt(0, QColor(90, 90, 90));
       gradient.setColorAt(0.38, QColor(105, 105, 105));
       gradient.setColorAt(1, QColor(70, 70, 70));
       ui->gplot->setBackground(QBrush(gradient));

       // create empty bar chart objects:

       QCPBars *fossil = new QCPBars(ui->gplot->xAxis, ui->gplot->yAxis);
       fossil->setAntialiased(false);


       fossil->setStackingGap(1);
       // set names and colors:
       fossil->setName("type_materiax");
       fossil->setPen(QPen(QColor(111, 9, 176).lighter(170)));
       fossil->setBrush(QColor(111, 9, 176));


       // prepare x axis with country labels:
       QVector<double> ticks;
       QVector<QString> labels;
       ticks << 1 << 2 ;
       labels << "savon" << "bougie" ;
       QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
       textTicker->addTicks(ticks, labels);
       ui->gplot->xAxis->setTicker(textTicker);
       ui->gplot->xAxis->setTickLabelRotation(60);
       ui->gplot->xAxis->setSubTicks(false);
       ui->gplot->xAxis->setTickLength(0, 4);
       ui->gplot->xAxis->setRange(0, 13);
       ui->gplot->xAxis->setBasePen(QPen(Qt::white));
       ui->gplot->xAxis->setTickPen(QPen(Qt::white));
       ui->gplot->xAxis->grid()->setVisible(true);
       ui->gplot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
       ui->gplot->xAxis->setTickLabelColor(Qt::white);
       ui->gplot->xAxis->setLabelColor(Qt::white);

       // prepare y axis:
       ui->gplot->yAxis->setRange(0, 10);
       ui->gplot->yAxis->setPadding(5); // a bit more space to the left border
       ui->gplot->yAxis->setLabel(" etat de materiel ");
       ui->gplot->yAxis->setBasePen(QPen(Qt::white));
       ui->gplot->yAxis->setTickPen(QPen(Qt::white));
       ui->gplot->yAxis->setSubTickPen(QPen(Qt::white));
       ui->gplot->yAxis->grid()->setSubGridVisible(true);
       ui->gplot->yAxis->setTickLabelColor(Qt::white);
       ui->gplot->yAxis->setLabelColor(Qt::white);
       ui->gplot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
       ui->gplot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

       // Add data:
       QVector<double> fossilData;

       fossilData  << dag << dir ;
       fossil->setData(ticks, fossilData);

       ui->gplot->legend->setVisible(true);
       ui->gplot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
       ui->gplot->legend->setBrush(QColor(255, 255, 255, 100));
       ui->gplot->legend->setBorderPen(Qt::NoPen);
       QFont legendFont = font();
       legendFont.setPointSize(10);
       ui->gplot->legend->setFont(legendFont);
       ui->gplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

   }


void MainWindow::on_btnOuvrir_clicked()
{
    if (arduino)
    {
        arduino->ouvrirBoite();  // Appeler la fonction ouvrirBoite() de la classe Arduino
         QMessageBox::information(this, "Boîte Ouverte", "La boîte est maintenant ouverte.");
         QMessageBox::information(this, "Boîte Fermée", "La boîte est maintenant fermet.");
    }
}

void MainWindow::on_btnFermer_clicked()
{
    if (arduino)
    {
        arduino->fermerBoite();  // Appeler la fonction fermerBoite() de la classe Arduino
        QMessageBox::information(this, "Boîte Fermée", "La boîte est maintenant fermée.");

    }
}

void MainWindow::onLumiereChanged(int valeurLumiere)
{
    lblLumiere->setText("Valeur de lumière : " + QString::number(valeurLumiere));

}

