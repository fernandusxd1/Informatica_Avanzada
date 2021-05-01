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
    float cont=ing.media();
    ui->lineEdit_2->setText(QString::number(cont));
}

void ingenieria::on_pushButton_3_clicked()
{
    float cont=ing.varianza();
    ui->lineEdit_3->setText(QString::number(cont));
}
