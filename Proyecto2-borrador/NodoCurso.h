#pragma once
#include "Curso.h"

class NodoCurso {
	private:
		Curso* cur;
		NodoCurso* sig;
	public:
		NodoCurso(Curso&, NodoCurso*);
		virtual ~NodoCurso();
		string toString();
		Curso* getCurso();
		NodoCurso* getSiguiente();
		void setCurso(Curso*);
		void setSiguiente(NodoCurso*);
		string mostrarCurso();
		//...
};
