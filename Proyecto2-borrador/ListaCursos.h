#pragma once
#include "NodoCurso.h"

class ListaCurso {
	private:
		NodoCurso* ppio;
		NodoCurso* actual;
	public:
		ListaCurso();
		virtual ~ListaCurso();
		bool agregarCurso(Curso&);
		bool existeCurso(string);
		string mostrarCursos();
		//string mostrarCursosPeriodo(Periodo*);
		Curso* obtenerCurso(string);
		//...
};
