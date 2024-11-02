#include "ListaPeriodos.h"

ListaPer::ListaPer():ppio(nullptr), actual(nullptr){
}

ListaPer::~ListaPer(){
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

bool ListaPer::agregarPeriodo(Periodo& peri) {
	if (periodoPermitido(peri) && !existePeriodo(peri)) {
		if (ppio == NULL) 
			ppio = new NodoPeri(peri, actual);
		else {
			actual = ppio;
			while (actual->getSig() != NULL)
				actual = actual->getSig();
			actual->setSig(new NodoPeri(peri, NULL));
		}
		return true;
	}
	return false;
}

bool ListaPer::vacia(){
	return ppio = nullptr;
}

string ListaPer::mostrarPeriodos(){
	stringstream p;
	actual = ppio;
	p << "----------------PERIODOS---------------" << endl;
	while (actual != nullptr) {
		p << actual->mostrarPeriodo() << endl;
		actual = actual->getSig();
	}
	return p.str();
}

bool ListaPer::periodoPermitido(Periodo& peri) {
	if ((peri.getMesInicio() == "Enero" && peri.getMesCierre() == "Marzo") || (peri.getMesInicio() == "Abril" && peri.getMesCierre() == "Junio") || peri.getMesInicio() == "Julio" && peri.getMesCierre() == "Septiembre" || peri.getMesInicio() == "Octubre" && peri.getMesCierre() == "Diciembre")
		return true;
	return false;
}

bool ListaPer::existePeriodo(Periodo& per) {
	actual = ppio;
	while (actual != NULL) {
		if (actual->getPeriodo()->getMesInicio() == per.getMesInicio() && actual->getPeriodo()->getMesCierre() == per.getMesCierre())
			return true;
		actual = actual->getSig();
	}
	return false;
}

////no se si se pueda hacer asi, en eso estoy jajaja 
//Periodo* ListaPer::obtenerPeriodo(int codP){
//	if (vacia()) return nullptr;
//	switch (codP) {
//	case 1: break;  // periodo enero/marzo
//	case 2: break;	// periodo abril/junio
//	case 3: break;	// periodo julio/septiembre 
//	case 4: break;	// periodo octubre/diciembre  
//	}
//}
