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

//Clase Ingeniero, que hereda de Operario
class Ingeniero : public Operario{
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
