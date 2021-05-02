#include "c_pass.h"
#include "ui_c_pass.h"
#include "usuario.h"
#include <QMessageBox>

extern Ingeniero ing;
extern Admin adm;
bool select=1;

C_pass::C_pass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::C_pass)
{
    ui->setupUi(this);
}

C_pass::~C_pass()
{
    delete ui;
}

void C_pass::on_radioButton_toggled(bool checked)
{
    select=checked;
    ui->lineEdit->setText("");
}

void C_pass::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text()==""){
        QMessageBox::information(this,"Aviso","El campo de contraseña está vacío.");
    }
    else{
        adm.change_pass(ui->lineEdit->text(),select,ing);
        QMessageBox::information(this,"Información","La contraseña se ha cambiado correctamente.");
        close();
    }
}

