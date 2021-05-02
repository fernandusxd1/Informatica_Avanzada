#include "ventana1.h"
#include "ui_ventana1.h"
#include "ope.h"

Ventana1::Ventana1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventana1)
{
    ui->setupUi(this);

    QString fallo1="Todo correcto", fallo2="Todo correcto", fallo3="Todo correcto", fallo4="Todo correcto";
    int num_f;

    srand(time(NULL));
    num_f = rand()%6;
    if(num_f==1){fallo1 = "Algo falló";}
    if(num_f<=3){fallo2 = "Algo falló";}
    if(num_f==3){fallo3 = "Algo falló";}
    if(num_f>=4){fallo4 = "Algo falló";}

    ui->lineEdit->setText(fallo1);
    ui->lineEdit_2->setText(fallo2);
    ui->lineEdit_3->setText(fallo3);
    ui->lineEdit_4->setText(fallo4);

}

Ventana1::~Ventana1()
{
    delete ui;
}

void Ventana1::on_pushButton_clicked()
{
    ui->lineEdit->setText("Todo correcto");
}

void Ventana1::on_pushButton_2_clicked()
{
    ui->lineEdit_2->setText("Todo correcto");
}

void Ventana1::on_pushButton_3_clicked()
{
    ui->lineEdit_3->setText("Todo correcto");
}

void Ventana1::on_pushButton_4_clicked()
{
    ui->lineEdit_4->setText("Todo correcto");
}
