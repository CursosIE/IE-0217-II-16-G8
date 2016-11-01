#ifndef JUGADOR_H
#define JUGADOR_H

#include "PilaDeCartas.h"
#include "carta.h"
#include <list>

class Jugador {
	public:
		Jugador();
		Jugador(char tipo);
		~Jugador();


		void repartir(carta c);
		void reset();
		int suma() const;


		
	private:
		char m_tipo;
		int m_score;

};

#endif 
