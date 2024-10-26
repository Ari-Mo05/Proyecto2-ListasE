#include"Interfaz.h"

int Interfaz::menuPrincipal() {
	int op;
	system("cls");
	cout << "--------MENU PRINCIPAL----------" << endl;
	cout << "1- Submenu Administracion: " << endl;
	cout << "2- Submenu Matricula: " << endl;
	cout << "3- Submenu Busqueda e Informes: " << endl;
	cout << "4- Guardar los Datos en Archivos: " << endl;
	cout << "5- Salir" << endl;
	cout << endl;
	cout << "Ingrese la opcion: " << endl;
	cin >> op;
	cout << endl;
	return op;
}

int Interfaz::subMenuAdministracion() {
	int op;
	system("cls");
	cout << "---------SUBMENU-ADMINISTRACION-------" << endl;
	cout << "1- Ingresar Profesor" << endl;
	cout << "2- Ingresar Estudiante" << endl;
	cout << "3- Ingresar Bloque o Periodo" << endl;
	cout << "4- Ingresar Curso" << endl;
	cout << "5- Ingresar Grupo" << endl;
	cout << "6- Asignar Profesor o Grupo" << endl;
	cout << "7- Regresar el Menu Principal" << endl;
	cin >> op;
	return op;
}

ListaProfesores* Interfaz::ingresaProfesor() {
	string nombre, id, email, gradoAcademico;
	int numTelefono;
	Profesor* prof = NULL;
	ListaProfesores* listaP = new ListaProfesores();
	cout << "Ingresa el nombre del profesor" << endl;
	cin >> nombre;
	cout << "Ingresa la cedula del profesor" << endl;
	cin >> id;
	cout << "Ingresa el correo electronico del profesor" << endl;
	cin >> email;
	cout << "Ingresa el numero de telefono del profesor" << endl;
	cin >> numTelefono;
	cout << "Ingrese el grado academico del profesor" << endl;
	cin >> gradoAcademico;
	prof = new Profesor(nombre, id, numTelefono, email, gradoAcademico);
	listaP->agregarProfesor(*prof);
	return listaP;
}

ListaEst* Interfaz::ingresaEstudiante() {
	string nombre, id, espe, email;
	int numeroTel, edad;
	Estudiante* estu = NULL;
	ListaEst* listaE = new ListaEst();
	cout << "Ingrese el nombre del estudiante" << endl;
	cin >> nombre;
	cout << "Iingrese la cedual del estudiante" << endl;
	cin >> id;
	cout << "Ingrese la especialidad del estudiante" << endl;
	cin >> espe;
	cout << "Ingrese el numero de telefono del estudiante" << endl;
	cin >> numeroTel;
	cout << "Ingrese el correo electronico del estudiante" << endl;
	cin >> email;
	cout << "Ingrese la edad del estudiante" << endl;
	cin >> edad;
	estu = new Estudiante(nombre, id, espe, numeroTel, email, edad);
	listaE->ingresaEstudiante(*estu);
	return listaE;
}
ListaPer* Interfaz::ingresaPeriodo(){}
ListaCurso* Interfaz::ingresaCurso(){}
ListaGrupo* Interfaz::ingresaGrupo(){}
bool Interfaz::asignarProfesor(Profesor&){}
