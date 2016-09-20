#include "cuadrado.h"
#include <algorithm>
#include <cmath>
#include <iostream>

Cuadrado::Cuadrado(){
	nombre = "Cuadradito";
	color = "cuadrezco";
	lado = 3;
}

Cuadrado::~Cuadrado() {
	std::cout << "Destruyendo Cuadrado" << std::endl;
}

double Cuadrado::area() {
	return lado*lado;
}

double Cuadrado::perimetro() {
	return 4*lado;
}

void Cuadrado::operator~ () {
	std::cout << nombre <<  " " << color << std::endl;
}

void Cuadrado::operator! () {
	std::cout << "Area: " << area() << std::endl;
	std::cout << "Perimetro: " << perimetro() << std::endl;
}
