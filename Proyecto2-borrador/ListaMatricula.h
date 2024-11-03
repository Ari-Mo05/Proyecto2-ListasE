#pragma once
#include"NodoMat.h"

class ListaMatri {
	private:
		NodoMat* ppio;
		NodoMat* actual;
	public:
		ListaMatri();
		virtual ~ListaMatri();
		bool agregarMatricula(Matricula&);
		bool existePersonaGrupo(string, Grupo*);
		double calcularSubtotal(string);
		int cantidadCursosPeriodo(int, string);
		int cantidadCursosAnual(string);
		double descuento(string);
		string factura(string);
		string toString();
		bool desmatricula(string, Grupo*);
		string matriculasEspecificas(string);
};

