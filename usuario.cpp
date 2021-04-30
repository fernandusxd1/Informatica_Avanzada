#include "usuario.h"

//Métodos de la clase Operario
Operario::Operario(){ //Constructor

}

Operario::~Operario(){ //Destructor

}

//Métodos de la clase Ingeniero
Ingeniero::Ingeniero(){ //Constructor

}

Ingeniero::~Ingeniero(){ //Destructor

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

void Admin::insert_contop(QString nombre, QString fecha){ //Insertar
    c_op.erase(nombre);
    c_op.insert(make_pair(nombre,fecha));
}


QString Admin::mostrar_contop(){ //Mostrar
    QString datos="";
    map<QString,QString>::iterator i;
    for(i=c_op.begin();i!=c_op.end();i++){
        datos=datos + i->first + "    " + i->second + "\n";
    }
    return datos;
}









