#include "ventana1.h"
#include "ui_ventana1.h"
#include "ope.h"

Ventana1::Ventana1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventana1)
{
    ui->setupUi(this);
    //Posibilidad de generar unos numeros aleatorios para asignar estos errores
    ui->lineEdit->setText("Algo fallo");
    ui->lineEdit_2->setText("Todo correcto");
    ui->lineEdit_3->setText("Algo fallo");
    ui->lineEdit_4->setText("Todo correcto");

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
