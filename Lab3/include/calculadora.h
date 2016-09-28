/************************************************
 * Luis Fernando Mora                           *
 * B24449                                       *
 * Estructuras Abstractas de Datos y Algoritmos *
 * II - 2016                                    *
 ************************************************/

#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <string>

/**
 * Template de una clase que representa un polinomio
 */
template <typename Data>
class Calculadora{
	public:

		/**
 		 * Constructor por defecto
 	 	 */
		Calculadora(){}

		/**
		* Destructor por defecto
		*/

		virtual ~Calculadora(){}

		/**
		* Metodo de suma.
		* @param d1 El primer objeto a sumar
		* @param d2 El segundo objeto a sumar
		* @return Suma de los dos objetos.
		*/
	Data add(Data &d1, const Data &d2) {
			return d1 + d2;
		}
		/**
		* Metodo de resta.
		* @param d1 El primer objeto a restar
		* @param d2 El segundo objeto a restar
		* @return Resta de los dos objetos.
		*/
	Data sub(Data &d1, const Data &d2) {
			return d1-d2;
		}
		/**
		* Metodo de multiplicacion.
		* @param d1 El primer objeto a multiplicar
		* @param d2 El segundo objeto a multiplicar
		* @return Producto de los dos objetos.
		*/
	Data mul(Data &d1, const Data &d2) {
			return d1*d2;
		}
		/**
		* Metodo de division.
		* @param d1 El numerador
		* @param d2 El denominador
		* @return Division de los dos objetos.
		*/
	Data div(Data &d1, const Data &d2) {
			return d1/d2;
		}
		/**
		* Metodo de impresion.
		* @param d1 El objeto a ser impreso
		*/
	Data print(Data &d1) {
		  ~d1;
		}

};

#endif
