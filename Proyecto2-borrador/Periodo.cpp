#include "Periodo.h"

Periodo::Periodo()
{
}

Periodo::Periodo(Periodo* pe) :per(pe){
}


Periodo::~Periodo()
{
}

string Periodo::toString()
{
    stringstream p;
    p << "------INFORMACION DE LOS PERIODOS------" << endl;
    //...
    return p.str();
}