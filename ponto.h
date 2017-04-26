#ifndef PONTO_H
#define PONTO_H

/**
 * @brief The Point class serve para realizar operacoes sobre pontos
 *
 *
 * A classe Point realiza operacoes de atribucao, soma,
 * subtracao, norma, translacao e impressao
 *
 */

class Point{

private:
	float x, y;
public:
	/**
   * @brief Point eh o construtor padrao da classe
   *
   * Ele serve para criar um ponto sem atribuir as coordenadas
   */
	Point();

	/**
   * @brief Point eh um construtor da classe que recebe parametros
   * @param _x recebe a coordenada x do ponto
   * @param _y recebe a coordenada y do ponto
   *
   * O construtor da classe cria um ponto atribuindo as coordenadas x e y
   *
	 * <ol>
   * <li> (-3, 4) </li>
   * <li> (3, 5) </li>
   * </ol>
   */
	Point(float _x, float _y);

	/**
   * @brief setX(float _x) eh a funcao que serve para atribuir a coordenada x do ponto
   * @param _x recebe a coordenada x do ponto
   *
   */
	void setX(float _x);

	/**
   * @brief setY(float _y) eh a funcao que serve para atribuir a coordenada y do ponto
   * @param _y recebe a coordenada y do ponto
   *
   */
	void setY(float _y);

	/**
   * @brief setXY(float _x, float _y) eh a funcao que serve para atribuir as coordenadas x e y do ponto
   * @param _x recebe a coordenada x do ponto
   * @param _y recebe a coordenada y do ponto
   *
	 * <ol>
   * <li> (-3, 4) </li>
   * <li> (3, 5) </li>
   * </ol>
   */
	void setXY(float _x, float _y);

	/**
   * @brief getX() eh a funcao que retorna a coordenada x do ponto
   *
   */
	float getX();

	/**
   * @brief getY() eh a funcao que retorna a coordenada y do ponto
   *
   */
	float getY();

	/**
   * @brief add(Point p1) eh a funcao que serve para somar as coordenadas de dois pontos
   * @param p1 recebe o ponto a ser somado
   *
   */
	Point add(Point p1);

	/**
   * @brief sub(Point p1) eh a funcao que serve para subtrair as coordenadas de dois pontos
   * @param p1 recebe o ponto a ser subtraido
   *
   */
	Point sub(Point p1);

	/**
   * @brief norma() eh a funcao que retorna a norma do vetor formado pelo ponto e a origem
   *
   */
	float norma();

	/**
   * @brief translada(float a, float b) eh a funcao que translada um ponto para outra posicao
   * @param a recebe o valor a ser adicionado a coordenada x
   * @param b recebe o valor a ser adicionado a coordenada y
   *
   *
   * <ol>
   * <li>Por exemplo, um ponto (-3, 4) translado para (-2, 6) com a=1 e b=2 </li>
   * </ol>
   */
	void translada(float a, float b);

	/**
   * @brief imprime() eh a funcao que imprime o ponto na tela
   *
   */
	void imprime();
};

#endif
