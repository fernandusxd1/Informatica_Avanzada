#include "ingenieria.h"
#include "ui_ingenieria.h"
#include <QString>
#include <QMessageBox>

extern QQueue<float> dataIng;

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
