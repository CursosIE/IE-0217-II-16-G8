#ifndef CIRCULO_H
#define CIRCULO_H

#include "figura.h"

/**
 * Clase que representa un círculo.
 */
class Circulo: public Figura {
	public:
		/**
		 * Constructor por defecto.
		 * Crea un circulo de radio 1
		 */
		Circulo();

		/**
		 * Destructor por defecto.
		 */
		virtual ~Circulo();

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
		double radio; /**< Radio del círculo. */

};

#endif
