#include <iostream>
//#include "PilaDummy.h"
#include "PilaDeCartas.h"
#include "Mesa.h"
#include "PriorityQueue.h"
#include "Casino.h"
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	// checkeo de argumentos
	if (argc != 2) {
		cerr << "Error de argumentos!" << endl;
		cerr << "Uso: " << argv[0] << " <hilera>" << endl;
		return -1;
	}


	PriorityQueue<char> q1;
	Casino *c = new Casino();

	for (int i = 0; i < strlen(argv[1]); i++) { 
		c->encolar(argv[1][i]);
	}

	c->imprimir();

	// Ejemplo de como usar la cola
//	cout << "Creando mesilla!" << endl;
//	Mesa mesilla;
//	mesilla.imprimir();
//
//	cout << endl;
//
//	cout << "dos jugadores!" << endl;
//	mesilla.sentar('p');
//	mesilla.sentar('j');
//
//	mesilla.imprimir();
//	cout << endl;
//	cout << "Jueguen!" << endl;
//	mesilla.play();
//	mesilla.imprimir();
//	
//	cout << endl;
//	cout << "echar personas mamadoras!" << endl;
//	mesilla.echar();
//	cout << "murieron.." << endl;
//	mesilla.imprimir();

	
	
}
