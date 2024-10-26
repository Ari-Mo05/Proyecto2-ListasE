#include"Interfaz.h"

int main() {
	int num, op;
	ListaProfesores* listaP = new ListaProfesores();
	ListaEst* listaE = new ListaEst();
	ListaPer* listaPer = new ListaPer();
	ListaCurso* listaC = new ListaCurso();
	ListaGrupo* listaG = new ListaGrupo();

	do {
		num = Interfaz::menuPrincipal();
		switch (num) {
			case 1: {
				op = Interfaz::subMenuAdministracion();
				switch (op) {
					case 1: {
						listaP = Interfaz::ingresaProfesor();
					}break;
					case 2: {
						listaE = Interfaz::ingresaEstudiante();
					} break;
					case 3: {
						listaPer = Interfaz::ingresaPeriodo();
					} break;
					case 4: {
						listaC = Interfaz::ingresaCurso();
					}break;
					case 5: {
						listaG = Interfaz::ingresaGrupo(listaC, listaP);
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

					}break;
					case 2: {

					}break;
				}
			}break;
			case 3: {
		
			}break;
			case 4: {
		
			} break;
		}
	} while (num!=5);



	system("pause");
	return 0;
}
