#include <iostream>
#include <cmath>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

Retangulo::Retangulo(float x, float y, float altura, float largura){
	
	this->addVertice(x, y);

	this->addVertice(x + largura, y);

	this->addVertice(x + largura, y + altura);

	this->addVertice(x, y + altura);
}
