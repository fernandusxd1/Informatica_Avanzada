#include "mainwindow.h"
//HOLA
#include <QApplication>
#include <QQueue>

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
