#include "ListaCursos.h"

ListaCurso::ListaCurso() :ppio(nullptr), actual(nullptr){
}

ListaCurso::~ListaCurso(){
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

bool ListaCurso::agregarCurso(Curso& cur) {
	if (!existeCurso(cur.getIdCurso())) {
		if (ppio == NULL)
			ppio = new NodoCurso(cur, ppio);
		else {
			if (ppio->getSiguiente() == NULL)
				actual = ppio;
			while (actual->getSiguiente() != NULL)
				actual = actual->getSiguiente();
			actual->setSiguiente(new NodoCurso(cur, NULL));
		}
		return true;
	}
	return false;
}

bool ListaCurso::existeCurso(string idC) {
	actual = ppio;
	while (actual != NULL) {
		if (actual->getCurso()->getIdCurso() == idC)
			return true;
		actual = actual->getSiguiente();
	}
	return false;
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

//string ListaCurso::mostrarCursosPeriodo(Periodo* peri) {
//	stringstream s;
//	actual = ppio;
//	while (actual != NULL && actual->getCurso()->getPeriodo() == peri) {
//		s << actual->mostrarCurso() << endl;
//		actual = actual->getSiguiente();
//	}
//	return s.str();
//}

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

