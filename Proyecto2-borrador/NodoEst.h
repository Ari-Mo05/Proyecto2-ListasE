#pragma once
#include "Estudiante.h"

class NodoEst {
	private:
		Estudiante* est;
		NodoEst* sig;
	public:
		NodoEst(Estudiante*, NodoEst*);
		virtual ~NodoEst();
		Estudiante* getEstudiante();
		NodoEst* getSiguiente();
		void setEstudiante(Estudiante*);
		void setSiguiente(NodoEst*);
		string mostrarEstudiante();
};
