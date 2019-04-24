#pragma once
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
class Tarea {
protected:
	int orden;
	int nivel;
	int horas;
	int* ant;
public:
	Tarea(int n) : orden(n) {
		srand(n*time(0));
		if (n == 1 || n == 2) nivel = n; else {
			do {
				nivel = (rand() % n + 1);
			} while (nivel == 1);
		}
		ant = new int[n];
		ant[0] = 0;
		for (int i = 1; i <= n; i++) { ant[i] = 0; }
	}
	~Tarea() {	delete ant;	}

	int getOrden() { return orden; }
	void setOrden(int n) {
		orden = n;
		if (n == 1 || n == 2) nivel = n;
		else {
			do {
				nivel = rand() % n + 1;
			} while (nivel == 1);
		}
	}

	int getNivel() { return nivel; };
	void setNivel(int n) {
		srand(n*time(NULL));
		do {
			nivel = (rand() % orden + 1) % (n + 1);
			if (nivel == 0 || nivel == 1) nivel = n;
		} while (nivel == 1);
		if (rand() % 10) nivel++;
	}

	int getHoras() { return horas; };
	void setHoras(int n) { horas = n; };
	void genHoras() { horas = rand() % 8 + 1; };

	void setPrecedentes(int precedente) {
		int n = 0;
		while (ant[n] != 0) { n++; }
		ant[n] = precedente;
	}
	int getPrecedentes(int n) {
		return ant[n];
	}
};