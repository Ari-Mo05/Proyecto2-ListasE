#include "NodoGrupo.h"

NodoGrupo::NodoGrupo(Grupo& gru, NodoGrupo* si)
{
    grup = (Grupo*)&gru;
    sig = si;
}

NodoGrupo::~NodoGrupo(){
    if (sig != NULL)
        delete sig;
}

Grupo* NodoGrupo::getGrupo()
{
    return grup;
}

NodoGrupo* NodoGrupo::getSiguiente()
{
    return sig;
}

void NodoGrupo::setGrupo(Grupo* gru)
{
    grup = gru;
}

void NodoGrupo::setSiguiente(NodoGrupo* si)
{
    sig = si;
}

string NodoGrupo::mostrarGrupo()
{
    stringstream g;
    g << grup->toString() << endl;
    return g.str();
}
