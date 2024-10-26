#include"ListaProfesores.h"

ListaProfesores::ListaProfesores() {
	ppio = NULL;
	pExt = NULL;
}
ListaProfesores::~ListaProfesores() {
	delete ppio;
	delete pExt;
}
bool ListaProfesores::agregarProfesor(Profesor& prof) {
	return true;
}
string ListaProfesores::mostrarProfesores() {
	stringstream s;
	pExt = ppio;
	while (pExt != NULL) {
		s << pExt->getProfe()->toString() << endl;
		pExt = pExt->getSiguiente();
	}
	return s.str();
}
Profesor* ListaProfesores::obtenerProfesor(string ced) {
	pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getProfe()->getId() == ced)
			return pExt->getProfe();
		pExt = pExt->getSiguiente();
	}
	return NULL;
}

bool ListaProfesores::existeProfesor(string ced) {
	pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getProfe()->getId() == ced)
			return true;
		pExt = pExt->getSiguiente();
	}
	return false;
}

string ListaProfesores::toString() {
	stringstream s;
	pExt = ppio;
	while (pExt != NULL) {
		s << pExt->getProfe()->toString() << endl;
		pExt = pExt->getSiguiente();
	}
	return s.str();
}
