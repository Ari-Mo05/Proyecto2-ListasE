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

string ListaMatri::factura(string ced) {
	stringstream s;
	double subtotal = 0, total = 0;
	int p1 = 0, p2 = 0, p3 = 0, p4 = 0, curso = 0;
	actual = ppio;
	s << "El estudiante con cedula " << ced << " matriculo en los siguientes grupos: " << endl;
	while (actual != NULL) {
		if (actual->getMatricula()->getEstudiante()->getId() == ced) {
			s << actual->mostrarMatricula();
			subtotal += actual->getMatricula()->getGrupo()->getCurso()->getPrecioCurso();
			if (actual->getMatricula()->getGrupo()->getCurso()->getPeriodo()->getMesInicio() == "Enero")
				p1++;
			if (actual->getMatricula()->getGrupo()->getCurso()->getPeriodo()->getMesInicio() == "Abril")
				p2++;
			if (actual->getMatricula()->getGrupo()->getCurso()->getPeriodo()->getMesInicio() == "Julio")
				p3++;
			if (actual->getMatricula()->getGrupo()->getCurso()->getPeriodo()->getMesInicio() == "Octubre")
				p4++;
			curso++;
		}
		actual = actual->getSiguiente();
	}
	s << "------------FACTURA-------------" << endl;
	s << "Subtotal: " << subtotal << endl;
	s << "IVA: " << subtotal * 0.13 << endl;
	if (curso >= 4) {
		s << "Descuento a aplicar: 4 o mas de cuatro cursos por annio" << endl;
		total = subtotal - subtotal * 0.25;
		if (p1 >= 2 || p2 >= 2 || p3 >= 2 || p4 >= 2) {
			s << "Descuento a aplicar: 2 o mas de dos cursos por periodo" << endl;
			total = total - total * 0.15;
		}
	}
	else
		if (p1 >= 2 || p2 >= 2 || p3 >= 2 || p4 >= 2)
			total = subtotal - subtotal * 0.15;
		else
			total = subtotal;
	s << "Monto a pagar: " << total + subtotal * 0.13;
}
