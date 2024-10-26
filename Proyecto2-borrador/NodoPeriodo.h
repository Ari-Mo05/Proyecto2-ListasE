#pragma once
#include "Periodo.h"

class NodoPeri {
	private:
		Periodo* peri;
		NodoPeri* sig;
	public:
		NodoPeri(Periodo&, NodoPeri*);
		virtual ~NodoPeri();
		NodoPeri* getSig();
		Periodo* getPeriodo();
		void setSig(NodoPeri*);
		void setPeriodo(Periodo*);
		string mostrarPeriodo();
};
