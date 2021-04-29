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

float Ingeniero::media(){

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
