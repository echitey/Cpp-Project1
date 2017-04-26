#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief The Retangulo class serve para criar um poligono de tipo retangulo
 *
 *
 * A classe Retangulo serve para criar um Retangulo usando seu primeiro ponto,
 * sua largura e sua altura
 *
 */

class Retangulo: public Poligono{
	private:
		float x, y, largura, altura;
	public:

		/**
	   * @brief Retangulo eh um construtor da classe que recebe parametros
	   * @param x recebe a coordenada x do primeiro ponto do Retangulo
	   * @param y recebe a coordenada y do primeiro ponto do Retangulo
		 * @param largura recebe a largura do Retangulo
	   * @param altura recebe a altura do Retangulo
	   *
	   */

		Retangulo(float x, float y, float largura, float altura);
};

#endif
