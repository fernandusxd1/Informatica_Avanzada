#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"

Ingeniero ing;
Admin adm;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
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
