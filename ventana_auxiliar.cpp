#include "ventana_auxiliar.h"
#include "ui_ventana_auxiliar.h"

Ventana_auxiliar::Ventana_auxiliar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventana_auxiliar)
{
    ui->setupUi(this);
}

Ventana_auxiliar::~Ventana_auxiliar()
{
    delete ui;
}
