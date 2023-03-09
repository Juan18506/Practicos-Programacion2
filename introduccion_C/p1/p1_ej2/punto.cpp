#include "punto.h"

struct rep_punto {
	double x,y;
};

Punto crearPunto(double x, double y) {
	Punto pto = new rep_punto;
	pto->x = x;
	pto->y = y;
	return pto;
}

double coordX(Punto punto) {
	return punto->x;
}

double coordY(Punto punto) {
	return punto->y;
}



