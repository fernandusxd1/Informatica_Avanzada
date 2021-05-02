#ifndef USUARIO_H
#define USUARIO_H
#include <QString>
#include <QQueue>
#include <list>

using namespace std;

//Clase Operario
class Operario{
    private:
    public:
    Operario();
    ~Operario();

};

// Clase Operario Jefe, que hereda de Operario
class OperarioJefe : public Operario{
    private:
    QString clave;
    public:
    OperarioJefe();
    ~OperarioJefe();
    bool acceder(QString);
};

//Clase Ingeniero, que hereda de Operario jefe
class Ingeniero : public OperarioJefe{
    private:
    QString usuario;
    QString password;
    public:
    Ingeniero();
    ~Ingeniero();
    bool acceder(QString,QString);
    float media(QVector<float>);
    float varianza(QVector<float>);
    QString show_data(bool);
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
