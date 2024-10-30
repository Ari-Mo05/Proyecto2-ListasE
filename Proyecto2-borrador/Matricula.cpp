#include "Matricula.h"

Matricula::Matricula(){
    grupo = nullptr;
    est = nullptr;
}

Matricula::Matricula(Grupo* grup, Estudiante* es): grupo(grup), est(es){
}

Matricula::~Matricula(){
    if (grupo != nullptr)
        delete grupo;
    if (est != nullptr)
        delete est;
}

Grupo* Matricula::getGrupo(){
    return grupo;
}

Estudiante* Matricula::getEstudiante(){
    return est;
}

void Matricula::setGrupo(Grupo* grup){
    grupo = grup;
}

void Matricula::setEstudiante(Estudiante* es){
    est = es;
}

string Matricula::toString(){
    stringstream s;
    s << "Grupo en el que matriculo: " << endl;
    s << grupo->toString();
    return s.str();
}

