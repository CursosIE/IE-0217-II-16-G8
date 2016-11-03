#ifndef JUGADOR_H
#define JUGADOR_H

#include "PilaDeCartas.h"
#include "carta.h"
#include <list>

/**
 * Clase que representa a un jugador
 * sentada en alguna mesa del casino.
 */
class Jugador {
	public:
		/**
		 * Constructor por defecto.
		 */
		Jugador();

		/**
		 * Constructor que recibe el tipo de persona del jugador.
		 * @param tipo Caracter que representa el tipo de persona.
		 */
		Jugador(char tipo);

		/**
		 * Destructor por defecto.
		 */
		virtual ~Jugador();


		/**
		 * Reparte una carta al jugador, lo cual hace que aumente
		 * su puntaje por el valor correspondiente.
		 * @param c La carta que recibe el jugador.
		 */
		void repartir(carta c);

		/**
		 * Reinicia el puntaje del jugador (lo pone en cero).
		 */
		void reset();

		/**
		 * Indica los puntos de la mano del jugador.
		 * @return Cantidad de puntos que tiene.
		 */
		int puntos() const;

		/**
		 * Indica el tipo de persona que es el jugador.
		 * @return Tipo (E,T,D).
		 */
		char tipo() const;


		
	private:
		char m_tipo; /**<Caracter que representa el tipo de persona.*/
		int m_score; /**<Puntaje de la mano del jugador.*/

};

#endif 
