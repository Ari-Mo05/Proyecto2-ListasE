#pragma once
#include <iostream>
#include <sstream>
using namespace std;

//Hora de Inicio, Hora de Finalización, días de la semana
class Horario {
private:
	int horaInicio;
	int horaFinal;
	string diasSemana;
	//puede tener mas datos...
public:
	Horario(int = 0, int = 0, string = "");
	virtual ~Horario();
	void setHoraInicio(int);
	void setHoraFinal(int);
	void setDiasSemana(string);
	int getHoraInicio()const;
	int getHoraFinal()const;
	string getDiasSemana()const;
	//....
	string toString()const;
};
