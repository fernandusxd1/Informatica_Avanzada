#include "ingenieria.h"
#include "ui_ingenieria.h"
#include "usuario.h"
#include "mainwindow.h"
#include <QString>
#include <QMessageBox>

extern QVector<float> dataIng;
extern Ingeniero ing;

ingenieria::ingenieria(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ingenieria)
{
    ui->setupUi(this);
}

ingenieria::~ingenieria()
{
    delete ui;
}

void ingenieria::on_commandLinkButton_clicked()
{
    close();
}

void ingenieria::on_pushButton_2_clicked()
{
    if (dataIng.size()==0){
         QMessageBox::information(this,"Aviso","No se puede realizar esta operacion");
    }else{
        float cont=ing.media();
        ui->lineEdit_2->setText(QString::number(cont));
    }


}

void ingenieria::on_pushButton_3_clicked()
{
    if (dataIng.size()==0){
         QMessageBox::information(this,"Aviso","No se puede realizar esta operacion");
    }else{
    float cont=ing.varianza();
    ui->lineEdit_3->setText(QString::number(cont));
    }
}

void ingenieria::on_pushButton_clicked()
{
    if(ui->lineEdit->text()==""){
        QMessageBox::information(this,"Aviso","No ha insertado un valor");
    }else{
        QString numero=ui->lineEdit->text();
        float num=numero.toFloat();
        dataIng.push_back(num);
        ui->lineEdit->setText("");
    }
}

void ingenieria::on_pushButton_4_clicked()
{
    ui->datos->setText(ing.show_data());
}

void ingenieria::on_pushButton_5_clicked()
{
    dataIng.clear();
}