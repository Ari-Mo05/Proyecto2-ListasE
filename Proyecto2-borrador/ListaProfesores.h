#pragma once
#include"NodoProfes.h"
#include"ListaEstudiantes.h"

class ListaProfesores {
	private:
		NodoProfes* ppio;
		NodoProfes* pExt;
	public:
		ListaProfesores();
		virtual ~ListaProfesores();
		bool agregarProfesor(Profesor&, ListaEst*);
		string mostrarProfesores();
		string mostrarProfesoresSinEspecifico(string);
		Profesor* obtenerProfesor(string);
		bool existeProfesor(string);
		string toString();
};
