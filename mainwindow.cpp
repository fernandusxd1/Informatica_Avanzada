#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "usuario.h"
#include <QQueue>

Ingeniero ing;
Admin adm;
QQueue<float> dataIng;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    dataIng.enqueue(100);
    dataIng.enqueue(35);
    dataIng.enqueue(12);
    dataIng.enqueue(200);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Boton_op_clicked() //Botón para entrar como operario
{

}

void MainWindow::on_Boton_ing_adm_clicked() //Botón para entrar como ingeniero o administrador
{
    Login obj;
    obj.exec();
}

void MainWindow::on_commandLinkButton_clicked() //Exit
{
    close();
}
