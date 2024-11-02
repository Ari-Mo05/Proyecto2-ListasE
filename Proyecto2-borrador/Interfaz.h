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
		static ListaProfesores* ingresaProfesor(ListaProfesores*, ListaEst*);
		static ListaEst* ingresaEstudiante(ListaEst*);
		static ListaPer* ingresaPeriodo(ListaPer*);
		static ListaCurso* ingresaCurso(ListaCurso*, ListaPer*);
		static ListaGrupo* ingresaGrupo(ListaCurso*, ListaProfesores*, ListaGrupo*);
		static bool asignarProfesor(ListaProfesores*, ListaGrupo*);
		static int subMenuMatricula();
		static ListaMatri* matricularEstudiante(ListaEst*, ListaGrupo*);
		static bool desmatricularEstudiante(ListaEst*);
		static int subMenuBusquedaseInformes();
		static void profesoresRegistrados(ListaProfesores*);
		static void estudiantesRegistrados(ListaEst*);
		static void cursosMatriculadosPorEstudiante(ListaCurso*);
		static void profesorEspecifico(ListaProfesores*);
		static void periodosHabilitadosParaElAnnio(ListaPer*);
		static void informeGrupoEspecifico();
		
		static int guardarDatosArchivos();
};
