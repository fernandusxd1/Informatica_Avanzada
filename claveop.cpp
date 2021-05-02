#include "claveop.h"
#include "ui_claveop.h"
#include "usuario.h"
#include <QMessageBox>

OperarioJefe o;

claveOp::claveOp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::claveOp)
{
    ui->setupUi(this);
}

claveOp::~claveOp()
{
    delete ui;
}

void claveOp::on_pushButton_clicked()
{
    if (o.acceder(ui->lineEdit->text())){
        QMessageBox::information(this,"Correcto","La planta se ha parado");
        QCoreApplication::quit();
    }
    else{
        QMessageBox::information(this,"Error","La clave de parada es incorrecta");
    }

}

