#pragma once
#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;


#include"ListaEstudiantes.h"
#include"ListaPeriodos.h"
#include"ListaProfesores.h"
#include"ListaCursos.h"
#include"ListaGrupos.h"


class Interfaz {
	public:
		static int menuPrincipal();
		static int subMenuAdministracion();
		static ListaProfesores* ingresaProfesor();
		static ListaEst* ingresaEstudiante();
		static ListaPer* ingresaPeriodo();
		static ListaCurso* ingresaCurso();
		static ListaGrupo* ingresaGrupo();
		static bool asignarProfesor(Profesor&);

		static int subMenuMatricula();
		static int subMenuBusquedaseInformes();
		static int guardarDatosArchivos();
};
