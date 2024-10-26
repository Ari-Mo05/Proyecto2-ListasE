#include "Horario.h"

Horario::Horario(int horaInicio, int horaFinal, string diasSemana)
{
    this->horaInicio = horaInicio;
    this->horaFinal = horaFinal;
    this->diasSemana = diasSemana;
}

Horario::~Horario()
{
}

void Horario::setHoraInicio(int horaInicio)
{
    this->horaInicio = horaInicio;
}

void Horario::setHoraFinal(int horaFinal)
{
    this->horaFinal = horaFinal;
}

void Horario::setDiasSemana(string diasSemana)
{
    this->diasSemana = diasSemana;
}

int Horario::getHoraInicio() const
{
    return horaInicio;
}

int Horario::getHoraFinal() const
{
    return horaFinal;
}

string Horario::getDiasSemana() const
{
    return diasSemana;
}

string Horario::toString() const
{
    stringstream h;
    h << "--------HORARIO--------" << endl;
    h << "Hora de inicio: " << horaInicio << endl;
    h << "Hora de finalizacion: " << horaFinal << endl;
    h << "Dias de la semana: " << diasSemana << endl;
    return h.str();
}
