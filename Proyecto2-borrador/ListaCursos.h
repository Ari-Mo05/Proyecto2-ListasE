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
		string mostrarCursos();
		Curso* obtenerCurso(string);
		//...
};
