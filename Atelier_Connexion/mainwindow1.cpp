#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include <QMessageBox>
#include "charite.h"
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
#include <QSqlError>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QByteArray>


MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
     ui->tab_charite->setModel(C.afficher());
}

MainWindow1::~MainWindow1()
{
    emit windowClosed();
    delete ui;
}




void MainWindow1::on_pb_ajouter_clicked()
{
   int Codechar=ui->le_code->text().toInt();
   QString Typechar=ui->le_type->text();
   QString date=ui->le_date->text();
   int QTE=ui->le_qte->text().toInt();
QMessageBox msgBox;
charite C(Codechar,Typechar,date,QTE);
bool test=C.ajouter();

if (test)
{
    msgBox.setText("Ajout avec succès.");
    ui->tab_charite->setModel(C.afficher());
}
else
    msgBox.setText("Echec d'ajout.");
    msgBox.exec();
}


void MainWindow1::on_pb_supprimer_clicked()
{
   int Codechar=ui->le_code->text().toInt();

bool test=C.supprimer(Codechar);

if (test)
{
    ui->tab_charite->setModel(C.afficher());

    QMessageBox::information(nullptr, QObject::tr("ok"),
                             QObject::tr("suppression effectuerl.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("not ok"),
                             QObject::tr("suppression non effectuerl.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow1::on_PDF_pb_clicked()
{
    QString strStream;
           QTextStream out(&strStream);

           const int rowCount = ui->table12->model()->rowCount();
           const int columnCount = ui->table12->model()->columnCount();

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
               if (!ui->table12->isColumnHidden(column))
                   out << QString("<th>%1</th>").arg(ui->table12->model()->headerData(column, Qt::Horizontal).toString());
           out << "</tr></thead>\n";

           // data table
           for (int row = 0; row < rowCount; row++) {
               out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
               for (int column = 0; column < columnCount; column++) {
                   if (!ui->table12->isColumnHidden(column)) {
                       QString data = ui->table12->model()->data(ui->table12->model()->index(row, column)).toString().simplified();
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



void MainWindow1::on_pb_modifier_clicked()
{
    {
        int Codechar=ui->le_code->text().toInt();
        QString Typechar=ui->le_type->text();
        QString date=ui->le_date->text();
        int QTE=ui->le_qte->text().toInt();

        charite C(Codechar,Typechar,date,QTE);

        bool test=C.modifier(Codechar);

                   if(test) {
                       ui->tab_charite->setModel(C.afficher());
                       QMessageBox::information(nullptr, QObject::tr("database is open"),
                                   QObject::tr("Modification effectuée.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);}
    }
}
QSqlQueryModel* charite::afficher_codechar(int& codechar) {
    QSqlQueryModel* model = new QSqlQueryModel;

    QSqlQuery query;
    query.prepare("SELECT * FROM charite WHERE codechar = :codechar"); // Fix placeholder
    query.bindValue(":codechar", codechar);

    if (query.exec()) {
        model->setQuery(query);
    } else {
        // Handle the error, e.g., print an error message to qDebug()
        qDebug() << "Error executing query:" << query.lastError().text();
    }

    return model;
}
QSqlQueryModel* charite::afficher_date( QString &date) {
    QSqlQueryModel* model = new QSqlQueryModel;

    QSqlQuery query;
    query.prepare("SELECT * FROM charite WHERE DATE = :date"); // Utiliser le bon champ dans la requête
    query.bindValue(":date", date);

    if (query.exec()) {
        model->setQuery(query);
    } else {
        // Gérer l'erreur, par exemple, afficher un message d'erreur dans qDebug()
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
    }

    return model;
}

void MainWindow1::on_pb_rech_code_clicked()
{
    int codechar = ui->coderech->text().toInt();

    charite C;
    bool test = C.rechercher_codechar(codechar);

    QMessageBox msgBox;
    if (test)
    {
        msgBox.setText("Recycleur trouvé.");
        // Affichez les données dans votre tableau ou où vous le souhaitez
        ui->tab_rech->setModel(C.afficher_codechar(codechar));
    }
    else
    {
        msgBox.setText("Recycleur introuvable!");
    }
    msgBox.exec();
}

void MainWindow1::on_pb_rech_date_clicked()
{
    QString date = ui->daterech->text();

    charite C;
    bool test = C.rechercher_date(date);

    QMessageBox msgBox;
    if (test)
    {
        msgBox.setText("Recycleur trouvé.");
        // Affichez les données dans votre tableau ou où vous le souhaitez
        ui->tab_rech->setModel(C.afficher_date(date));
    }
    else
    {
        msgBox.setText("Recycleur introuvable!");
    }
    msgBox.exec();
}

void MainWindow1::on_pushButton_2_clicked()
{

    QString critere=ui->lokza->currentText();
    if (critere=="typechar")
        ui->table12->setModel(C.trier_typechar());
    else
    {
         (critere=="date");
        ui->table12->setModel(C.trier_date());

}
    }



void MainWindow1::on_pb_stat_clicked()
{
    double dag=0;
       double dir=0;


       QSqlQuery q;
           q.prepare("SELECT * FROM charite WHERE typechar like 'argent' ");
           q.exec();
             while (q.next())
           {
           dag++;
           }

             q.prepare("SELECT * FROM charite WHERE typechar like  'produit' ");
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
       fossil->setName("typechar");
       fossil->setPen(QPen(QColor(111, 9, 176).lighter(170)));
       fossil->setBrush(QColor(111, 9, 176));


       // prepare x axis with country labels:
       QVector<double> ticks;
       QVector<QString> labels;
       ticks << 1 << 2 ;
       labels << "argent" << "produit" ;
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
       ui->gplot->yAxis->setLabel("type des dons ");
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

void MainWindow1::on_pushButtonLogout_clicked()
{
        emit loggedOut();
    hide();

}
