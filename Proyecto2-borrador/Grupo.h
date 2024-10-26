#pragma once
#include "Curso.h"
#include "Horario.h"
#include "Profesor.h"

//todo profesor puede estar a cargo de n grupos
class Grupo {
	private:
		int numGrupo;
		int capacidadAlumnos;
		int cantAlumnos;
		Curso* curso;
		Horario* hor;
		Profesor* profe;
	public:
		Grupo();
		Grupo(int, int, int, Curso*, Horario*, Profesor*);
		virtual ~Grupo();
		string toString();

		int getNumGrupo();
		int getCapacidadAlumnos();
		int getCantAlumnos();
		Curso* getCurso();
		Horario* getHorario();
		Profesor* getProfesor();

		void setNumGrupo(int);
		void setCapacidadAlumnos(int);
		void setCantAlumnos(int);
		void setCurso(Curso*);
		void setHorario(Horario*);
		void setProfesor(Profesor*);

};