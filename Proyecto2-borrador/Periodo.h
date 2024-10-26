#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Periodo {
	private:
		string mesDeInicio;
		string mesDeCierre;
	public:
		Periodo(string = " ", string  = " ");
		virtual ~Periodo();
		string toString();
		//....
};
