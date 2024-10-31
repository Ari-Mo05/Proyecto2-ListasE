#include "Curso.h"

Curso::Curso()
{
    peri = nullptr;
}

Curso::Curso(string nombCur, string idCur, double precCur, string est, Periodo* per)
    : nombreCurso(nombCur), idCurso(idCur), precioCurso(precCur), estado(est), peri(per)
{
}

Curso::~Curso()
{
    if (peri != nullptr)
        delete peri;
}

string Curso::toString()
{
    stringstream c;
    c << "-----------INFORMACION DEL CURSO---------" << endl;
    c << "-----------------------------------------" << endl;
    c << "Nombre del Curso: " << nombreCurso << endl;
    c << "Id del Curso: " << idCurso << endl;
    c << "Precio del Curso: " << precioCurso << endl;
    c << "Estado (disponible, no disponible): " << estado << endl;
    c << "Periodo: " << endl;
    c << peri->toString() << endl;

    return c.str();
}

string Curso::getNombreCurso()
{
    return nombreCurso;
}

string Curso::getIdCurso()
{
    return idCurso;
}

double Curso::getPrecioCurso()
{
    return precioCurso;
}

string Curso::getEstado()
{
    return estado;
}

Periodo* Curso::getPeriodo()
{
    return peri;
}

void Curso::setNombreCurso(string nombCur)
{
    nombreCurso = nombCur;
}

void Curso::setIdCurso(string idCur)
{
    idCurso = idCur;
}

void Curso::setPrecioCurso(double precCur)
{
    precioCurso = precCur;
}

void Curso::setEstado(string est)
{
    estado = est;
}

void Curso::setPeriodo(Periodo* per)
{
    peri = per;
}
