#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_Boton_Login_clicked();

    void on_Boton_Cancel_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
