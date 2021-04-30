#include "usuario.h"

extern QQueue<float> dataIng;
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

float Ingeniero::media(){
    int i;
    int suma=0,tamano=0;
    float med;
    for (i=0;i<=dataIng.head();i++){
        suma=suma+dataIng[i];
        tamano=tamano+1;
    }
    med=suma/tamano;
    return med;
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
