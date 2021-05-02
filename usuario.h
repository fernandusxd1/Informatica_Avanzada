#ifndef USUARIO_H
#define USUARIO_H
#include <QString>

//Clase Operario
class Operario{
    private:
    public:
    Operario();
    ~Operario();

};

class OperarioJefe : public Operario{
    private:
    QString clave;
    public:
    OperarioJefe();
    ~OperarioJefe();
    bool acceder(QString);
};

//Clase Ingeniero
class Ingeniero : public OperarioJefe{
    private:
    QString usuario="Ingeniero";
    QString password="ing1234";
    public:
    Ingeniero();
    ~Ingeniero();
    bool acceder(QString,QString);
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
