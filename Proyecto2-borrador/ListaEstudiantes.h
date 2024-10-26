#pragma once
#include "NodoEst.h"

class ListaEst {
	private:
		NodoEst* ppio;
		NodoEst* actual;
	public:
		ListaEst();
		virtual ~ListaEst();
		string mostrarEstudiantes();
		Estudiante* obtenerEstudiante(string);
		//...
};
