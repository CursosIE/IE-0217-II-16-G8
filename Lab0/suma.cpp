/** @file suma.cpp
 *  Programa que suma
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

double sumar(vector<double>);

int main(int argc, char *argv[]) {

	vector<double> argumentos(argc - 1);

	for(int i = 0; i < argc - 1; i++){
		argumentos[i] = stod(argv[i+1]);
	}

	cout << "Programa en C++" << endl;
	cout << "El resultado es: " << sumar(argumentos) << endl;

	return 0;
}

/**
 * Esta función toma un vector de números reales y devuelve la suma de todos sus elementos.
 * @param args std::vector<double> que contiene los argumentos.
 * @return resultado de la suma.
 */
double sumar(vector<double> args) {
	double result = 0;
	for (auto it = args.begin(); it < args.end(); it++) {
		result += *it;
	}
	return result;
}

