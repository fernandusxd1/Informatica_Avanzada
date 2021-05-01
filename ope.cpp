#include "ope.h"
#include "ui_ope.h"
#include "ventana1.h"
#include "ventana2.h"


Ope::Ope(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ope)
{
    ui->setupUi(this);
    //Aqui en el constructo, puedo poner los ajustes que quiera justo antes de que se abra
  //  ui->pushButton->adjustSize();
    //inicializa los display a valores estandar de presion y temperatura.
    ui->lcdNumber->display(3);
    ui->lcdNumber_2->display(21);
}

Ope::~Ope()
{
    delete ui;
}



void Ope::on_spinBox_valueChanged(int arg1)
{
    //CONTROL DE PRESION (bar)
        //Crear numeros aleatorios para representar medición
        int num,c,retardo,sum;
        srand(time(NULL));

        for(c=1;c<=10;c++)
        {
            num=arg1-2+rand()%(arg1+2-1);
        ui->lcdNumber->display(num); //Asigna el valor al lcd 1

        }
     //ui->lcdNumber->display(arg1); //Asigna el valor al lcd 1
}
//CONTROL DE TEMPERATURA  (ºC)
void Ope::on_spinBox_2_valueChanged(int arg1)
{
    ui->lcdNumber_2->display(arg1);
}

//BOTON QUE ABRE LA VENTANA DE CHEQUEO DE ERRORES
void Ope::on_pushButton_clicked()
{
Ventana1 obj;
obj.exec();

}

void Ope::on_pushButton_2_clicked()
{
Ventana2 obj;
obj.exec();
}
