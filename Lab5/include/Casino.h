#ifndef CASINO_H
#define CASINO_H

#include "Mesa.h"
#include "PriorityQueue.h"
#include <iostream>

/**
 * Clase que representa a un Casino.
 * El casino tiene tres mesas, que pueden
 * tener un máximo de tres personas jugando
 * BlackJack. Además tiene tres colas para entrar
 * dependiendo del estatus económico (en adelante 'tipo')
 * de la persona, ya sea Empresario ('E'), Trabajador ('T') o
 * Desempleado ('D'). Las personas van entrando
 * de modo que se da mayor prioridad a los empresarios,
 * luego a los trabajadores y por último a los desempleados.
 * Además, los campos en las mesas se van liberando a como
 * las personas vayan perdiendo.
 */
class Casino {

	public:
		/**
		 * Constructor por defecto
		 */
		Casino();

		/**
		 * Destructor por defecto
		 */
		virtual~Casino();

		/**
		 * Añadir una persona a la cola de entrada.
		 * Se añade automáticamente a la cola respectiva.
		 * Si no tiene un tipo válido no puede hacer fila
		 * pues el gorila (portero) lo rechaza.
		 * @param p Tipo de persona.
		 */
		void encolar(char p);

		/**
		 * Hace los movimientos internos de gente entre partidas.
		 * Primero echan a todos los jugadores que perdieron y luego
		 * llena las mesas con las personas en las colas hasta que 
		 * las 3 mesas estén llenas o no haya más gente haciendo fila.
		 */
		void moverGente();

		/**
		 * Pone a correr las partidas en las tres mesas.
		 */
		void correr();

		/**
		 * Imprime información del casino.
		 * Indica las personas en cola e imprime
		 * recursivamente información de las mesas.
		 */
		void imprimir();

		/**
		 * Indica si aún hay gente en el casino
		 * o haciendo fila para entrar
		 * @return True si hay gente.
		 */
		bool hayGente();

	private:

		PriorityQueue<char> colas[3]; /**<Las colas para entrar al casino.*/
		Mesa mesas[3]; /**<Las mesas donde se pueden sentar a jugar las personas.*/
		int cuenta;
		
		/**
		 * Indica si hay gente haciendo fila.
		 * @return True si al menos una cola no está vacía.
		 */
		bool hayFila();
		

};

#endif
