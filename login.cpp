#include "login.h"
#include "ui_login.h"
#include <QString>
#include <QMessageBox>
#include "usuario.h"
#include "ingenieria.h"
#include <QQueue>
#include "administrador.h"
#include "ope.h"

using namespace std;

extern Ingeniero ing;
extern Admin adm;
extern QVector<float> dataIng;
extern int aux_op_ing;

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    if(aux_op_ing==0){
        ui->LE_Password->setEnabled(false);
    }
    else{
        ui->LE_Password->setEnabled(true);
    }
}

Login::~Login()
{
    delete ui;
}

void Login::on_Boton_Login_clicked()
{
    if(aux_op_ing==1){ //Para ingeniero y administrador
        QString user = ui->LE_User->text();
        QString pass = ui->LE_Password->text();
        if (ing.acceder(user,pass)){ // Ventana de ingeniero
            ingenieria obj1;
            obj1.exec();
            close();
        }
        else if (adm.acceder(user,pass)){ // Ventana de administrador
            Administrador A;
            A.exec();
            close();
        }
        else{
            QMessageBox::information(this, "Aviso", "Usuario o contraseña incorrectos.");
        }
    }
    else{ // Ventana de operario
        if (ui->LE_User->text()!=""){
            time_t tiempo = time(0);
            struct tm *tlocal = localtime(&tiempo);
            char str_time[128];
            strftime(str_time,128,"%d/%m/%y %H:%M:%S",tlocal);

            QString fecha = QString::fromStdString(str_time);
            QString nombre = ui->LE_User->text();

            adm.insert_contop(nombre,fecha);
            Ope op;
            op.exec();
            close();
        }
        else{
            QMessageBox::information(this, "Aviso", "Inserte un nombre.");
        }

    }
}

void Login::on_Boton_Cancel_clicked() //Cerrar ventana de acceso(login)
{
    close();
}
