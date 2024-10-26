#pragma once
#include"Matricula.h"

class NodoMat {
	private:
		Matricula* matri;
		NodoMat* sig;
	public:
		NodoMat(Matricula*, NodoMat*);
		virtual ~NodoMat();
		Matricula* getMatricula();
		NodoMat* getSiguiente();
		void setMatricula(Matricula*);
		void setSiguiente(NodoMat*);
		string mostrarMatricula();
};