#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"
#define N 100

/**
 * @brief The Poligono class serve para criar um poligono
 *
 *
 * A classe Poligono serve para criar um poligonoe realizar diversar operacoes
 * como adicionar ponto, calcular area, obter o total de ponto, rotacionar...
 *
 */

class Poligono{
	private:
		Point poli[N];
		int index = 0;
	public:

		/**
	   * @brief addVertice(float x, float y) eh a funcao que serve para adicionar
		 *um novo ponto ao vetor de ponto poli[]
	   * @param x recebe a coordenada x do novo ponto
	   * @param y recebe a coordenada y do novo ponto
	   *
	   */
		void addVertice(float x, float y);

		/**
	   * @brief getOrigin() eh a funcao que retorna o primeiro elemento do vetor de pontos
	   *
	   */
		Point getOrigin();

		/**
	   * @brief count() eh a funcao que retorna o numero total de pontos
	   *
	   */
		int count();

		/**
	   * @brief area() eh a funcao que retorna a area do poligono usando a formula de Shoelace
	   *
	   */
		float area();

		/**
	   * @brief translada(float a, float b) eh a funcao que translada o poligono para outra posicao
	   * @param a recebe o valor a ser adicionado a coordenada x de cada ponto
	   * @param b recebe o valor a ser adicionado a coordenada y de cada ponto
	   *
	   *
	   */
		void translada(float a, float b);

		/**
	   * @brief rotacionar(float angulo, Point p) eh a funcao que rotaciona o poligono
		 * com um angulo em relacao ao ponto p
	   * @param angulo recebe o angulo de rotacao
	   * @param p recebe o ponto em relacao ao qual o poligono vai ser rotacionado
	   *
	   */
		void rotacionar(float angulo, Point p);

		/**
	   * @brief imprime() eh a funcao que imprime todos os pontos do poligono
	   *
	   */
		void imprimir();
};


#endif
