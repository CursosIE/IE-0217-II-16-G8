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

void Casino::moverGente()
{
	//Primero se echa a la gente
	//que perdió
	for (int i = 0; i < 3; i++) {
		mesas[i].echar();
	}
	
	//Luego se sienta la gente
	//que viene entrando
	int j = 0;
	for (int i = 0; i < 3; i++) {
		while (!mesas[i].llena() && hayFila()) {
			if (!colas[j%3].empty()) {
				mesas[i].sentar(colas[j%3].popHead());
			}
			j++;
		}
	}
			
}

void Casino::correr()
{
	for (int i = 0; i < 3; i++) {
		mesas[i].play();
	}
}

void Casino::imprimir()
{
	cout << "Personas en cola..." << endl;
	cout << "Ejecutivos: " << colas[EJECU].size() << endl;
	cout << "Trabajadores: " << colas[TRABA].size() << endl;
	cout << "Desempleados: " << colas[DESEM].size() << endl;
	cout << endl;
	cout << "Mesas..." << endl;
	for (int i = 1; i <= 3; i++) {
		cout << "Mesa " << i << ":" << endl;
		mesas[i-1].imprimir();
	}
}

bool Casino::hayGente()
{
	if (hayFila())
		return true;

	for (int i = 0; i < 3; i++) {
		if (mesas[i].num_jugadores() > 0)
			return true;
	}
	return false;
}


bool Casino::hayFila()
{
	bool sihay = false;
	for (int i = 0; i < 3; i++) {
		sihay = colas[i].empty() ? sihay : true;
	}
	return sihay;
}
