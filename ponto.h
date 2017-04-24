#ifndef PONTO_H
#define PONTO_H

class Point{

private:
	float x, y;
public:
	Point();
	Point(float _x, float _y);
	void setX(float _x);
	void setY(float _y);
	void setXY(float _x, float _y);
	float getX();
	float getY();
	Point add(Point p1);
	Point sub(Point p1);
	float norma();
	void translada(float a, float b);
	void imprime();
};

#endif
