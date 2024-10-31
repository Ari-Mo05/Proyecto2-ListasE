#include "Grupo.h"

Grupo::Grupo(){
    numGrupo = 0;
    capacidadAlumnos = 0;
    cantAlumnos = 0;
    curso = nullptr;
    hor = nullptr;
    profe = nullptr;
}

Grupo::Grupo(int numG, int capA, int cantA, Curso* cur, Horario* ho, Profesor* prof) 
: numGrupo(numG), capacidadAlumnos(capA), cantAlumnos(cantA), curso(cur), hor(ho), profe(prof)
{
}

Grupo::~Grupo()
{
    if (curso != nullptr)
        delete curso;
    if (hor != nullptr)
        delete hor;
    if (profe != nullptr)
        delete profe;
}

string Grupo::toString(){
    stringstream g;
    g << "------INFORMACION DEL GRUPO------" << endl;
    g << "---------------------------------" << endl;
    g << "Numero de Grupo: " << numGrupo << endl;
    g << "Capacidad de Alumnos: " << capacidadAlumnos << endl;
    g << "Cantidad de Alumnos: " << cantAlumnos << endl;
    g << "Curso: " << endl;
    g << curso->toString() << endl;
    g << "Horario: " << endl;
    g << hor->toString() << endl;
    g << "Profesor: " << endl;
    g << profe->toString() << endl;
    return g.str();
}

int Grupo::getNumGrupo()
{
    return numGrupo;
}

int Grupo::getCapacidadAlumnos()
{
    return capacidadAlumnos;
}

int Grupo::getCantAlumnos()
{
    return cantAlumnos;
}

Curso* Grupo::getCurso()
{
    return curso;
}

Horario* Grupo::getHorario()
{
    return hor;
}

Profesor* Grupo::getProfesor()
{
    return profe;
}

void Grupo::setNumGrupo(int numG)
{
    numGrupo = numG;
}

void Grupo::setCapacidadAlumnos(int capA)
{
    capacidadAlumnos = capA;
}

void Grupo::setCantAlumnos(int cantA)
{
    cantAlumnos = cantA;
}

void Grupo::setCurso(Curso* cur)
{
    curso = cur;
}

void Grupo::setHorario(Horario* ho)
{
    hor = ho;
}

void Grupo::setProfesor(Profesor* prof)
{
    profe = prof;
}
