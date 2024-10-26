#include"NodoProfes.h"

NodoProfes::NodoProfes(Profesor& prof, NodoProfes* siguiente) {
	profe = (Profesor*)&prof;
	sig = siguiente;
}
NodoProfes::~NodoProfes(){}

Profesor* NodoProfes::getProfe() {
	return profe;
}
NodoProfes* NodoProfes::getSiguiente() {
	return sig;
}
void NodoProfes::setProfe(Profesor* prof) {
	profe = prof;
}
void NodoProfes::setSiguiente(NodoProfes* nod){
	sig = nod;
}
string NodoProfes::mostarProfesor() {
	stringstream s;
	s << profe->toString() << endl;
	return s.str();
}
