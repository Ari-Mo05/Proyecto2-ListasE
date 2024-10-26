#include "ListaCursos.h"

ListaCurso::ListaCurso() :ppio(nullptr), actual(nullptr)
{
}

ListaCurso::~ListaCurso()
{
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

string ListaCurso::mostrarCursos()
{
	stringstream c;
	actual = ppio;
	while (actual != nullptr)
		c << actual->mostrarCurso() << endl;
	return c.str();
}

Curso* ListaCurso::obtenerCurso(string idC)
{
	actual = ppio;
	while (actual != nullptr) {
		if (actual->getCurso()->getIdCurso() == idC) {
			return actual->getCurso();
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}
