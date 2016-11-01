#include "PilaDeCartas.h"
#include <random>
#include <iostream>


typedef LinkedNode<carta> node_t;

using namespace std;

PilaDeCartas::PilaDeCartas()
{
    push('1');
}

PilaDeCartas::~PilaDeCartas()
{
    //dtor
}

void PilaDeCartas::Barajar(){
	//Primero se hace un arreglo de todos los nodos;
	node_t* nodos[m_size];
	node_t* it = m_top;
	for (int i = 0; i < m_size; i++) {
		nodos[i] = it;
		it = it->next;
	}

   default_random_engine gen;
	 uniform_int_distribution<int> rng(0, m_size-1);
	//Algoritmo Fisher-Yates
	for (int i = m_size -1; i > 0; i--) {
		// rng.max(i);
		int j = rng(gen);
        swap(nodos[i], nodos[j]);
        it = nodos[i];
        nodos[i] = nodos[j];
        nodos[j] = it;
	}
    return;
}
