#ifndef CASINO_H
#define CASINO_H

#include "Mesa.h"
#include "PriorityQueue.h"
#include <iostream>

class Casino {

	public:
		Casino();
		virtual~Casino();
		void encolar(char p);
		void moverGente();
		void correr();
		void imprimir();
		bool hayGente();

	private:
		PriorityQueue<char> colas[3];
		Mesa mesas[3];
		
		bool hayFila();
		

};

#endif
