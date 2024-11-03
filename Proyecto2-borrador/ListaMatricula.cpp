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

bool ListaMatri::agregarMatricula(Matricula& matri) {
	if (!existePersonaGrupo(matri.getEstudiante()->getId(), matri.getGrupo()) && matri.getGrupo()->getCurso()->getEstado() == "Disponible" && matri.getGrupo()->getCantAlumnos() < matri.getGrupo()->getCapacidadAlumnos()) {
		if (ppio == NULL)
			ppio = new NodoMat(matri, ppio);
		else {
			if (ppio->getSiguiente() == NULL)
				actual = ppio;
			while (actual->getSiguiente() != NULL)
				actual = actual->getSiguiente();
			actual->setSiguiente(new NodoMat(matri, NULL));
		}
		return true;
	}
	return false;
}

bool ListaMatri::existePersonaGrupo(string ced, Grupo* grup) {
	actual = ppio; 
	while (actual != NULL) {
		if (actual->getMatricula()->getGrupo() == grup && actual->getMatricula()->getEstudiante()->getId() == ced)
			return true;
		actual = actual->getSiguiente();
	}
	return false;
}

double ListaMatri::calcularSubtotal(string ced) {
	double subtotal = 0;
	actual = ppio;
	while (actual != NULL) {
		if (actual->getMatricula()->getEstudiante()->getId() == ced) 
			subtotal += actual->getMatricula()->getGrupo()->getCurso()->getPrecioCurso();
		actual = actual->getSiguiente();
	}
	return subtotal;
}

int ListaMatri::cantidadCursosPeriodo(int period, string ced) {
	int cursos = 0;
	string mesInicio;
	switch (period) {
		case 1: {
			mesInicio = "Enero";
		} break;
		case 2: {
			mesInicio = "Abril";
		} break;
		case 3: {
			mesInicio = "Julio";
		} break;
		case 4: {
			mesInicio = "Octubre";
		} break;
	}
	while (actual != NULL) {
		if (actual->getMatricula()->getEstudiante()->getId() == ced && actual->getMatricula()->getGrupo()->getCurso()->getPeriodo()->getMesInicio() == mesInicio)
			cursos++;
		actual = actual->getSiguiente();
	}
	return cursos;
}

double ListaMatri::descuento(string ced) {
	double desc = 0;
	if (cantidadCursosPeriodo(1, ced) >= 2 || cantidadCursosPeriodo(2, ced) >= 2 || cantidadCursosPeriodo(3, ced) >= 2 || cantidadCursosPeriodo(4, ced) >= 2) {
		desc = calcularSubtotal(ced) * 0.15;
		if (cantidadCursosAnual(ced) >= 4)
			desc += calcularSubtotal(ced) * 0.25;
	}
	else
		if (cantidadCursosAnual(ced) >= 4) 
			desc = calcularSubtotal(ced) * 0.25;
	return desc;
}

int ListaMatri::cantidadCursosAnual(string ced) {
	int cursos = 0;
	actual = ppio;
	while (actual != NULL) {
		if (actual->getMatricula()->getEstudiante()->getId() == ced) {
			cursos++;
		}
		actual = actual->getSiguiente();
	}
	return cursos;
}

string ListaMatri::factura(string ced) {
	stringstream s;
	actual = ppio;
	s << "El estudiante con cedula " << ced << " matriculo en los siguientes grupos: " << endl;
	while (actual != NULL) {
		if (actual->getMatricula()->getEstudiante()->getId() == ced)
			s << actual->getMatricula()->getGrupo()->getCurso();
		actual = actual->getSiguiente();
	}
	s << "-----------------------FACTURA---------------------" << endl;
	s<<"Por la cantidad de "<<cantidadCursosAnual(ced)<<" el subtotal es: " << calcularSubtotal(ced) << endl;
	s << "IVA: " << calcularSubtotal(ced) * 0.13 << endl;
	s << "Tipo de descuento aplicado : ";
	if (cantidadCursosPeriodo(1, ced) >= 2 || cantidadCursosPeriodo(2, ced) >= 2 || cantidadCursosPeriodo(3, ced) >= 2 || cantidadCursosPeriodo(4, ced) >= 2) {
		s << "Por 2 o mas cursos en un periodo ";
		if (cantidadCursosAnual(ced) >= 4)
			s << " y por 4 o mas cursos anuales" << endl;
	}
	else
		if (cantidadCursosAnual(ced) >= 4)
			s << "Por 4 o mas cursos anuales" << endl;
		else
			s << "No recibe descuento" << endl;
	s << "Descuento: " << descuento(ced) << endl;
	s << "Total: " << calcularSubtotal(ced) + calcularSubtotal(ced) * 0.13 - descuento(ced);
	return s.str();
}

string ListaMatri::toString() {
	stringstream s;
	actual = ppio;
	while (actual != NULL) {
		if(actual->getMatricula() != NULL)
			s << actual->getMatricula()->toString();
		actual = actual->getSiguiente();
	}
	return s.str();
}
