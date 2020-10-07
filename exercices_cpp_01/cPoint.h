#pragma once

//Class point définie par ses 2 coordonnées

//Class de l'exercice 62

#define PI 3.14159265

#include <iostream>
static int nb = 0;

class cPoint62 {
private:
	float x, y;

public:
	cPoint62();
	cPoint62(float, float);
	const void affiche();
	void deplace(float, float);
};

//Class de l'exercice 63
class cPoint63 {
private:
	float r, t;
public:
	cPoint63();
	cPoint63(float, float);
	const float abscisse();
	const float ordonnee();
	void deplace(float, float);
	void homothethie(float, float, float);
	void rotation(float, float, float);
	float rho();
	float theta();
};

double getAngle(float x1, float y1, float x2, float y2);
double getDistance(float x1, float y1, float x2, float y2);