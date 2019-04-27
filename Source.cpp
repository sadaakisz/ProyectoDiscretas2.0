#include "Tarea.h"
#include "VecTareas.h"
#include <conio.h>
#include <string.h>

void main2() {
	int n = 0;
	cout<<"Ingrese un numero del 8 al 12: ";
	while (n != 10) {
		while (1) {		//Verificacion de rango
			cin >> n;
			if (n >= 8 && n <= 12) break;
			cout << "El valor ingresado no se encuentra en el rango de 8-12. Intente nuevamente." << endl << endl;
			cout << "Ingrese un numero del 8 al 12: ";
		}

		VecTareas* ListaT = new VecTareas();
		for (int i = 1; i <= n; i++) {
			Tarea* aux = new Tarea(i);
			ListaT->agregar(aux);
			unsigned int maxNivel = 2;
			if (i > 2) {
				if (ListaT->getNivel(i - 2) > maxNivel) maxNivel = ListaT->getNivel(i - 2);
				ListaT->setNivel(i, maxNivel);
			}
		}
		cout << "\t| Tarea |\t| Orden |\t| Nivel |\t| Horas |" << endl;
		for (int i = 1; i <= ListaT->size(); i++) {
			ListaT->genHoras(i);
			cout << endl;
			cout << "\t\t" << i << "\t\t" << ListaT->getOrden(i) << "\t\t" 
			<< ListaT->getNivel(i) << "\t\t" << ListaT->getHoras(i) << endl;
		}

		ListaT->ListaCantidadNivel();
		cout << endl << endl;
		ListaT->genPrecedentes();
		ListaT->impPrecedentes();

	}
}