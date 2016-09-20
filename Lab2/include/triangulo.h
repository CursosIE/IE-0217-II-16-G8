#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "figura.h"

/**
 * Clase que representa un triángulo.
 * Hereda de la clase figura.
 */
class Triangulo: public Figura {
	public:
		/**
		 * Constructor por defecto.
		 * Crea un triángulo de lados 3, 4 y 5.
		 */
		Triangulo();

		/**
		 * Constructor que recibe la longitud
		 * de los tres lados del triángulo.
		 * Verifica que los lados tengan una 
		 * longitud válida, de lo contrario imprime
		 * un mensaje de error y construye
		 * un triángulo de lados 3, 4 y 5.
		 * @param l1 Uno de los lados.
		 * @param l2 Uno de los lados.
		 * @param l3 Uno de los lados.
		 */
		Triangulo(double l1, double l2, double l3);

		/**
		 * Destructor por defecto.
		 */
		virtual ~Triangulo();

		/**
		 * Calcula el área del triángulo.
		 * @return El resultado del cálculo.
		 */
		virtual double area();

		/**
		 * Calcula el perímetro del triángulo.
		 * @return El resultado del cálculo.
		 */
		virtual double perimetro();

		/**
		 * Imprime los datos del triangulo.
		 */
		void operator~ ();

		/**
		 * Imprime el area y el perimetro.
		 */
		void operator! ();

	private:
		double lados[3]; /**< Longitud de los lados del triángulo */
		double gamma;    /**< Ángulo entre los primeros dos lados del triángulo */

		/**
		 * Función interna que determina el valor de \p gamma a partir de los lados
		 * del triángulo.
		 */
		void setGamma();

};

#endif
