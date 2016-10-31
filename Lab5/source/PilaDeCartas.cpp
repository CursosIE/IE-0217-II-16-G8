#include "PilaDeCartas.h"
#include <random>

PilaDeCartas::PilaDeCartas()
{
    PilaCartas.push('1'); 
}

PilaDeCartas::~PilaDeCartas()
{
    //dtor
}

void Barajar(){
	//Primero se hace un arreglo de todos los nodos;
	node_t* nodos[m_size];
	node_t* it = m_top;
	for (int i = 0; i < m_size; i++) {
		nodos[i] = it;
		it = it->next;
	}

	std::uniform_int_distribution<int> rng(0, m_size-1);
	//Algoritmo Fisher-Yates
	for (int i = m_size -1; i > 0; i--) {
		rng.max(i);
		int j = rng.();
	}
		


}
