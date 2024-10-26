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

// -------------------------MENU-ADMINISTRACION-----------------------
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
	cout << "Ingrese la cedula del estudiante" << endl;
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
ListaPer* Interfaz::ingresaPeriodo(){
	string mesInicio, mesCierre;
	Periodo* peri = NULL;
	ListaPer* listaP = new ListaPer();
	cout << "Ingrese el mes de inicio del periodo" << endl;
	cin >> mesInicio;
	cout << "Ingres el mes de cierre del periodo" << endl;
	cin >> mesCierre;
	peri = new Periodo(mesInicio, mesCierre);
	listaP->agregarPeriodo(*peri);
	return listaP;
}

ListaCurso* Interfaz::ingresaCurso(){
	string nombreCurso, idCurso, estado, mesInicio, mesCierre;
	double precioCurso;
	Periodo* peri = NULL;
	Curso* cur = NULL;
	ListaCurso* listaC = new ListaCurso();
	ListaPer* listaP = new ListaPer();
	cout << "Ingresar el nombre del curso" << endl;
	cin >> nombreCurso;
	cout << "Ingrese el codigo del curso" << endl;
	cin >> idCurso;
	cout << "Ingrese el precio del curso" << endl;
	cin >> precioCurso;
	cout << "Estado del curso: Disponible o noDisponible" << endl;
	cin >> estado;
	cout << "Ingresa el periodo:" << endl;
	cout << "Ingrese el mes de inicio del periodo" << endl;
	cin >> mesInicio;
	cout << "Ingrese el mes de cierre del periodo" << endl;
	cin >> mesCierre;
	peri = new Periodo(mesInicio, mesCierre);
	if (listaP->siExistePeriodo(peri)) {
		cout << "El periodo es valido";
		cur = new Curso(nombreCurso, idCurso, precioCurso, estado, peri);
		listaC->agregarCurso(*cur);
	}
	else
		cout << "El periodo no es valido";
	return listaC;
}

ListaGrupo* Interfaz::ingresaGrupo(ListaCurso* listaCur, ListaProfesores* listaProf){
	int numGrupo, capacidadAlumnos, cantAlumnos, horaInicio, horaFinal;
	string codCurso, diaSemana, id;
	Curso* curso = new Curso();
	Horario* hor = NULL;
	Profesor* profe = NULL;
	Grupo* grupo = NULL;
	ListaGrupo* listaG = new ListaGrupo();
	cout << "Ingrese el numero del grupo" << endl;
	cin >> numGrupo;
	cout << "Ingrese la capacidad de alumnos" << endl;
	cin >> capacidadAlumnos;
	cout << "Ingrese la cantidad de alumnos" << endl;
	cin >> cantAlumnos;
	cout << "Ingrese el codigo del curso" << endl;
	cin >> codCurso;
	curso = listaCur->obtenerCurso(codCurso);
	cout << "Ingrese el horario: " << endl;
	cout << "Ingrese la hora de inicio" << endl;
	cin >> horaInicio;
	cout << "Ingrese la hora a la que finaliza la clase" << endl;
	cin >> horaFinal;
	cout << "Que dia de la semana?" << endl;
	cin >> diaSemana;
	hor = new Horario(horaInicio, horaFinal, diaSemana);
	cout << "Ingrese la cedula del profesor" << endl;
	cin >> id;
	profe = listaProf->obtenerProfesor(id);
	grupo = new Grupo(numGrupo, capacidadAlumnos, cantAlumnos, curso, hor, profe);
	listaG->ingresarGrupos(grupo);
	return listaG;
}

bool Interfaz::asignarProfesor(ListaProfesores* listaP, ListaGrupo* listaG){
	int numG;
	string id;
	Profesor* prof = new Profesor();
	cout << "Ingrese la cedula del profesor" << endl;
	cin >> id;
	if (listaP->existeProfesor(id))
		prof = listaP->obtenerProfesor(id);
	cout << "Ingrese el numero del grupo" << endl;
	cin >> numG;
	if (listaG->existeGrupo(numG)) {
		listaG->obtenerGrupo(numG)->setProfesor(prof);
		return true;
	}
	return false;
}

//--------------------MENU-MATRICULA----------------------------------
int Interfaz::subMenuMatricula() {
	int op;
	system("cls");
	cout << "---------SUBMENU-MATRICULA-------" << endl;
	cout << "1- Matricular Estudiante" << endl;
	cout << "2- Desmatricular Estudiante" << endl;
	cout << "3- Regresar al menu Principal" << endl;
	cin >> op;
	return op;
}

//terminar
bool Interfaz::matricularEstudiante(ListaEst* listaE, ListaGrupo* listaG) {
	string ced, curso;
	int num;
	cout << "Digite la cedula del estudiante" << endl;
	cin >> ced;
	if (listaE->siExisteEstudiante(ced)) {
		cout << "Que curso desea matricular?" << endl;
		cin >> curso;
		cout << "Los grupos con ese curso son los siguientes: " << endl;
		cout << listaG->mostrarGruposEspecifico(curso) << endl;
		cout << "Ingrese el numero de grupo en el que desea matricular" << endl;
		cin >> num;
	}
	return true;
}

//terminar
bool Interfaz::desmatricularEstudiante(ListaEst* listaE) {
	string ced, curso;
	cout << "Digite la cedula del estudiante que se desea desmatricular" << endl;
	cin >> ced;
	if (listaE->siExisteEstudiante(ced)) {
		cout << "Digite el curso que desea desmatricular" << endl;
		cin >> curso;
	}
	return true;
}

//-------------MENU-BUSQUEDAS-E-INFORMES--------------
int Interfaz::subMenuBusquedaseInformes() {
	int op;
	system("cls");
	cout << "---------SUBMENU-BUSQUEDAS-E-INFORMES-------" << endl;
	cout << "1- Informes Profesores Registrados" << endl;
	cout << "2- Informes Estudiante Registrados" << endl;
	cout << "3- INformes Cursos Matriculados por un Estudiante" << endl;
	cout << "4- Informe Profesor Especifico" << endl;
	cout << "5- Informe Periodos Habilitados para el Annio" << endl;
	cout << "6- Informe grupo Especifico" << endl;
	cout << "7- Regresar al Menu Principal" << endl;
	cin >> op;
	return op;
}

string Interfaz::profesoresRegistrados(ListaProfesores* listaP){
}

string Interfaz::estudiantesRegistrados(){}
string Interfaz::cursosMatriculadosPorEstudiante(){}
string Interfaz::profesorEspecifico(){}
string Interfaz::periodosHabilitadosParaElAnnio(){}
string Interfaz::informeGrupoEspecifico(){}
