#include "PilaDeCartas.h"
#include <random>
#include <iostream>


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

	for (std::list<carta>::iterator it = Baraja_inglesa.begin(); it != Baraja_inglesa.end(); it++){
		this->push(*it);
			}



}
