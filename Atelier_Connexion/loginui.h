#ifndef LOGINUI_H
#define LOGINUI_H

#include <QMainWindow>

namespace Ui {
class Loginui;
}

class Loginui : public QMainWindow
{
    Q_OBJECT

public:
    explicit Loginui(QWidget *parent = nullptr);
    ~Loginui();
    int getUserRole();
    void handleLogout();
signals:
    // Signal emitted when the user logs in successfully
    void loginSuccessful(int role);
    void windowClosed();

private slots:
    void on_pushButton_clicked();


private:
    Ui::Loginui *ui;
    int userRole;
};

#endif // LOGINUI_H
