#pragma once
#include"NodoMat.h"

class ListaMatri {
	private:
		NodoMat* ppio;
		NodoMat* actual;
	public:
		ListaMatri();
		virtual ~ListaMatri();
		string mostrarMatricula();
		string factura(string);
};
