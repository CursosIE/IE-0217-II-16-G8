/** @file suma.c
 *  Programa que suma
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Esta función toma un arreglo de números reales y devuelve la suma de todos sus elementos.
 * @param size tamaño del arreglo.
 * @param array arreglo de numeros reales.
 * @return resultado de la suma.
 */
double sumar(int size, double* array)
{
	double result = 0;
	int i;
	for (i = 0; i < size; i++) {
		result += array[i];
	}
	return result;
}

int main(int argc, char **argv)
{
	double array[argc - 1];
	int i;
	for (i = 1; i < argc; i++) {
		array[i-1] = atof(argv[i]);
	}
	
	printf("Programa en C\nEl resultados es %f\n", sumar(argc - 1, array));
	return 0;
}
