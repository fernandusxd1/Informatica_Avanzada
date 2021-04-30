#ifndef USUARIO_H
#define USUARIO_H
#include <QString>
#include <list>

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
    protected:
    QString usuario;
    QString password;
    public:
    Ingeniero();
    ~Ingeniero();
    bool acceder(QString,QString);
    friend class Admin;
};

//Clase Administrador
class Admin{
    private:
    QString usuario;
    QString password;
    list<QString> c_op;
    public:
    Admin();
    ~Admin();
    bool acceder(QString,QString);
    void insert_contop(QString,QString);
    QString mostrar_contop();
    void change_pass(QString,bool,Ingeniero&);
};

#endif // USUARIO_H
