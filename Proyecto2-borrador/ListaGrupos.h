#pragma once
#include "NodoGrupo.h"

class ListaGrupo {
	private:
		NodoGrupo* ppio;
		NodoGrupo* actual;
	public:
		ListaGrupo();
		virtual ~ListaGrupo();
		bool ingresarGrupos(Grupo&);
		bool existeGrupo(int);
		string mostrarGrupos();
		string mostrarGruposEspecifico(string);
		Grupo* obtenerGrupo(int);
		bool getGrupoNombre(string);
		//...
	};


