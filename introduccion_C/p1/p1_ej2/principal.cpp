#include "punto.h"
#include <stdio.h>
#include <math.h>

double distancia(Punto p1, Punto p2) {
	return sqrt(pow(coordX(p1) - coordX(p2) ,2) + pow(coordY(p1) - coordY(p2), 2));
}

int main() {
	Punto pto1 = crearPunto(3.0, 5.5);
	Punto pto2 = crearPunto(0, 9.5);
	Punto pto3 = crearPunto(-2.0, 17.5);
	printf("La distancia entre p1 y p2 es: %f\n", distancia(pto1, pto2));
	printf("La distancia entre p2 y p3 es: %f\n", distancia(pto2, pto3));
	printf("La distancia entre p1 y p3 es: %f\n", distancia(pto1, pto3));
	return 0;
		
}
