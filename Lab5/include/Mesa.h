#ifndef MESA_H
#define MESA_H

#include <list>
#include "PilaDeCartas.h"
#include "Jugador.h"

class Mesa {
	public:
		Mesa();
		virtual ~Mesa();

		void sentar(const char &jugador);
		void play();
		void echar();

		int num_jugadores() const;
		bool llena() const;
		void imprimir() const;


		

	private:
		void inicializar();
		bool gameover() const;

		//PilaDummy maso;
		PilaDeCartas maso;
		std::list<Jugador> jugadores;
		
		
};

#endif
