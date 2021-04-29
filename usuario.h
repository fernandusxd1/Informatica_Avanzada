#ifndef USUARIO_H
#define USUARIO_H
#include <QString>
#include <map>

using namespace std;

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
    Ingeniero();
    ~Ingeniero();
    bool acceder(QString,QString);
};

//Clase Administrador
class Admin{
    private:
    QString usuario="Admin";
    QString password="adm1234";
    map<QString,QString> c_op;
    public:
    Admin();
    ~Admin();
    bool acceder(QString,QString);
    void insert_contop(QString,QString);
    QString mostrar_contop();
};

#endif // USUARIO_H
