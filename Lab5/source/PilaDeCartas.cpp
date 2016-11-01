#include "PilaDeCartas.h"
#include <random>
#include <iostream>


typedef LinkedNode<carta> node_t;

using namespace std;

PilaDeCartas::PilaDeCartas()
{
    // push('1');
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
		it = it->prev;
	}

	default_random_engine gen;
	//Algoritmo Fisher-Yates
	for (int i = m_size -1; i > 0; i--) {
		uniform_int_distribution<int> rng(0, i);
		int j = rng(gen);
		cout << "swaping i: " << i << ", j: " << j << endl; 
		swap(nodos[i], nodos[j]);
		//this->imprimir();
		//this->reverse_imprimir();
		deb_imprimir();
		cout << endl;
        	// it = nodos[i];
	        // nodos[i] = nodos[j];
	        // nodos[j] = it;
	}
	return;
}
