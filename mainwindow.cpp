#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "usuario.h"
#include <QQueue>

Ingeniero ing;
Admin adm;
QVector<float> dataIng;
int aux_op_ing=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    dataIng.push_back(90);
    dataIng.push_back(81);
    dataIng.push_back(76);
    dataIng.push_back(98);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Boton_op_clicked() //Botón para entrar como operario
{
    aux_op_ing=0;
    Login obj;
    obj.exec();
}

void MainWindow::on_Boton_ing_adm_clicked() //Botón para entrar como ingeniero o administrador
{
    aux_op_ing=1;
    Login obj;
    obj.exec();
}

void MainWindow::on_commandLinkButton_clicked() //Exit
{
    close();
}
