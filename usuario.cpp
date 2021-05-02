#include "usuario.h"
#include <math.h>

extern QVector<float> dataIng;

//Métodos de la clase Operario
Operario::Operario(){ //Constructor

}

Operario::~Operario(){ //Destructor

}

//Métodos de la clase Operario Jefe
OperarioJefe::OperarioJefe(){ //Constructor
    clave="1234";
}

OperarioJefe::~OperarioJefe(){ //Destructor

}

bool OperarioJefe::acceder(QString _clave){
    if (clave==_clave){
        return 1;
    }
    else{
        return 0;
    }
}

//Métodos de la clase Ingeniero
Ingeniero::Ingeniero(){ //Constructor
    usuario="Ingeniero";
    password="ing1234";
}

Ingeniero::~Ingeniero(){ //Destructor

}

float Ingeniero::media(){
    int i;
    int suma=0,tamano=0;
    float med;
    for (i=0;i<dataIng.length();i++){
        suma=suma+dataIng[i];
        tamano=tamano+1;
    }
    med=suma/tamano;
    return med;
}
float Ingeniero::varianza(){
    int i;
    int j;
    float var;
    int suma=0,tamano=0;
    float med;
    for (i=0;i<dataIng.length();i++){
        suma=suma+dataIng[i];
        tamano=tamano+1;
    }
    med=suma/tamano;

    float sumat=0;
    for (j=0;j<dataIng.length();j++){
        sumat=sumat+pow(dataIng[j]-med,2);
    }
    var=sumat/tamano;
    return var;
}

QString Ingeniero::show_data(){
    QString mostrar="";
    QVector<float>::iterator i;
    for(i=dataIng.begin();i!=dataIng.end();i++){
        QString numero=QString::number(*i);
        mostrar=mostrar + numero + "\n";
    }
    return mostrar;
}


bool Ingeniero::acceder(QString user,QString pass){
    if (user == usuario && pass == password){
        return true;
    }
    else{
        return false;
    }
}

//Métodos de la clase Administrador
Admin::Admin(){ //Constructor
    usuario="Admin";
    password="adm1234";
}

Admin::~Admin(){ //Destructor

}

bool Admin::acceder(QString user,QString pass){
    if (user == usuario && pass == password){
        return true;
    }
    else{
        return false;
    }
}

void Admin::insert_contop(QString nombre,QString fecha){ //Insertar
    QString entrada= nombre +"\t"+fecha;
    c_op.push_back(entrada);
}


QString Admin::mostrar_contop(){ //Mostrar
    QString datos="";
    list<QString>::iterator i;
    for(i=c_op.begin();i!=c_op.end();i++){
        datos=datos + *i + "\n";
    }
    return datos;
}

void Admin::change_pass(QString _password,bool select,Ingeniero& s){
    if (select){
        password=_password;
    }
    else{
        s.password=_password;
    }
}









