#include "Periodo.h"

Periodo::Periodo(string inicio, string cierre){
    mesDeInicio = inicio;
    cierre = cierre;
}
Periodo::~Periodo(){
}

string Periodo::toString(){
    stringstream p;
    p << "------INFORMACION DE LOS PERIODOS------" << endl;
    //...
    return p.str();
}

string Periodo::getMesInicio()const {
    return mesDeInicio;
}

string Periodo::getMesCierre()const {
    return mesDeCierre;
}
