#pragma once
#include "NodoPeriodo.h"

class ListaPer {
	private:
		NodoPeri* ppio;
		NodoPeri* actual;
	public:
		ListaPer();
		virtual ~ListaPer();
		bool agregarPeriodo(Periodo&);
		bool vacia();
		string mostrarPeriodos();
		/*Periodo* obtenerPeriodo(int);*/
		//...
};
