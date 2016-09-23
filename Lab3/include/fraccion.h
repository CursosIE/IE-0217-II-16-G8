/************************************************
 * Daniel Díaz Molina                           *
 * B22245                                       *
 * Estructuras Abstractas de Datos y Algoritmos *
 * II - 2016                                    *
 ************************************************/

#ifndef FRACCION_H
#define FRACCION_H

/**
 * Clase que representa una fracción
 */
class Fraccion {
	public:
		/**
		 * Constructor por defecto.
		 * Crea una fracción 1/1.
		 */
		Fraccion();

		/**
		 * Constructor que recibe el numerador y denominador de la fracción.
		 * @param num Numerador
		 * @param den Denominador
		 */
		Fraccion(int num, int den);

		/**
		 * Desctructor por defecto
		 */
		virtual ~Fraccion();

		/**
		 * Operador de suma.
		 * @param other El otro sumando.
		 * @return Fracción con el resultado.
		 */
		Fraccion operator+(const Fraccion &other);

		/**
		 * Operador de resta.
		 * @param other El sustrayendo.
		 * @return Fracción con el resultado.
		 */
		Fraccion operator-(const Fraccion &other);

		/**
		 * Operador de multiplicaión.
		 * @param other El otro multiplicando.
		 * @return Fracción con el resultado.
		 */
		Fraccion operator*(const Fraccion &other);

		/**
		 * Operador de división.
		 * @param other El divisor.
		 * @return Fracción con el resultado.
		 */
		Fraccion operator/(const Fraccion &other);

		/**
		 * Operador que imprime en pantalla la 
		 * fracción.
		 */
		void operator~ ();


	private:
		int numerador; /**< Numerador de la fracción. */
		int denominador; /**< Denominador de la fracción. */

};

#endif
