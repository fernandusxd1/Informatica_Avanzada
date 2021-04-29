#include "mainwindow.h"

#include <QApplication>
#include <QQueue>

int main(int argc, char *argv[])
{
    QQueue<int> dataIng;
    dataIng.enqueue(100);
    dataIng.enqueue(35);
    dataIng.enqueue(12);
    dataIng.enqueue(200);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
