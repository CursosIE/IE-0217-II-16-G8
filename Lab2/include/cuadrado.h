#ifndef CUADRADO_H
#define CUADRADO_H

#include "figura.h"

/**
 * Clase que representa un cuadrado.
 */
class Cuadrado: public Figura {
	public:
		/**
		 * Constructor por defecto.
		 * Crea un cuadrado de lado 3
		 */
		Cuadrado();

		/**
		 * Destructor por defecto.
		 */
		virtual ~Cuadrado();

		/**
		 * Calcula el área del cuadrado.
		 * @return El resultado del cálculo.
		 */
		virtual double area();

		/**
		 * Calcula el perímetro del cuadrado
		 * @return El resultado del cálculo.
		 */
		virtual double perimetro();

		/**
		 * Imprime los datos del cuadrado.
		 */
		void operator~ ();

		/**
		 * Imprime el area y el perimetro.
		 */
		void operator! ();

	private:
		double lado; /**< Longitud del lado del cuadrado. */

};

#endif
