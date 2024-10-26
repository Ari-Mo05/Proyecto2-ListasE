#include "ListaPeriodos.h"

ListaPer::ListaPer():ppio(nullptr), actual(nullptr){
}

ListaPer::~ListaPer(){
	actual = ppio;
	while (actual != nullptr)
		delete actual;
}

bool ListaPer::agregarPeriodo(Periodo& peri) {
	if (peri.getMesInicio() == "Enero" || peri.getMesInicio() == "Abril" || peri.getMesInicio() == "Julio" || peri.getMesInicio() == "Octubre")
		if (peri.getMesCierre() == "Marzo" || peri.getMesCierre() == "Junio" || peri.getMesCierre() == "Septiembre" || peri.getMesCierre() == "Diciembre")
			if (ppio == NULL) {
				ppio = new NodoPeri(peri, ppio);
				return true;
			}
			else {
				actual = ppio;
				while (actual->getSig() != NULL) {
					actual = actual->getSig();
				}
				actual->setSig(new NodoPeri(peri, NULL));
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
	while (actual != nullptr)
		p << actual->mostrarPeriodo() << endl;
	return p.str();
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
