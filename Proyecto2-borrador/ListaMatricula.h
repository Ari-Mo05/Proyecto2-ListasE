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
		bool agregarMatricula(Matricula&);
		double calcularSubtotal(string);
		int cantidadCursosPeriodo(int, string);
		int cantidadCursosAnual(string);
		double descuento(string);
		string factura(string);
};
