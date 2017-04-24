#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"
#define N 100

class Poligono{
	private:
		Point poli[N];
		int index = 0;
	public:
		void addVertice(float x, float y);
		int getIndex();
		Point getOrigin();
		int count();
		float area();
		void translada(float a, float b);
		void rotacionar(float angulo, Point p);
		void imprimir();
};


#endif
