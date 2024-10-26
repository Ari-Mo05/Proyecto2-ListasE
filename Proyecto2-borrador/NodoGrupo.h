#pragma once
#include "Grupo.h"

class NodoGrupo {
	private:
		Grupo* grup;
		NodoGrupo* sig;
	public:
		NodoGrupo(Grupo*, NodoGrupo*);
		virtual ~NodoGrupo();
		Grupo* getGrupo();
		NodoGrupo* getSiguiente();
		void setGrupo(Grupo*);
		void setSiguiente(NodoGrupo*);
		string mostrarGrupo();
};
