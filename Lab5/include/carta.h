#ifndef CARTA_H
#define CARTA_H

#include <iostream>

/**
 * Clase que representa una carta.
 */

using namespace std;

class carta
{
    public:
      /**
       * Constructor por defecto
       */
      carta();
      /* Constructor que recibe un char para asignar un valor a la carta.
  		 */
      carta(char symbol);
      /**
       * Destructor por defecto
       */
      virtual ~carta();
      /**
      * Metodo que retorna el valor de la carta segun las reglas del black jack.
      * @return value El valor de la carta.
      */
      int valor();


    private:
      friend std::ostream& operator<<(std::ostream& stream, const carta& c);

      int value; /**< El valor de la carta (entero del 2 al 11)*/
      char symbol; /**< El simbolo de la carta (AS, J, Q, K, 2, 3, etc) */
};

#endif // CARTA_H
