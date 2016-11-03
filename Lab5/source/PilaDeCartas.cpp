#include "PilaDeCartas.h"
#include <iostream>
#include <stdlib.h>


typedef LinkedNode<carta> node_t;

using namespace std;

PilaDeCartas::PilaDeCartas()
{
	carta AS('A'); carta UNO('1'); carta DOS('2'); carta TRES('3'); carta CUATRO('4'); carta CINCO('5');
	carta SEIS('6'); carta SIETE('7'); carta OCHO('8'); carta NUEVE('9');carta DIEZ('X'); carta J('J');
	carta Q('Q'); carta K('K');

	Baraja_inglesa.push_back(AS);
	Baraja_inglesa.push_back(UNO);
	Baraja_inglesa.push_back(DOS);
	Baraja_inglesa.push_back(TRES);
	Baraja_inglesa.push_back(CUATRO);
	Baraja_inglesa.push_back(CINCO);
	Baraja_inglesa.push_back(SEIS);
	Baraja_inglesa.push_back(SIETE);
	Baraja_inglesa.push_back(OCHO);
	Baraja_inglesa.push_back(NUEVE);
	Baraja_inglesa.push_back(DIEZ);
	Baraja_inglesa.push_back(J);
	Baraja_inglesa.push_back(Q);
	Baraja_inglesa.push_back(K);


}

PilaDeCartas::~PilaDeCartas()
{
    //dtor
}

void PilaDeCartas::Shuffle(){

	int size = this->m_size;
	this->clear();

	for(int i = 0 ; i < size ; i++){
	std::list<carta>::iterator it = Baraja_inglesa.begin();
		int rand_offset = rand() % Baraja_inglesa.size();
		for(int j = 0; j<rand_offset; j++){
			it++; 
		}
		carta rand_card = *it;
		this->push(rand_card);
	}
	std::cout << "Mazo barajado y listo para jugar!" << std::endl;

}
