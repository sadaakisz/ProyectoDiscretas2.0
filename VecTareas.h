#pragma once
#include <vector>
#include "Tarea.h"

class VecTareas {
protected:
	vector<Tarea*>* LTarea;
public:
	VecTareas() { LTarea = new vector<Tarea*>(); };
	~VecTareas() {
		for (Tarea* TIndividual : *LTarea)
			delete TIndividual;
		delete LTarea;
	}

	void agregar(Tarea* t) { this->LTarea->push_back(t); }

	int size() { return LTarea->size(); }

	int getOrden(int n) { return LTarea->at(n - 1)->getOrden(); }
	void setOrden(int n, int nOrden) { LTarea->at(n - 1)->setOrden(nOrden); }
	
	int getNivel(int n) { return LTarea->at(n - 1)->getNivel(); }
	void setNivel(int n, int maxNivel) {
		if (n > 2) {
			LTarea->at(n - 1)->setNivel(maxNivel);
		}
		else cout << endl << "El nivel de las dos primeras tareas no pueden ser modificadas." << endl;
	}

	int getHoras(int n) { return LTarea->at(n-1)->getHoras(); }
	void setHoras(int n, int nHoras) { LTarea->at(n-1)->setHoras(nHoras); }
	void genHoras(int n) { LTarea->at(n-1)->genHoras(); }

	void setPrecedentes(int tarea, int orden, int precedente) {
		LTarea->at(tarea-1)->setPrecedentes(orden, precedente);
	}
	int getPrecedentes(int tarea, int orden) {
		return LTarea->at(tarea-1)->getPrecedentes(orden);
	}

	int TareasPorNivel(int nivel) {
		int cont = 0;
		for (int i = 1; i <= LTarea->size(); i++) {
			if (getNivel(i) == nivel) cont++;
		}
		return cont;
	}

	int maxNivel() {
		int max = 0;
		for (int i = 1; i <= LTarea->size(); i++) {
			if (max < LTarea->at(i - 1)->getNivel()) max = LTarea->at(i - 1)->getNivel();
		}
		return max;
	}

	void ListaCantidadNivel() {
		for (int i = 1; i <= maxNivel(); i++) {
			cout << TareasPorNivel(i) << " ";
		}
	}

	void genPrecedentes() {
		int precedente = 1;
		for (int tarea = 2; tarea <= LTarea->size(); tarea++) {
			precedente = 1;
			for (int orden = 0; orden < TareasPorNivel(getNivel(tarea) - 1); orden++){
				if (getNivel(precedente) < getNivel(tarea)) {
					//setPrecedentes(tarea, orden, contTarea);
					//contTarea++;
					
					while (1) {
						if (getNivel(precedente) == getNivel(tarea) - 1) {
							if (precedente < tarea) {
								setPrecedentes(tarea, orden, precedente), precedente++; break;
							}
							else { precedente++; }
						}
						else precedente++;
					}
				}
			}
		}
	}
	void impPrecedentes() {
		cout << "Tareas inmediatamente precedentes:" << endl << endl;
		for (int tarea = 1; tarea <= LTarea->size(); tarea++) {
			cout << "Tarea " << tarea << ": ";
			for (int orden = 0; orden < TareasPorNivel(getNivel(tarea) - 1); orden++) {
				if (getPrecedentes(tarea, orden) != 0) cout << getPrecedentes(tarea, orden) << ", ";
			}
			cout << endl;
		}
	}
};