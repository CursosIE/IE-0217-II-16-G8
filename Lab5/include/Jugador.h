#ifndef JUGADOR_H
#define JUGADOR_H

#include "PilaDeCartas.h"
#include "carta.h"
#include <list>

class Jugador {
	public:
		Jugador();
		Jugador(char tipo);
		virtual ~Jugador();


		void repartir(carta c);
		void reset();
		int puntos() const;
		char tipo() const;


		
	private:
		char m_tipo;
		int m_score;

};

#endif 
