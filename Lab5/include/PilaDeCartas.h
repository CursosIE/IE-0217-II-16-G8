#ifndef PILADECARTAS_H
#define PILADECARTAS_H

#include "Stack.h"
#include "carta.h"
#include "LinkedNode.h"
#include <list>


/**
 * Clase que hereda de Stack para representar una pila de cartas
 */
using namespace std;

class PilaDeCartas: public Stack<carta>{
  typedef LinkedNode<carta> node_t;

    public:

            /**
            * Constructor por defecto
            */
            PilaDeCartas();
            /**
             * Destructor por defecto
             */
            ~PilaDeCartas();
            /**
            * Metodo que baraja aleatoriamente las cartas que hayan en la pila de cartas.
            */
            void Shuffle();
	    void llenar();

    private:

           std::list<carta> Baraja_inglesa; /**< Lista de cartas en la baraja inglesa*/


};

#endif
