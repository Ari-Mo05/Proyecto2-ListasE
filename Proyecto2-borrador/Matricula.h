#pragma once
#include "Grupo.h"
#include "Estudiante.h"

class Matricula {
	private:
		//....
		Grupo* grupo;
		Estudiante* est;
	public:
		Matricula();
		Matricula(Grupo*, Estudiante*); //...
		virtual ~Matricula();
		Grupo* getGrupo();
		Estudiante* getEstudiante();
		void setGrupo(Grupo*);
		void setEstudiante(Estudiante*);
		string toString();
};
