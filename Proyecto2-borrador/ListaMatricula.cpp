#include "ListaMatricula.h"

ListaMatri::ListaMatri() :ppio(nullptr), actual(nullptr){
}

ListaMatri::~ListaMatri(){
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

string ListaMatri::mostrarMatricula(){
	stringstream m;
	actual = ppio;
	while (actual != nullptr)
		m << actual->mostrarMatricula() << endl;
	return m.str();
}
