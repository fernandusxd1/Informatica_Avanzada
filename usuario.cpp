#include "usuario.h"

//Métodos de la clase Operario
Operario::Operario(){ //Constructor

}

Operario::~Operario(){ //Destructor

}

//Métodos de la clase Ingeniero
Ingeniero::Ingeniero(){ //Constructor
    usuario="Ingeniero";
    password="ing1234";
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









