#pragma once
#include"NodoProfes.h"

class ListaProfesores {
	private:
		NodoProfes* ppio;
		NodoProfes* pExt;
	public:
		ListaProfesores();
		virtual ~ListaProfesores();
		bool agregarProfesor(Profesor&, ListaE*);
		string mostrarProfesores();
		Profesor* obtenerProfesor(string);
		bool existeProfesor(string);
		string toString();
};
