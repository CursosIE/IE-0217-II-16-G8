#ifndef MESA_H
#define MESA_H

#include <list>
#include "PilaDeCartas.h"

class Mesa {
	public:
		Mesa();
		~Mesa();

		void sentar(const char &jugador);
		void play();
		void echar();

		int jugadores() const;
		bool llena() const;
		void imprimir() const;


		

	private:
		void inicializar()
		void turno();
		bool gameover();

		PilaDeCartas maso;
		std::list<Jugador> jugadores;
		
		
};

#endif
