#include "Estudiante.h"

Estudiante::Estudiante(string nombre, string id, string especialidad, int numeroTel, string email, int edad)
{
    this->nombre = nombre;
    this->id = id;
    this->especialidad = especialidad;
    this->numeroTel = numeroTel;
    this->email = email;
    this->edad = edad;
}

Estudiante::~Estudiante()
{
}

void Estudiante::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Estudiante::setId(string id)
{
    this->id = id;
}

void Estudiante::setEspecialidad(string especialidad)
{
    this->especialidad = especialidad;
}

void Estudiante::setNumeroTel(int numeroTel)
{
    this->numeroTel = numeroTel;
}

void Estudiante::setEmail(string email)
{
    this->email = email;
}

void Estudiante::setEdad(int edad)
{
    this->edad = edad;
}

string Estudiante::getNombre() const
{
    return nombre;
}

string Estudiante::getId() const
{
    return id;
}

string Estudiante::getEspecialidad() const
{
    return especialidad;
}

int Estudiante::getNumeroTel() const
{
    return numeroTel;
}

string Estudiante::getEmail() const
{
    return email;
}

int Estudiante::getEdad() const
{
    return edad;
}

string Estudiante::toString() const
{
    stringstream e;
    e << "--------INFORMACION DEL ESTUDIANTE--------" << endl;
    e << "Nombre: " << nombre << endl;
    e << "Cedula: " << id << endl;
    e << "Especialidad: " << especialidad << endl;
    e << "Numero Telefonico: " << numeroTel << endl;
    e << "Correo: " << email << endl;
    e << "Edad: " << edad << endl;
    return e.str();
}
