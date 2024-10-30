#include "NodoEst.h"

NodoEst::NodoEst(Estudiante& estu, NodoEst* si){
    est = (Estudiante*)&estu;
    sig = si;
}

NodoEst::~NodoEst()
{
}

Estudiante* NodoEst::getEstudiante()
{
    return est;
}

NodoEst* NodoEst::getSiguiente()
{
    return sig;
}

void NodoEst::setEstudiante(Estudiante* estu)
{
    est = estu;
}

void NodoEst::setSiguiente(NodoEst* sig)
{
    this->sig = sig;
}

string NodoEst::mostrarEstudiante()
{
    stringstream e;
    e << est->toString() << endl;
    return e.str();
}
