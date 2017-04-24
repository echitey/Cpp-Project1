#include <iostream>
#include <cmath>
#include "ponto.h"
#include "poligono.h"

using namespace std;

void Poligono::addVertice(float x, float y){
	poli[index].setXY(x, y);
	index++;
}
int Poligono::count(){
	return index;
}
Point Poligono::getOrigin(){
	return poli[0];
}
float Poligono::area(){

	float area = 0.0;
	int size = index;
	// Usando a formula de Shoelace
	int j = size - 1;
	for (int i = 0; i < size; i++)
	{
		area += (poli[j].getX() + poli[i].getX()) * (poli[j].getY() - poli[i].getY());
		j = i; // j is previous vertex to i
	}

	// Return absolute value
	return abs(area / 2.0);
}


void Poligono::translada(float a, float b){
	int n = index;
	for(int i = 0; i < n; i++){
		poli[i].setX(poli[i].getX() + a);
		poli[i].setY(poli[i].getY() + b);
	}
}
void Poligono::rotacionar(float angulo, Point p){
	float s, c, xNovo, yNovo;
	int size = index;
	for(int i = 0; i < size; i++){
		s = sin(angulo);
		c = cos(angulo);

		//transladar para a origem
		poli[i].setX(poli[i].getX() - p.getX());
		poli[i].setY(poli[i].getY() - p.getY());	
		
		//rotacionar o ponto
		xNovo = poli[i].getX() * c - poli[i].getY() * s;
		yNovo = poli[i].getX() * s + poli[i].getY() * c;

		//transladar de volta
		poli[i].setX(xNovo + p.getX());
		poli[i].setY(yNovo + p.getY());

	}

	//Formula compactada
	//p'x = cos(theta) * (px-ox) - sin(theta) * (py-oy) + ox
	//p'y = sin(theta) * (px-ox) + cos(theta) * (py-oy) + oy
}
void Poligono::imprimir(){
	int n = index;
        for(int i = 0; i < n; i++){
                cout << "(" << poli[i].getX() << ", " << poli[i].getY() << ")";
		if(i < n-1){
			cout << " -> ";
		}
        }

	cout << endl;
}
