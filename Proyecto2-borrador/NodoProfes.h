#pragma once
#include"Profesor.h"

class NodoProfes {
	private:
		Profesor* profe;
		NodoProfes* sig;
	public:
		NodoProfes(Profesor*, NodoProfes*);
		virtual ~NodoProfes();
		Profesor* getProfe();
		NodoProfes* getSiguiente();
		void setProfe(Profesor*);
		void setSiguiente(NodoProfes*);
		string mostarProfesor();
};