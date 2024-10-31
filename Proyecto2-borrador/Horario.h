#pragma once
#include <iostream>
#include <sstream>
using namespace std;

//Hora de Inicio, Hora de Finalización, días de la semana
class Horario {
private:
	int horaInicio;
	int horaFinal;
	string vec[7];
	int tam; 
	int can;
	//puede tener mas datos...
public:
	Horario(int = 0, int = 0, int = 0, int = 0);
	virtual ~Horario();
	void agregarDias(string);
	void setHoraInicio(int);
	void setHoraFinal(int);
	int getHoraInicio()const;
	int getHoraFinal()const;
	string toString()const;
};
