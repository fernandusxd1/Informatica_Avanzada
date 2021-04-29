#ifndef USUARIO_H
#define USUARIO_H
#include <QString>
#include <cstdlib>
#include <iostream>
#include <QQueue>

//Clase Operario
class Operario{
    private:
    public:
    Operario();
    ~Operario();

};

//Clase Ingeniero
class Ingeniero{
    private:
    QString usuario="Ingeniero";
    QString password="ing1234";
    public:
    QQueue<int> dataIng;
    dataIng.enqueue(100);
    dataIng.enqueue(35);
    dataIng.enqueue(12);
    dataIng.enqueue(200);
    Ingeniero();
    ~Ingeniero();
    bool acceder(QString,QString);
    float media();
};

//Clase Administrador
class Admin{
    private:
    QString usuario="Admin";
    QString password="adm1234";
    public:
    Admin();
    ~Admin();
    bool acceder(QString,QString);
};

#endif // USUARIO_H
