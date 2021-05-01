#include "usuario.h"
#include <math.h>

extern QVector<float> dataIng;
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
