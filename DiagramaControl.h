#pragma once
#include "Tarea.h"
#include "VecTareas.h"
#include <string.h>
using namespace System::Drawing;

class DiagramaControl {
public:
	VecTareas * t;
	DiagramaControl() {
		t = new VecTareas();
		for (int i = 1; i <= 12; i++) {
			Tarea* aux = new Tarea(i);
			t->agregar(aux);
			unsigned int maxNivel = 2;
			if (i > 2) {
				if (t->getNivel(i - 2) > maxNivel) maxNivel = t->getNivel(i - 2);
				t->setNivel(i, maxNivel);
			}
		}
		cout << "\t| Tarea |\t| Orden |\t| Nivel |\t| Horas |" << endl;
		for (int i = 1; i <= t->size(); i++) {
			t->genHoras(i);
			cout << endl;
			cout << "\t\t" << i << "\t\t" << t->getOrden(i) << "\t\t"
				<< t->getNivel(i) << "\t\t" << t->getHoras(i) << endl;
		}

		t->ListaCantidadNivel();
		cout << endl << endl;
		t->genPrecedentes();
		t->impPrecedentes();
	};
	~DiagramaControl() {};

	void fondo(BufferedGraphics^ buffer, Bitmap^ bmp) {
		Rectangle tamanio = Rectangle(0, 0, 1920, 1080);
		Rectangle zoom = Rectangle(0, 0, 1226, 700);
		buffer->Graphics->DrawImage(bmp, zoom, tamanio, GraphicsUnit::Pixel);
	}
	void mostrar(BufferedGraphics^ buffer, Bitmap^ bmp1, Bitmap^ bmp2, Bitmap^ bmp3, Bitmap^ bmp4, Bitmap^ bmp5, Bitmap^ bmp6, Bitmap^ bmp7, Bitmap^ bmp8, Bitmap^ bmp9, Bitmap^ bmp10, Bitmap^ bmp11, Bitmap^ bmp12, Bitmap^ bmpH1, Bitmap^ bmpH2, Bitmap^ bmpH3, Bitmap^ bmpH4, Bitmap^ bmpH5, Bitmap^ bmpH6, Bitmap^ bmpH7, Bitmap^ bmpH8) {
		Rectangle tamanioT = Rectangle(0, 0, 500, 500);
		Rectangle tamanioH = Rectangle(0, 0, 500, 125);
		for (int i = 1; i <= t->size(); i++) {

			int x=40+(1136/t->maxNivel())*(t->getNivel(i) - 1);
			int y=250;
			if (t->TareasPorNivel(t->getNivel(i)) == 1) y = 250;
			else if (t->TareasPorNivel(t->getNivel(i)) == 2) y = 160 + t->TareaEnNivel(i) * 190;
			else if (t->TareasPorNivel(t->getNivel(i)) == 3) y = 90 + t->TareaEnNivel(i) * 160;
			else if (t->TareasPorNivel(t->getNivel(i)) == 4) y = 60 + t->TareaEnNivel(i) * 130;
			else if (t->TareasPorNivel(t->getNivel(i)) == 5) y = 30 + t->TareaEnNivel(i) * 120;
			else if (t->TareasPorNivel(t->getNivel(i)) == 6) y = 0 + t->TareaEnNivel(i) * 110;
			else if (t->TareasPorNivel(t->getNivel(i)) == 7) y = 0 + t->TareaEnNivel(i) * 100;
			else if (t->TareasPorNivel(t->getNivel(i)) == 8) y = 0 + t->TareaEnNivel(i) * 90;
			
			Rectangle zoomT = Rectangle(x, y, 125, 125);
			Rectangle zoomH = Rectangle(x+12, y+110, 100, 25);
			switch (i)
			{
			case 1: buffer->Graphics->DrawImage(bmp1, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 2: buffer->Graphics->DrawImage(bmp2, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 3: buffer->Graphics->DrawImage(bmp3, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 4: buffer->Graphics->DrawImage(bmp4, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 5: buffer->Graphics->DrawImage(bmp5, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 6: buffer->Graphics->DrawImage(bmp6, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 7: buffer->Graphics->DrawImage(bmp7, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 8: buffer->Graphics->DrawImage(bmp8, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 9: buffer->Graphics->DrawImage(bmp9, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 10: buffer->Graphics->DrawImage(bmp10, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 11: buffer->Graphics->DrawImage(bmp11, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			case 12: buffer->Graphics->DrawImage(bmp12, zoomT, tamanioT, GraphicsUnit::Pixel); break;
			default:
				break;
			}
			switch (t->getHoras(i))
			{
			case 1: buffer->Graphics->DrawImage(bmpH1, zoomH, tamanioH, GraphicsUnit::Pixel); break;
			case 2: buffer->Graphics->DrawImage(bmpH2, zoomH, tamanioH, GraphicsUnit::Pixel); break;
			case 3: buffer->Graphics->DrawImage(bmpH3, zoomH, tamanioH, GraphicsUnit::Pixel); break;
			case 4: buffer->Graphics->DrawImage(bmpH4, zoomH, tamanioH, GraphicsUnit::Pixel); break;
			case 5: buffer->Graphics->DrawImage(bmpH5, zoomH, tamanioH, GraphicsUnit::Pixel); break;
			case 6: buffer->Graphics->DrawImage(bmpH6, zoomH, tamanioH, GraphicsUnit::Pixel); break;
			case 7: buffer->Graphics->DrawImage(bmpH7, zoomH, tamanioH, GraphicsUnit::Pixel); break;
			case 8: buffer->Graphics->DrawImage(bmpH8, zoomH, tamanioH, GraphicsUnit::Pixel); break;
			default:
				break;
			}

		}
		
		
		
		/*Rectangle tamanio = Rectangle(0, 0, 500, 500);
		Rectangle zoom = Rectangle(0, 0, 125, 125);
		buffer->Graphics->DrawImage(bmp1, zoom, tamanio, GraphicsUnit::Pixel);*/
	}
};