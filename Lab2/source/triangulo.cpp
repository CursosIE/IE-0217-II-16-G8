#include "triangulo.h"
#include <algorithm>
#include <cmath>
#include <iostream>

Triangulo::Triangulo():gamma(0){
	nombre = "Triangulo";
	color = "triangular";
	lados[0] = 3; lados[1] = 4; lados[2] = 5;
	setGamma();
}

Triangulo::Triangulo(double l1, double l2, double l3) {
	if (std::max(l1, std::max(l2, l3))*2 < (l1 + l2 + l3)) {
		lados[0] = l1;
		lados[1] = l2;
		lados[2] = l3;
	} else {
		std::cerr << "Error, no es un triangulo" << std::endl;
		// throw std::exception;
		lados[0] = 3; lados[1] = 4; lados[2] = 5;
	}
	setGamma();
	nombre = "Triangulo";
	color = "triangular";
}

Triangulo::~Triangulo() {
	std::cout << "Destruyendo Triangulo" << std::endl;
}

double Triangulo::area() {
	return lados[0]*lados[1]*std::sin(gamma)/2;
}

double Triangulo::perimetro() {
	return lados[0] + lados[1] + lados[2];
}

void Triangulo::operator~ () {
	std::cout << nombre <<  " " << color << std::endl;
}

void Triangulo::operator! () {
	std::cout << "Area: " << area() << std::endl;
	std::cout << "Perimetro: " << perimetro() << std::endl;
}

void Triangulo::setGamma() {
	double num = (lados[0]*lados[0] + lados[1]*lados[1] - lados[2]*lados[2]);
	double den = (2*lados[0]*lados[1]);
	gamma = acos(num/den);
	//std::cout << den << " " << num << std::endl;
}


