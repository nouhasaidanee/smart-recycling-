#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>
#include "charite.h"

namespace Ui {
class MainWindow1;
}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();


signals :
    void loggedOut();
    void windowClosed();


private slots:


    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();
   //void on_pb_recherche_clicked();
     void on_pushButton_2_clicked();

     void on_PDF_pb_clicked();


     void on_pb_modifier_clicked();

     void on_pb_rech_code_clicked();

     void on_pb_rech_date_clicked();

     void on_pb_stat_clicked();

     void on_pushButtonLogout_clicked();

private:
    Ui::MainWindow1 *ui;
    charite C;
    int critere;

};

#endif // MAINWINDOW1_H
