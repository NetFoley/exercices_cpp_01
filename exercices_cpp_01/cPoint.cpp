#include "cPoint.h"

using namespace std;

cPoint62::cPoint62()
{
	nb++;
	this->x = 0;
	this->y = 0;
	cout << "Nombre de point cree : " << nb << endl;
}

cPoint62::cPoint62(float x, float y)
{
	this->x = x;
	this->y = y;
	nb++;
	cout << "Nombre de point cree : " << nb << endl;
}

const void cPoint62::affiche()
{
	cout << "Coordonnees du point x: " << this->x << " y: " << this->y << endl;
}

void cPoint62::deplace(float x, float y )
{
	this->x += x;
	this->y += y;
}

cPoint63::cPoint63()
{
	this->r = 0;
	this->t = 0;
}

cPoint63::cPoint63(float x, float y)
{
	this->t = getAngle(0, 0, x, y) * 180 / PI;
	this->r = getDistance(0, 0, x, y);
}

const float cPoint63::abscisse()
{
	return cos(this->t/180*PI) * r;
}

const float cPoint63::ordonnee()
{
	return sin(this->t/180*PI) * r;
}

void cPoint63::deplace(float x, float y)
{
	float newX = x + this->abscisse();
	float newY = y + this->ordonnee();
	this->t = getAngle(0, 0, newX, newY) * 180 / PI;
	this->r = getDistance(0, 0, newX, newY);
}

double getDistance(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double getAngle(float x1, float y1, float x2, float y2)
{
	double angle = atan2((y2 - y1), (x2 - x1));

	return angle;
}

void cPoint63::homothethie(float k, float x, float y)
{
	float dist = getDistance(x, y, this->abscisse(), this->ordonnee());
	float newAngle = getAngle(x, y, this->abscisse(), this->ordonnee());
	float newX = x + cos(newAngle) * k * dist;
	float newY = y + sin(newAngle) * k * dist;
	this->r = getDistance(0, 0, newX , newY);
	this->t = getAngle(0, 0, newX, newY)*180/PI;
}

void cPoint63::rotation(float angle, float x, float y)
{
	float dist = getDistance(x, y, this->abscisse(), this->ordonnee());
	float newAngle = getAngle(x, y, this->abscisse(), this->ordonnee()) + angle / 180 * PI;
	if (newAngle > 360)
		newAngle -= 360;
	float newX = x + cos(newAngle)  * dist;
	float newY = y + sin(newAngle)  * dist;
	this->r = getDistance(0, 0, newX, newY);
	this->t = getAngle(0, 0, newX, newY)*180/PI;
}

float cPoint63::rho()
{
	return this->r;
}

float cPoint63::theta()
{
	return this->t;
}
