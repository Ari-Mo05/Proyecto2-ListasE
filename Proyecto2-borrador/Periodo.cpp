#include "Periodo.h"

Periodo::Periodo(string inicio, string cierre){
    mesDeInicio = inicio;
    mesDeCierre = cierre;
}
Periodo::~Periodo(){
}

string Periodo::toString(){
    stringstream s;
    s << "------INFORMACION-DE-LOS-PERIODOS------" << endl;
    s << "Mes de Inicio del ciclo: " << mesDeInicio << endl;
    s << "Mes de Cierre del ciclo: " << mesDeCierre << endl;
    return s.str();
}

string Periodo::getMesInicio()const {
    return mesDeInicio;
}

string Periodo::getMesCierre()const {
    return mesDeCierre;
}
