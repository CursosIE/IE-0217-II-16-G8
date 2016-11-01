#ifndef PILADECARTAS_H
#define PILADECARTAS_H

#include "Stack.h"
#include "carta.h"
#include "LinkedNode.h"


using namespace std;

class PilaDeCartas: public Stack<carta>{
  typedef LinkedNode<carta> node_t;

    public:
            PilaDeCartas();
            ~PilaDeCartas();

            void Barajar()const{};

    private:

    Stack<carta> Baraja_inglesa;


};

#endif
