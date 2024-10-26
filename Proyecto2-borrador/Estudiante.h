#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Estudiante {
	private:
		string nombre;
		string id;
		string especialidad;
		int numeroTel;
		string email;
		int edad;
		//puede requerir mas ...
	public:
		Estudiante(string = "", string = "", string = "", int = 0, string = "", int = 0);
		virtual ~Estudiante();
		void setNombre(string);
		void setId(string);
		void setEspecialidad(string);
		void setNumeroTel(int);
		void setEmail(string);
		void setEdad(int);
		string getNombre() const;
		string getId()const;
		string getEspecialidad()const;
		int getNumeroTel()const;
		string getEmail()const;
		int getEdad()const;
		string toString()const;
};
