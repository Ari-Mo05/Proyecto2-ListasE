#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Periodo {
	private:
		Periodo* per;
	public:
		Periodo();
		Periodo(Periodo*);
		virtual ~Periodo();
		string toString();
		//....
};