#include "ingenieria.h"
#include "ui_ingenieria.h"
#include "usuario.h"
#include "mainwindow.h"
#include <QString>
#include <QMessageBox>

extern QVector<float> dataIng;
extern QVector<float> dataPre;
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
    if(ui->radioButton->isChecked()){
        if (dataIng.size()==0){
             QMessageBox::information(this,"Aviso","No se puede realizar esta operacion");
        }else{
        float cont=ing.media(dataIng);
        ui->lineEdit_2->setText(QString::number(cont));
        }
    }
    else{
        if (dataPre.size()==0){
             QMessageBox::information(this,"Aviso","No se puede realizar esta operacion");
        }else{
        float cont=ing.media(dataPre);
        ui->lineEdit_2->setText(QString::number(cont));
        }
    }
}

void ingenieria::on_pushButton_3_clicked()
{
    if(ui->radioButton->isChecked()){
        if (dataIng.size()==0){
             QMessageBox::information(this,"Aviso","No se puede realizar esta operacion");
        }else{
        float cont=ing.varianza(dataIng);
        ui->lineEdit_3->setText(QString::number(cont));
        }
    }
    else{
        if (dataPre.size()==0){
             QMessageBox::information(this,"Aviso","No se puede realizar esta operacion");
        }else{
        float cont=ing.varianza(dataPre);
        ui->lineEdit_3->setText(QString::number(cont));
        }
    }
}

void ingenieria::on_pushButton_clicked()
{
    if(ui->lineEdit->text()==""){
        QMessageBox::information(this,"Aviso","No ha insertado un valor");
    }else{
        QString numero=ui->lineEdit->text();
        if(numero.contains(",", Qt::CaseInsensitive) ){
            QMessageBox::information(this,"Aviso","Los valores deben ser insertados con puntos");
        }
        else{
            float num=numero.toFloat();

            if(ui->radioButton->isChecked()){
                dataIng.push_back(num);
                ui->lineEdit->setText("");
            }
            else{
                dataPre.push_back(num);
                ui->lineEdit->setText("");
            }

        }

    }
}

void ingenieria::on_pushButton_4_clicked()
{
    ui->datos->setText(ing.show_data(1));
    ui->datos_2->setText(ing.show_data(0));
}

void ingenieria::on_pushButton_5_clicked()
{
    dataIng.clear();
    dataPre.clear();
    ui->datos->setText(ing.show_data(1));
    ui->datos_2->setText(ing.show_data(0));
}

