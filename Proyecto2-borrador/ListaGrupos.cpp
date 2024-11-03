#include "ListaGrupos.h"

ListaGrupo::ListaGrupo() :ppio(nullptr), actual(nullptr){
}

ListaGrupo::~ListaGrupo(){
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

bool ListaGrupo::ingresarGrupos(Grupo& grup) {
	if (!existeGrupo(grup.getNumGrupo()) && grup.getCurso()->getEstado() == "Disponible") {
		if (ppio == NULL)
			ppio = new NodoGrupo(grup, ppio);
		else {
			if (ppio->getSiguiente() == NULL)
				actual = ppio;
			while (actual->getSiguiente() != NULL)
				actual = actual->getSiguiente();
			actual->setSiguiente(new NodoGrupo(grup, NULL));
		}
		return true;
	}
	return false;
}

string ListaGrupo::mostrarGrupos(){
	stringstream s;
	actual = ppio;
	while (actual != nullptr) {
		s << actual->mostrarGrupo() << endl;
		actual = actual->getSiguiente();
	}
	return s.str();
}

Grupo* ListaGrupo::obtenerGrupo(int numG){
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getGrupo()->getNumGrupo() == numG) 
			return actual->getGrupo();
		actual = actual->getSiguiente();
	}
	return nullptr;
}


bool ListaGrupo::existeGrupo(string nomC) {
	actual = ppio;
	while (actual != NULL) {
		if (actual->getGrupo()->getCurso()->getNombreCurso() == nomC)
			return true;
		actual = actual->getSiguiente();
	}
	return false;
}

bool ListaGrupo::existeGrupo(int cod) {
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getGrupo()->getNumGrupo() == cod) 
			return true;
		actual = actual->getSiguiente();
	}
	return false;
}

string ListaGrupo::mostrarGruposEspecifico(string nom) {
	stringstream s;
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getGrupo() != NULL) {
			if (actual->getGrupo()->getCurso()->getNombreCurso() == nom)
				s << actual->getGrupo()->toString() << endl;
			actual = actual->getSiguiente();
		}
	}
	return s.str();
}

string ListaGrupo::mostrarGrupoEspecifico(int numG) {
	stringstream s;
	s << obtenerGrupo(numG)->toString();
	return s.str();
}

