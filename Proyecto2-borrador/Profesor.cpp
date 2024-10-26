#include "Profesor.h"

Profesor::Profesor(string nombre, string id, int numTelefono, string email, string gradoAcademico)
{
    this->nombre = nombre;
    this->id = id;
    this->numTelefono = numTelefono;
    this->email = email;
    this->gradoAcademico = gradoAcademico;
}

Profesor::~Profesor()
{
}

void Profesor::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Profesor::setId(string id)
{
    this->id = id;
}

void Profesor::setNumTelefono(int numTelefono)
{
    this->numTelefono = numTelefono;
}

void Profesor::setEmail(string email)
{
    this->email = email;
}

void Profesor::setGradoAcademico(string gradoAcademico)
{
    this->gradoAcademico = gradoAcademico;
}

string Profesor::getNombre() const
{
    return nombre;
}

string Profesor::getId() const
{
    return id;
}

int Profesor::getNumTelefono() const
{
    return numTelefono;
}

string Profesor::getEmail() const
{
    return email;
}

string Profesor::getGradoAcademico() const
{
    return gradoAcademico;
}

string Profesor::toString() const
{
    stringstream p;
    p << "--------INFORMACION DEL PROFESOR--------" << endl;
    p << "Nombre: " << nombre << endl;
    p << "Cedula: " << id << endl;
    p << "Numero Telefonico: " << numTelefono << endl;
    p << "Correo: " << email << endl;
    p << "Grado Academico: " << gradoAcademico << endl;
    return p.str();
}
