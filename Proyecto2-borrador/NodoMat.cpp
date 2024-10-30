#include "NodoMat.h"

NodoMat::NodoMat(Matricula& mat, NodoMat* si){
    matri = (Matricula*)&mat;
    sig = si;
}

NodoMat::~NodoMat(){
    delete sig;
    delete matri;
}

Matricula* NodoMat::getMatricula(){
    return matri;
}

NodoMat* NodoMat::getSiguiente()
{
    return sig;
}

void NodoMat::setMatricula(Matricula* mat)
{
    matri = mat;
}

void NodoMat::setSiguiente(NodoMat* si)
{
    sig = si;
}

string NodoMat::mostrarMatricula(){
    stringstream m;
    m << matri->toString() << endl;
    return m.str();
}
