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
	cout << "Ingrese la opcion que desea" << endl;
	cin >> op;
	return op;
}

ListaProfesores* Interfaz::ingresaProfesor(ListaProfesores* listaP, ListaEst* listaE) {
	string nombre, id, email, gradoAcademico;
	int numTelefono;
	Profesor* prof = NULL;
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
	cout << endl;
	prof = new Profesor(nombre, id, numTelefono, email, gradoAcademico);
	if (listaP->agregarProfesor(*prof, listaE)) {
		cout << "El profesor: " << endl;
		cout << "----------------------------------------" << endl;
		cout << prof->toString() << endl;
		cout << "----------------------------------------" << endl;
		cout << "Fue ingresado" << endl;
		Sleep(4000);
	}
	else {
		cout << "No se pudo ingresar el profesor" << endl;
		Sleep(4000);
	}
	return listaP;
}

ListaEst* Interfaz::ingresaEstudiante(ListaEst* listaE) {
	string nombre, id, espe, email;
	int numeroTel, edad;
	Estudiante* estu = NULL;
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
	cout << endl;
	estu = new Estudiante(nombre, id, espe, numeroTel, email, edad);
	if (listaE->ingresaEstudiante(*estu)) {
		cout << "El estudiante: " << endl;
		cout << "---------------------------------------------" << endl;
		cout << estu->toString();
		cout << "---------------------------------------------" << endl;
		cout << "Fue ingresado" << endl;
		Sleep(4000);
	}
	return listaE;
}
ListaPer* Interfaz::ingresaPeriodo(ListaPer* listaP){
	int num;
	string mesInicio, mesCierre;
	Periodo* peri = NULL;
	cout << "Ingrese que periodo desea: " << endl;
	cout << "Periodo 1: De Enero a Marzo" << endl;
	cout << "Periodo 2: De Abril a Junio" << endl;
	cout << "Periodo 3: De Julio a Septiembre" << endl;
	cout << "Periodo 4: De Octubre a Diciembre" << endl;
	cin >> num;
	switch (num) {
		case 1: {
			mesInicio = "Enero";
			mesCierre = "Marzo";
		}
		break;
		case 2: {
			mesInicio = "Abril";
			mesCierre = "Junio";
		}
		break;
		case 3: {
			mesInicio = "Julio";
			mesCierre = "Septiembre";
		}
		break;
		case 4: {
			mesInicio = "Octubre";
			mesCierre = "Diciembre";
		}
		break;
	}
	cout << endl;
	peri = new Periodo(mesInicio, mesCierre);
	if (listaP->agregarPeriodo(*peri)) {
		cout << "El periodo: " << endl;
		cout << "---------------------------------------" << endl;
		cout << peri->toString();
		cout << "---------------------------------------" << endl;
		cout << "Fue ingresado" << endl;
		Sleep(4000);
	}
	else {
		cout << "No se puedo ingresar el periodo" << endl;
		Sleep(4000);
	}
	return listaP;
}

//terminar
ListaCurso* Interfaz::ingresaCurso(){
	string nombreCurso, idCurso, estado, mesInicio, mesCierre;
	double precioCurso;
	int num;
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
	cout << "Periodo 1: De Enero a Marzo" << endl;
	cout << "Periodo 2: De Abril a Junio" << endl;
	cout << "Periodo 3: De Julio a Septiembre" << endl;
	cout << "Periodo 4: De Octubre a Diciembre" << endl;
	cin >> num;
	switch (num) {
	case 1: {
		mesInicio = "Enero";
		mesCierre = "Marzo";
	}
		  break;
	case 2: {
		mesInicio = "Abril";
		mesCierre = "Junio";
	}
		  break;
	case 3: {
		mesInicio = "Julio";
		mesCierre = "Septiembre";
	}
		  break;
	case 4: {
		mesInicio = "Octubre";
		mesCierre = "Diciembre";
	}
		  break;
	}
	cout << endl;
	peri = new Periodo(mesInicio, mesCierre);
	if (listaP->periodoPermitido(*peri)) {
		cout << "El periodo es valido" << endl;
		cur = new Curso(nombreCurso, idCurso, precioCurso, estado, peri);
		if (listaC->agregarCurso(*cur)) {
			cout << "El curso: " << endl;
			cout << "---------------------------------" << endl;
			cout << cur->toString() << endl;
			cout << "---------------------------------" << endl;
			cout << "Fue ingresado" << endl;
			Sleep(4000);
		}
	}
	else
		cout << "El periodo no es valido";

	return listaC;
}

//terminar
ListaGrupo* Interfaz::ingresaGrupo(ListaCurso* listaCur, ListaProfesores* listaProf){
	int numGrupo, capacidadAlumnos, cantAlumnos, horaInicio, horaFinal, num;
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
	hor = new Horario(horaInicio, horaFinal, 0, 7);
	cout << "Cuantos dias de la semana se da el curso?" << endl;
	cin >> num;
	while (num != 0) {
		cout << "Que dia de la semana?" << endl;
		cin >> diaSemana;
		hor->agregarDias(diaSemana);
		num--;
	}
	cout << "Ingrese la cedula del profesor" << endl;
	cin >> id;
	cout << endl;
	profe = listaProf->obtenerProfesor(id);
	grupo = new Grupo(numGrupo, capacidadAlumnos, cantAlumnos, curso, hor, profe);
	if (listaG->ingresarGrupos(grupo)) {
		cout << "El grupo: " << endl;
		cout << "--------------------------------------" << endl;
		cout << grupo->toString() << endl;
		cout << "--------------------------------------" << endl;
		cout << "Fue ingresado" << endl;
		Sleep(4000);
	}
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

ListaMatri* Interfaz::matricularEstudiante(ListaEst* listaE, ListaGrupo* listaG) {
	string ced, curso;
	int num;
	Estudiante* estu = new Estudiante();
	Grupo* grup = new Grupo();
	Matricula* matri = NULL;
	ListaMatri* listaM = new ListaMatri();
	cout << "Digite la cedula del estudiante" << endl;
	cin >> ced;
	if (listaE->siExisteEstudiante(ced)) {
		estu = listaE->obtenerEstudiante(ced);
		cout << "Que curso desea matricular?" << endl;
		cin >> curso;
		if (listaG->getGrupoNombre(curso)) {
			cout << "Los grupos con ese curso son los siguientes: " << endl;
			cout << listaG->mostrarGruposEspecifico(curso) << endl;
			cout << "Ingrese el numero de grupo en el que desea matricular" << endl;
			cin >> num;
			grup = listaG->obtenerGrupo(num);
			matri = new Matricula(grup, estu);
			if (listaM->agregarMatricula(*matri))
				cout << "Matricula generada" << endl;
			else
				cout << "No se pudo ingresar la matricula" << endl;
		}
		cout << "Ese curso no existe" << endl;
	}
	cout << "Ese estudiante no esta ingresado" << endl;
	return listaM;
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
	cout << "3- Informes Cursos Matriculados por un Estudiante" << endl;
	cout << "4- Informe Profesor Especifico" << endl;
	cout << "5- Informe Periodos Habilitados para el Annio" << endl;
	cout << "6- Informe grupo Especifico" << endl;
	cout << "7- Regresar al Menu Principal" << endl;
	cout << "Ingrese la opcion que desea" << endl;
	cin >> op;
	return op;
}

void Interfaz::profesoresRegistrados(ListaProfesores* listaP){
	cout << listaP->toString();
}

void Interfaz::estudiantesRegistrados(ListaEst* listaE) { 
	cout << listaE->mostrarEstudiantes();
}

void Interfaz::cursosMatriculadosPorEstudiante(){  }

void Interfaz::profesorEspecifico(ListaProfesores* listaP){ 
	string ced;
	cout << "Digite la cedula del profesor que esta buscando" << endl;
	cin >> ced;
	cout << listaP->obtenerProfesor(ced)->toString();
}

void Interfaz::periodosHabilitadosParaElAnnio(ListaPer* listaP){ 
	cout << listaP->mostrarPeriodos();
}

void Interfaz::informeGrupoEspecifico(){  }


//---------------GUARDAR-LOS-DATOS-EN-ARCHIVOS-------------
int Interfaz::guardarDatosArchivos() {
	int op;
	system("cls");
	cout << "---------GUARDAR-LOS-DATOS-EN-ARCHIVOS-------" << endl;
	cout << "1- Guardar los datos de los profesores" << endl;
	cout << "2- Guardar Estudiante Registrados" << endl;
	cout << "3- Guardar Cursos Matriculados por un Estudiante" << endl;
	cout << "4- Guardar Periodos Habilitados para el Annio" << endl;
	cout << "5- Guardar grupo Especifico" << endl;
	cout << "6- Regresar al Menu Principal" << endl;
	cout << "Ingrese la opcion que desea" << endl;
	cin >> op;
	return op;
}

