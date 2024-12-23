#include"Interfaz.h"

int main() {
	int num, op;
	ListaProfesores* listaP = new ListaProfesores();
	ListaEst* listaE = new ListaEst();
	ListaPer* listaPer = new ListaPer();
	ListaCurso* listaC = new ListaCurso();
	ListaGrupo* listaG = new ListaGrupo();
	ListaMatri* listaM = new ListaMatri();

	do {
		num = Interfaz::menuPrincipal();
		switch (num) {
		case 1: {
			op = Interfaz::subMenuAdministracion();
			switch (op) {
				case 1: {
					listaP = Interfaz::ingresaProfesor(listaP, listaE);
				}break;
				case 2: {
					listaE = Interfaz::ingresaEstudiante(listaE);
				} break;
				case 3: {
					listaPer = Interfaz::ingresaPeriodo(listaPer);
				} break;
				case 4: {
					listaC = Interfaz::ingresaCurso(listaC, listaPer);
				}break;
				case 5: {
					listaG = Interfaz::ingresaGrupo(listaC, listaP, listaG);
				}break;
				case 6: {
					Interfaz::asignarProfesor(listaP, listaG);
				}break;
			}
		}
			  break;
		case 2: {
			op = Interfaz::subMenuMatricula();
			switch (op) {
				case 1: {
					listaM = Interfaz::matricularEstudiante(listaE, listaG, listaM, listaC);
				}break;
				case 2: {
					Interfaz::desmatricularEstudiante(listaE);
				}break;
				}
		}break;
		case 3: {
			op = Interfaz::subMenuBusquedaseInformes();
			switch (op) {
				case 1: {
					Interfaz::profesoresRegistrados(listaP);
				}break;
				case 2: {
					Interfaz::estudiantesRegistrados(listaE);
				}break;
				case 3: {
					Interfaz::cursosMatriculadosPorEstudiante(listaC);
				}break;
				case 4: {
					Interfaz::profesorEspecifico(listaP);
				} break;
				case 5: {
					Interfaz::periodosHabilitadosParaElAnnio(listaPer);
				}break;
				case 6: {
				}break;
			}
			Sleep(4000);
		}break;
		case 4: {

		}break;
		}
	} while (num != 5);

	system("pause");
	return 0;
}

