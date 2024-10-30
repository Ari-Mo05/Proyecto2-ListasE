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
		static ListaProfesores* ingresaProfesor(ListaEst*);
		static ListaEst* ingresaEstudiante();
		static ListaPer* ingresaPeriodo();
		static ListaCurso* ingresaCurso();
		static ListaGrupo* ingresaGrupo(ListaCurso*, ListaProfesores*);
		static bool asignarProfesor(ListaProfesores*, ListaGrupo*);
		static int subMenuMatricula();
		static bool matricularEstudiante(ListaEst*, ListaGrupo*);
		static bool desmatricularEstudiante(ListaEst*);
		static int subMenuBusquedaseInformes();
		static string profesoresRegistrados(ListaProfesores*);
		static string estudiantesRegistrados();
		static string cursosMatriculadosPorEstudiante();
		static string profesorEspecifico();
		static string periodosHabilitadosParaElAnnio();
		static string informeGrupoEspecifico();
		
		static int guardarDatosArchivos();
};
