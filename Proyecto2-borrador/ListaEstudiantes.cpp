#include "ListaEstudiantes.h"

ListaEst::ListaEst() :ppio(nullptr), actual(nullptr){

}

ListaEst::~ListaEst(){
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

bool ListaEst::ingresaEstudiante(Estudiante& estu){
	actual = ppio;
	if(!siExisteEstudiante(estu.getId())){
		if (ppio == NULL)
			ppio = new NodoEst(estu, ppio);
		else {
			if (ppio->getSiguiente() == NULL)
				actual = ppio;
			while (actual->getSiguiente() != NULL)
				actual = actual->getSiguiente();
			actual->setSiguiente(new NodoEst(estu, NULL));
		}
		return true;
	}
	return false;
}

string ListaEst::mostrarEstudiantes(){
	stringstream e;
	actual = ppio;
	while (actual != nullptr) {
		e << actual->mostrarEstudiante() << endl;
		actual = actual->getSiguiente();
	}
	return e.str();
}

Estudiante* ListaEst::obtenerEstudiante(string id){
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getEstudiante()->getId() == id) {
			return actual->getEstudiante();
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}

bool ListaEst::siExisteEstudiante(string id) {
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getEstudiante()->getId() == id) {
			return true;
		}
		actual = actual->getSiguiente();
	}
	return false;
}
