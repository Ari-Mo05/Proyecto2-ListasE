#include "Matricula.h"

Matricula::Matricula()
{
    grupo = nullptr;
    est = nullptr;
}

Matricula::Matricula(Grupo* grup, Estudiante* es): grupo(grup), est(es)
{
}

Matricula::~Matricula()
{
    if (grupo != nullptr)
        delete grupo;
    if (est != nullptr)
        delete est;
}

Grupo* Matricula::getGrupo()
{
    return grupo;
}

Estudiante* Matricula::getEstudiante()
{
    return est;
}

void Matricula::setGrupo(Grupo* grup)
{
    grupo = grup;
}

void Matricula::setEstudiante(Estudiante* es)
{
    est = es;
}

string Matricula::toString()
{
    stringstream m;
    m << "------INFORMACION DE LA MATRICULA------" << endl;
    m << "---------------------------------------" << endl;
    //...
    m << "Grupo: " << grupo->toString() << endl;
    m << "Estudiante: " << est->toString() << endl;
    
    return m.str();
}
