#include "loginui.h"
#include "ui_loginui.h"
#include <QMessageBox>

Loginui::Loginui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Loginui)
{
    ui->setupUi(this);
    //connect(ui->pushButton, &QPushButton::clicked, this, &Loginui::on_pushButton_clicked);
}

Loginui::~Loginui()
{
    emit windowClosed();
    delete ui;
}
int Loginui::getUserRole()
{
    return userRole;
}

void Loginui::on_pushButton_clicked()
{
   userRole = 0 ;
    if (ui->lineEdit->text() == "admin" && ui->lineEdit_2->text() == "mdp1")
    {
        this->userRole = 1 ;
        emit loginSuccessful(userRole);
        hide();

    }
     else if (ui->lineEdit->text() == "admin" && ui->lineEdit_2->text() == "mdp2")
    {
        this->userRole = 2 ;
        emit loginSuccessful(userRole);
        hide();

    }
    else if (ui->lineEdit->text() == "admin" && ui->lineEdit_2->text() == "mdp3")
    {
        this->userRole = 3 ;
        emit loginSuccessful(userRole);
        hide();

    }
    else if (ui->lineEdit->text() == "admin" && ui->lineEdit_2->text() == "mdp4")
    {
        this->userRole = 4 ;
        emit loginSuccessful(userRole);
        hide();

    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("wrong data"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }





}
void Loginui::handleLogout()
{
    show();
}

