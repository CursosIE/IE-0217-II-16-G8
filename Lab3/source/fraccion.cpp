#include "fraccion.h"
#include <iostream>

Fraccion::Fraccion():
	numerador(1), denominador(1)
{

}

Fraccion::Fraccion(int num, int den):
	numerador(num), denominador(den)
{

}

Fraccion::~Fraccion() {

}

Fraccion Fraccion::operator+(const Fraccion &other) {
	if (other.denominador == this->denominador) {
		int num = other.numerador + this->numerador;
		return Fraccion(num, this->denominador);
	}

	int den = other.denominador*this->denominador;
	int num = other.numerador*this->denominador + this->numerador*other.denominador;
	return Fraccion(num, den);
}


Fraccion Fraccion::operator-(const Fraccion &other) {
	if (other.denominador == this->denominador) {
		int num = this->numerador - other.numerador;
		return Fraccion(num, this->denominador);
	}

	int den = other.denominador*this->denominador;
	int num = this->numerador*other.denominador - other.numerador*this->denominador;
	return Fraccion(num, den);
}


Fraccion Fraccion::operator*(const Fraccion &other) {
	int num = this->numerador * other.numerador;
	int den = this->denominador * other.denominador;
	return Fraccion(num, den);
}

Fraccion Fraccion::operator/(const Fraccion &other) {
	int num = this->numerador * other.denominador;
	int den = this->denominador * other.numerador;
	return Fraccion(num, den);
}

void Fraccion::operator~() {
	std::cout << numerador << "/" << denominador << std::endl;
}

