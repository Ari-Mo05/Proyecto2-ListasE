#pragma once
#include "NodoEst.h"

class ListaEst {
	private:
		NodoEst* ppio;
		NodoEst* actual;
	public:
		ListaEst();
		virtual ~ListaEst();
		bool ingresaEstudiante(Estudiante&);
		string mostrarEstudiantes();
		Estudiante* obtenerEstudiante(string);
		bool siExisteEstudiante(string);
		//...
};
