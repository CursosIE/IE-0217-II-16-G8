#include "circulo.h"
#include <algorithm>
#include <cmath>
#include <iostream>

Circulo::Circulo(){
	nombre = "Círculo";
	color = "circuloso";
	radio = 1;
}

Circulo::~Circulo() {
	std::cout << "Destruyendo Circulo" << std::endl;
}

double Circulo::area() {
	return M_PI*radio*radio;
}

double Circulo::perimetro() {
	return 2*M_PI*radio;
}

void Circulo::operator~ () {
	std::cout << nombre <<  " " << color << std::endl;
}

void Circulo::operator! () {
	std::cout << "Area: " << area() << std::endl;
	std::cout << "Perimetro: " << perimetro() << std::endl;
}
