#include "NodoPeriodo.h"

NodoPeri::NodoPeri(Periodo& per, NodoPeri* si){
    peri = (Periodo*)&per;
    sig = si;
}

NodoPeri::~NodoPeri()
{
}

NodoPeri* NodoPeri::getSig()
{
    return sig;
}

Periodo* NodoPeri::getPeriodo()
{
    return peri;
}

void NodoPeri::setSig(NodoPeri* si){
    sig = si;
}

void NodoPeri::setPeriodo(Periodo* per)
{
    peri = per;
}

string NodoPeri::mostrarPeriodo()
{
    stringstream p;
    p << peri->toString() << endl;
    return p.str();
}

