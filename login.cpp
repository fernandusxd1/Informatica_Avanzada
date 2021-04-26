#include "login.h"
#include "ui_login.h"
#include <QString>
#include <QMessageBox>
#include "usuario.h"

using namespace std;

extern Ingeniero ing;
extern Admin adm;

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

QString user;
QString pass;

void Login::on_Boton_Login_clicked()
{

    user = ui->LE_User->text();
    pass = ui->LE_Password->text();
    if (ing.acceder(user,pass)){
        //AQUI SE ABRE LA VENTANA DE INGENIERO!!!!!
        QMessageBox::information(this, "Aviso", "Correcto");
    }
    else if (adm.acceder(user,pass)){
        //AQUI SE ABRE LA VENTANA DE ADMINISTRADOR!!!!
        QMessageBox::information(this, "Aviso", "Correcto");
    }
    else{
        QMessageBox::information(this, "Aviso", "Usuario o contraseña incorrectos.");
    }
}

void Login::on_Boton_Cancel_clicked() //Cerrar ventana de acceso(login)
{
    close();
}
