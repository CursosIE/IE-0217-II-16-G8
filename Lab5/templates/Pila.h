#ifndef PILA_H
#define PILA_H

/**
 * Clase que representa una pila
 */

template <typename type_t>
class Pila {
	public:
		/**
		 * Constructor por defecto
		 */
		Pila(){};

		/* Constructor.
		 */
		Pila(const Pila& orig){};
		/**
		 * Destructor por defecto
		 */
		virtual ~Pila(){};

		/**
	 * Metodo virtual para obtener el dato en la cima de la pila.
	 * @return 0.
	 */
		virtual type_t top() const = 0;
		/**
	 * Metodo virtual para colocar otro elemento sobre la pila.
	 * @param element El elemento a colocar sobre la pila.
	 * @return 0.
	 */
		virtual void push(type_t element) = 0;
		/**
	 * Metodo virtual para sacar el elemento en la cima de la pila.
	 * @return 0.
	 */
		virtual type_t pop() = 0;
		/**
	 * Metodo virtual que retorna el numero de elementos en la pila.
	 * @return 0.
	 */
		virtual int size()const  = 0;
		/**
	 * Metodo virtual que indica sila pila está vacía o no.
	 * @return 0.
	 */
		virtual  bool empty() const = 0;
		/**
	 * Metodo que imprime los elementos de la pila.
	 * @return 0.
	 */
		virtual  void imprimir() const = 0;
};

#endif
