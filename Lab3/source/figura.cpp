#include "figura.h"
#include <iostream>

using namespace std;

Figura::Figura(): nombre(""), color("") {
	cout << "Creando figura vacia" << endl;
}

Figura::Figura(char* v_nombre, char* v_color):
		nombre(v_nombre), color(v_color)
{
	cout << "Creando figura " << nombre << " de color " << color << endl;
}

Figura::~Figura() {
	cout << "Destruyendo figura " << nombre << endl;
}

double Figura::area() {
	return 0.0;
}

double Figura::perimetro() {
	return 0.0;
}
