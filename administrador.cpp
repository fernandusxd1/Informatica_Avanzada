#include "administrador.h"
#include "ui_administrador.h"
#include "usuario.h"

extern Admin adm;

Administrador::Administrador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Administrador)
{
    ui->setupUi(this);
}

Administrador::~Administrador()
{
    delete ui;
}

void Administrador::on_pushButton_clicked()
{
    ui->fechas->setText(adm.mostrar_contop());
}
