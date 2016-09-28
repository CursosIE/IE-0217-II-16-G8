/************************************************
 * Daniel Díaz Molina                           *
 * B22245                                       *
 * Estructuras Abstractas de Datos y Algoritmos *
 * II - 2016                                    *
 ************************************************/

#ifndef MATRIZ_H
#define MATRIZ_H

/**
 * Clase que representa una matriz
 */
class Matriz {
	public:
		/**
		 * Constructor por defecto
		 */
		Matriz();

		/* Constructor que recibe el tamaño de la matriz. Crea una matriz n por m.
		 * @param n Filas.
		 * @param m Columnas.
		 */
		Matriz(int n, int m);

		/**
		 * Constructor por copia
		 */
		Matriz(const Matriz &other);

		/**
		 * Destructor por defecto
		 */
		virtual ~Matriz();

		/**
		 * Operador de suma.
		 * @param other El otro sumando.
		 * @return Matriz con el resultado.
		 */
		Matriz operator+(const Matriz &other);

		/**
		 * Operador de resta.
		 * @param other El sustrayendo.
		 * @return Matriz con el resultado.
		 */
		Matriz operator-(const Matriz &other);
	
		/**
		 * Operador de multiplicaión.
		 * @param other El otro multiplicando.
		 * @return Matriz con el resultado.
		 */
		Matriz operator*(const Matriz &other);

		/**
		 * Operador de división.
		 * @param other El divisor.
		 * @return Matriz con el resultado.
		 */
		Matriz operator/(const Matriz &other);

		/**
		 * Operador que imprime en pantalla la 
		 * matriz.
		 */
		void operator~();
		
		/**
		 * Operador de asignación
		 */
		Matriz& operator=(const Matriz &other);

		/**
		 * Define el contenido de la posición 
		 * (x,y) de la matriz.
		 */
		void setAt(int x, int y, double val);

	private:
		int n_size; /**< Filas */
		int m_size; /**< Columnas */
		double *datos; /**< Arreglo con los datos de la matriz */

};

#endif
