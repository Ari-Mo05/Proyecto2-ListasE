#include "ListaGrupos.h"

ListaGrupo::ListaGrupo() :ppio(nullptr), actual(nullptr){
}

ListaGrupo::~ListaGrupo(){
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

bool ListaGrupo::ingresarGrupos(Grupo* grup) {
	return true;
}

string ListaGrupo::mostrarGrupos(){
	stringstream s;
	actual = ppio;
	while (actual != nullptr)
		s << actual ->mostrarGrupo() << endl;
	return s.str();
}

Grupo* ListaGrupo::obtenerGrupo(int numG){
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getGrupo()->getNumGrupo() == numG) {
			return actual->getGrupo();
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}

bool ListaGrupo::existeGrupo(int cod) {
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getGrupo()->getNumGrupo() == cod) {
			return true;
		}
		actual = actual->getSiguiente();
	}
	return false;
}

string ListaGrupo::mostrarGruposEspecifico(string cur) {
	stringstream s;
	actual = ppio;
	while (actual != nullptr && actual->getGrupo()->getCurso()->getNombreCurso() == cur)
		s << actual->mostrarGrupo() << endl;
	return s.str();
}
