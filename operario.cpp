#include "operario.h"
#include "ui_operario.h"

Operario::Operario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Operario)
{
    ui->setupUi(this);
}

Operario::~Operario()
{
    delete ui;
}
