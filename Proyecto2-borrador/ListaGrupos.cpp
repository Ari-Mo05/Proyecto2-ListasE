#include "ListaGrupos.h"

ListaGrupo::ListaGrupo() :ppio(nullptr), actual(nullptr){
}

ListaGrupo::~ListaGrupo(){
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

string ListaGrupo::mostrarGrupos(){
	stringstream g;
	actual = ppio;
	while (actual != nullptr)
		g << actual ->mostrarGrupo() << endl;
	return g.str();
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
