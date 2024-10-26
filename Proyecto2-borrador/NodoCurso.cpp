#include "NodoCurso.h"


NodoCurso::NodoCurso(Curso& cu, NodoCurso* si) {
    cur = (Curso*)&cu;
    sig = si;
}

NodoCurso::~NodoCurso()
{
}

Curso* NodoCurso::getCurso()
{
    return cur;
}

NodoCurso* NodoCurso::getSiguiente(){
    return sig;
}

void NodoCurso::setCurso(Curso* cu){
    cur = cu;
}

void NodoCurso::setSiguiente(NodoCurso* si){
    sig = si;
}

string NodoCurso::mostrarCurso(){
    stringstream c;
    c << cur->toString() << endl;
    return c.str();
}

