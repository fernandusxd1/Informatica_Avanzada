#include "ventana2.h"
#include "ui_ventana2.h"
#include <QThread>


Ventana2::Ventana2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventana2)
{
    ui->setupUi(this);
    int auxiliar=300;
        for(int c=24;c<=100;c++){
            for(int i=0;i<=1000000;i++)
            {
            auxiliar=auxiliar*auxiliar*auxiliar*auxiliar*auxiliar*auxiliar;
            }
            ui->progressBar->setValue(c);
            //Poner retardo para observar crecimiento de la barramsleep(100);
        }
}

Ventana2::~Ventana2()
{
    delete ui;
}
