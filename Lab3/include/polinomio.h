/************************************************
 * Luis Fernando Mora                           *
 * B24449                                       *
 * Estructuras Abstractas de Datos y Algoritmos *
 * II - 2016                                    *
 ************************************************/

#ifndef POLINOMIO_H
#define POLINOMIO_H

/**
 * Clase que representa un polinomio
 */

class Polinomio{
  public:

          /**
		      * Constructor por defecto
		      */
          Polinomio();
          /* Constructor que recibe el grado del polinomio. Crea un polinomio de grado n.
		      * @param n grado.
		      */
          Polinomio(int n);

          /**
      		* Constructor por copia
		      */
          Polinomio(const Polinomio &other);
          /**
		      * Destructor por defecto
		      */
          virtual ~Polinomio();

          /**
		      * Operador de suma.
		      * @param other El otro polinomio sumando.
		      * @return Polinomio con el resultado de la suma.
		      */
          Polinomio operator+(const Polinomio &other);

          /**
		      * Operador de resta.
		      * @param other El sustrayendo.
		      * @return Polinomio con el resultado de la resta.
		      */
          Polinomio operator-(const Polinomio &other);

          /**
		      * Operador de multiplicaión.
		      * @param other El otro multiplicando.
		      * @return Polinomio con el resultado.
		      */
          Polinomio operator*(const Polinomio &other);

          /**
		      * Operador de división.
		      * @param other El divisor.
		      * @return Polinomio con el resultado.
		      */
          Polinomio operator/(const Polinomio &other);

          /**
		      * Operador que imprime los coeficientes
		      * del polinomio, de mayor a menor.
		      */
          void operator~();

          /**
		      * Operador de asignación
		      */
          Polinomio& operator=(const Polinomio &other);

          /**
		      * Define el contenido del coeficiente
		      * en la posicion i del arreglo de coeficientes
		      */
          void setCoef(int i, double val);

private:
          int grado; /**< Grado del polinomio */
          double* coeficientes; /**< Coeficientes del Polinomio */
    };
#endif
