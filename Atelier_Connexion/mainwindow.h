#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "recycleurs.h"
#include <QMainWindow>
#include"arduino.h"
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QProgressBar>
#include <QLineEdit>
#include <QStatusBar>
#include <QMainWindow>
#include "arduino.h"
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();


    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pb_chercher_clicked();

    void on_pb_trierNom_clicked();

    void on_pb_log_in_clicked();



    void on_PDF_pb_clicked();

    void on_stat_clicked();



    void on_btnOuvrir_clicked();
       void on_btnFermer_clicked();
       void onLumiereChanged(int valeurLumiere);
private:
    Ui::MainWindow *ui;
    Recycleurs R,R1;
    QByteArray data;
    QPushButton *btnOuvrir;
       QPushButton *btnFermer;
       QLabel *lblLumiere;
    Arduino *arduino;
QLabel *labelEtatBoite;
};

#endif // MAINWINDOW_H
