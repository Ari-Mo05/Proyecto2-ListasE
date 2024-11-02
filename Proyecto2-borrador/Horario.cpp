#include "Horario.h"

Horario::Horario(int horaInicio, int horaFinal, int can, int tam)
{
    this->horaInicio = horaInicio;
    this->horaFinal = horaFinal;
    this->can = can;
    this->tam = tam;
}

Horario::~Horario()
{
}

void Horario::agregarDias(string dia) {
    if (can < tam)
        vec[can++] = dia;
}

void Horario::setHoraInicio(int horaInicio)
{
    this->horaInicio = horaInicio;
}

void Horario::setHoraFinal(int horaFinal)
{
    this->horaFinal = horaFinal;
}

int Horario::getHoraInicio() const
{
    return horaInicio;
}

int Horario::getHoraFinal() const
{
    return horaFinal;
}

string Horario::toString() const{
    stringstream h;
    h << "--------HORARIO--------" << endl;
    h << "Hora de inicio: " << horaInicio << endl;
    h << "Hora de finalizacion: " << horaFinal << endl;
    h << "Dias de la semana: " << endl;
    for(int i = 0; i < can; i++)
      h << vec[i] << endl;
    return h.str();
}
