#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Profesor {
	private:
		string nombre;
		string id;
		int numTelefono;
		string email;
		string gradoAcademico;
	public:
		Profesor(string = "", string = "", int = 0, string = "", string = "");
		virtual ~Profesor();
		void setNombre(string);
		void setId(string);
		void setNumTelefono(int);
		void setEmail(string);
		void setGradoAcademico(string);
		string getNombre() const;
		string getId()const;
		int getNumTelefono()const;
		string getEmail()const;
		string getGradoAcademico()const;
		string toString()const;
};
