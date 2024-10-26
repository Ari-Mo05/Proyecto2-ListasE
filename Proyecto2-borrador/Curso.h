#pragma once
#include "Periodo.h"

class Curso {
	private:
		string nombreCurso;
		string idCurso;
		double precioCurso;
		string estado;  // (disponible, noDisponble)
		Periodo* peri;
		//...

	public:
		Curso();
		Curso(string, string, double, string, Periodo*);
		virtual ~Curso();
		string toString();

		string getNombreCurso();
		string getIdCurso();
		double getPrecioCurso();
		string getEstado();
		Periodo* getPeriodo();

		void setNombreCurso(string);
		void setIdCurso(string);
		void setPrecioCurso(double);
		void setEstado(string);
		void setPeriodo(Periodo*);

};
