#include "Casino.h"
#include <iostream>

#define EJECU 0
#define TRABA 1
#define DESEM 2

using namespace std;

 Casino::Casino() 
{
}

Casino::~Casino()
{
}

void Casino::encolar(char p)
{
	if (p == 'E')
		colas[EJECU].pushTail(p);
	else if (p == 'T')
		colas[TRABA].pushTail(p);
	else if (p == 'D')
		colas[DESEM].pushTail(p);
	else
		cerr << "Persona desconocida rechazada por el gorila! " << p << endl;
}

void Casino::correr()
{
}

void Casino::imprimir()
{
	cout << "Personas en cola..." << endl;
	cout << "Ejecutivos: " << colas[EJECU].size() << endl;
	cout << "Trabajadores: " << colas[TRABA].size() << endl;
	cout << "Desempleados: " << colas[DESEM].size() << endl;
	cout << endl;
}

