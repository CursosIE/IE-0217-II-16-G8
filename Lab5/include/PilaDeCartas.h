#ifndef PILADECARTAS_H
#define PILADECARTAS_H

#include "Stack.h"
#include "carta.h"


using namespace std;

class PilaDeCartas: public Pila<carta>{

  typedef Stack<carta> StackDeCartas;
    public:
            PilaDeCartas(); // Hacer el mazo
            ~PilaDeCartas();

            void Barajar();

    private:

    StackDeCartas PilaCartas;

};

#endif
