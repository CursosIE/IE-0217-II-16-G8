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
		void correr();
		void imprimir();

	private:
		PriorityQueue<char> colas[3];
		

};

#endif
