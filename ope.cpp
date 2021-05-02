#include "ope.h"
#include "ui_ope.h"
#include "ventana1.h"
#include "ventana2.h"
#include "claveop.h"
#include <cstdlib>
#include <QProgressDialog>

int Global=3;
int Global1=21;
extern QVector<float> dataIng;
extern QVector<float> dataPre;

Ope::Ope(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ope)
{
    ui->setupUi(this);
    //Aqui en el constructo, puedo poner los ajustes que quiera justo antes de que se abra
    //ui->pushButton->adjustSize();
    //Inicializa los display a valores estandar de presion y temperatura.
    ui->lcdNumber->display(2.9703);
    ui->lcdNumber_2->display(20.9854);
    ui->pushButton_4->setStyleSheet("background-color: red;border-style: outset;border-width: 4px;");

}

Ope::~Ope()
{
    delete ui;
}



void Ope::on_spinBox_valueChanged(int arg1)
{

    //CONTROL DE PRESION (bar)
        //Crear numeros aleatorios para representar medición
        float num=0;
        Global=arg1;
        srand(time(NULL));
        num=-2000+(rand()%(2000+1));
        float resultado=num/10000+arg1;
        ui->lcdNumber->display(resultado); //Asigna el valor al lcd 1

}
//CONTROL DE TEMPERATURA  (ºC)
void Ope::on_spinBox_2_valueChanged(int arg2)
{
    float num1=0;
    Global1=arg2;
    srand(time(NULL));
    num1=-2000+(rand()%(2000+1));
    float resultado1=num1/9988+Global1;
    ui->lcdNumber_2->display(resultado1);

}

//BOTON QUE ABRE LA VENTANA DE CHEQUEO DE ERRORES
void Ope::on_pushButton_clicked()
{
    Ventana1 obj;
    obj.exec();

}

void Ope::on_pushButton_2_clicked()
{
    //Ventana2 obj;
    //obj.exec();
    QProgressDialog progreso("Guardando datos...","Cancelar",0,1500,this); //Creación del objeto "barra de progreso"
    progreso.setWindowModality(Qt::WindowModal);
    progreso.setMinimumDuration(0);
    for(int i = 0; i<=1500;i++){
        progreso.setValue(i);
        progreso.update();
        if (progreso.wasCanceled()==true){ //Boton de cancelar
            i=1501;
        }
    }
    dataIng.push_back(ui->lcdNumber_2->value());
    dataPre.push_back(ui->lcdNumber->value());
}

void Ope::on_pushButton_3_clicked()
{
    //ACTUALIZAR PRESIÓN
        float num=0;
        srand(time(NULL));
        num=-2000+(rand()%(2000+1));
        float resultado=num/10000+Global;
        ui->lcdNumber->display(resultado);

    //ACTUALIZAR TEMPERATURA
        float num1=0;
        srand(time(NULL));
        num1=-2500+(rand()%(2500+1));
        num1=num1*1.032;
        float resultado1=num1/8547+Global1;
        ui->lcdNumber_2->display(resultado1);
}

void Ope::on_pushButton_4_clicked()
{
    claveOp l;
    l.exec();

}
