include "Horario.h"

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

string Horario::toString() const
{
    stringstream h;
    h << "--------HORARIO--------" << endl;
    h << "Hora de inicio: " << horaInicio << endl;
    h << "Hora de finalizacion: " << horaFinal << endl;
    for(int i = 0; i < 7; i++)
        h << "Dias de la semana: " << vec[i] << endl;
    return h.str();
}

