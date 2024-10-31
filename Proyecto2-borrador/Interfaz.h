#pragma once
#include<iostream>
#include<sstream>
#include<fstream>
#include"Windows.h"
using namespace std;


#include"ListaEstudiantes.h"
#include"ListaPeriodos.h"
#include"ListaProfesores.h"
#include"ListaCursos.h"
#include"ListaGrupos.h"
#include"ListaMatricula.h"


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
		static ListaMatri* matricularEstudiante(ListaEst*, ListaGrupo*);
		static bool desmatricularEstudiante(ListaEst*);
		static int subMenuBusquedaseInformes();
		static void profesoresRegistrados(ListaProfesores*);
		static void estudiantesRegistrados(ListaEst*);
		static void cursosMatriculadosPorEstudiante();
		static void profesorEspecifico(ListaProfesores*);
		static void periodosHabilitadosParaElAnnio(ListaPer*);
		static void informeGrupoEspecifico();
		
		static int guardarDatosArchivos();
};
