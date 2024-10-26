#include "ListaCursos.h"

ListaCurso::ListaCurso() :ppio(nullptr), actual(nullptr){
}

ListaCurso::~ListaCurso(){
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

bool ListaCurso::agregarCurso(Curso& cur) {
	return true;
}

string ListaCurso::mostrarCursos(){
	stringstream s;
	actual = ppio;
	while (actual != NULL) {
		s << actual->mostrarCurso() << endl;
		actual = actual->getSiguiente();
	}
	return s.str();
}

Curso* ListaCurso::obtenerCurso(string idC){
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getCurso()->getIdCurso() == idC) {
			return actual->getCurso();
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}
