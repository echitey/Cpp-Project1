#include <iostream>
#include "ponto.h"
#include "retangulo.h"
#include "poligono.h"

using namespace std;

int main(){
	
	Retangulo rect(0, 0, 3, 4);
	rect.imprimir();
	
	//Calculo da area	
	cout << "A area eh "<< rect.area() << endl;

	//translada
	cout << endl << "Translacao"<< endl;
	rect.translada(-3, 4);
	cout << "Pontos apos translacao com (-3, 4) sao: ";
	rect.imprimir();
	cout << "A area apos translacao eh "<< rect.area() << endl;

	cout << endl << "Rotacao"<< endl;
	//Centro de massa
	Point origin = rect.getOrigin();
	float xCM = origin.getX() + (4/2);
	float yCM = origin.getY() + (3/2);
	//Rotacionan com um angulo de +30grau
	Point pCM(xCM, yCM);
	rect.rotacionar(30, pCM);
	cout << "Pontos apos de +30gr em relacao ao seu centro de massa : ";
        rect.imprimir();
        cout << "A area apos translacao eh "<< rect.area() << endl;

	return 0;
}
