#ifndef MESA_H
#define MESA_H

#include <list>
#include "PilaDeCartas.h"
#include "Jugador.h"

/**
 * Clase Mesa del casino.
 * Representa a una mesa dentro
 * del casino. Puede tener hasta
 * tres jugadores por partida de BlackJack.
 */
class Mesa {
	public:
		/**
		 * Constructor por defecto.
		 */
		Mesa();

		/**
		 * Destructor por defecto.
		 */
		virtual ~Mesa();

		/**
		 * Crea un nuevo jugador a partir del
		 * argumento y lo agrega a la lista
		 * de jugadores.
		 * @param jugador Caracter que representa el
		 * tipo de persona.
		 */
		void sentar(const char &jugador);

		/**
		 * Juega la partida de BlackJack.
		 * La partida se acaba cuando todos
		 * los jugadores perdieron o ganaron,
		 * esta condicion se define en el método
		 * gameover(). Mientras no se cumpla esta
		 * condición, el dealer sigue entregando
		 * cartas los jugadores que así lo pidan.
		 * Un jugador pide una carta siempre que su
		 * puntaje sea menor a 19.
		 */
		void play();

		/**
		 * Elimina a los jugadores con puntajes
		 * mayores a 21, es decir los que perdieron
		 * esa ronda.
		 */
		void echar();

		/**
		 * Retorna el numero de jugadores
		 * sentados en la mesa.
		 * @return Valor entero del tamaño de la lista de jugadores.
		 */
		int num_jugadores() const;

		/**
		 * Indica si la mesa se encuentra llena.
		 * Una mesa se encuentra llena si tiene 3 jugadores.
		 * @return Valor booleano.
		 */
		bool llena() const;

		/**
		 * Imprime la información del estado actual de la mesa.
		 * Imprime la cantidad de jugadores, y para cada jugador
		 * el tipo de persona y su puntaje actual.
		 */
		void imprimir() const;


		

	private:
		/**
		 * Inicia los prerequisitos de la partida.
		 * Revuelve el maso de cartas y ponen en cero
		 * los puntajes de los jugadores.
		 */
		void inicializar();
		
		/**
		 * Indica si la partida ha terminado.
		 * La partida termina cuando todos los jugadores tienen un
		 * puntaje superior a 19.
		 * @return Retorna true si la partida terminó.
		 */
		bool gameover() const;

		//PilaDummy maso;
		PilaDeCartas maso; /**<Maso de cartas de la mesa*/
		std::list<Jugador> jugadores; /**<Jugadores de la mesa, implementado como una lista de tipo Jugador*/
		
		
};

#endif
