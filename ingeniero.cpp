#include "ingeniero.h"
#include "ui_ingeniero.h"
#include <QString>
#include <QMessageBox>
#include <QMainWindow>

using namespace std;

ingeniero::ingeniero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ingeniero)
{
    ui->setupUi(this);
}

ingeniero::~ingeniero()
{
    delete ui;
}
