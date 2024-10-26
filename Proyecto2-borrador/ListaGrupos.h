#pragma once
#include "NodoGrupo.h"

class ListaGrupo {
	private:
		NodoGrupo* ppio;
		NodoGrupo* actual;
	public:
		ListaGrupo();
		virtual ~ListaGrupo();
		string mostrarGrupos();
		Grupo* obtenerGrupo(int);
		//...
	};
