#include "Casino.h"
#include <iostream>

#define EJECU 0
#define TRABA 1
#define DESEM 2

using namespace std;

 Casino::Casino():cuenta(0) 
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
	int j = cuenta%7;
	int index = j == 6 ? 2 : (j%3 == 2);
	for (int i = 0; i < 3; i++) {
		while (!mesas[i].llena() && hayFila()) {
			if (!colas[index].empty()) {
				mesas[i].sentar(colas[index].popHead());
			}
			cuenta++;
			j = cuenta%7;
			index = (j == 6) ? 2 : (j%3 == 2);
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
