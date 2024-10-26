#include "ListaEstudiantes.h"

ListaEst::ListaEst() :ppio(nullptr), actual(nullptr)
{

}

ListaEst::~ListaEst()
{
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

string ListaEst::mostrarEstudiantes()
{
	stringstream e;
	actual = ppio;
	while (actual != nullptr)
		e << actual->mostrarEstudiante() << endl;
	return e.str();
}

Estudiante* ListaEst::obtenerEstudiante(string id)
{
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getEstudiante()->getId() == id) {
			return actual->getEstudiante();
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}
