#include "calculadora.h"
#include <iostream>

using namespace std;

Calculadora::Calculadora(){}

Calculadora::~Calculadora() {}

double Calculadora::add(const data &d1, const data &d2) {
	return d1 + d2;
}
double Calculadora::sub(const data &d1, const data &d2) {
	return d1-d2;
}

double Calculadora::mul(const data &d1, const data &d2) {
	return d1*d2;
}

double Calculadora::div(const data &d1, const data &d2) {
	return d1/d2;
}

void Calculadora::print(const data &d) {
  ~d;
	return 0;
}
