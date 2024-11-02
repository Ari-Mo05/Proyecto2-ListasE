#include "Periodo.h"

Periodo::Periodo(string inicio, string cierre){
    mesDeInicio = inicio;
    mesDeCierre = cierre;
}
Periodo::~Periodo(){
}

string Periodo::toString(){
    stringstream s;
    if (mesDeInicio == "Enero") {
        s << "Periodo 1:" << endl;
        s << "Mes de Inicio del ciclo: " << mesDeInicio << endl;
        s << "Mes de Cierre del ciclo: " << mesDeCierre << endl;
    }
    if (mesDeInicio == "Abril") {
        s << "Periodo 2: " << endl;
        s << "Mes de Inicio del ciclo: " << mesDeInicio << endl;
        s << "Mes de Cierre del ciclo: " << mesDeCierre << endl;
    }
    if (mesDeInicio == "Julio") {
        s << "Periodo 3: " << endl;
        s << "Mes de Inicio del ciclo: " << mesDeInicio << endl;
        s << "Mes de Cierre del ciclo: " << mesDeCierre << endl;
    }
    if (mesDeInicio == "Octubre") {
        s << "Periodo 4: " << endl;
        s << "Mes de Inicio del ciclo: " << mesDeInicio << endl;
        s << "Mes de Cierre del ciclo: " << mesDeCierre << endl;
    }
    return s.str();
}

string Periodo::getMesInicio()const {
    return mesDeInicio;
}

string Periodo::getMesCierre()const {
    return mesDeCierre;
}
