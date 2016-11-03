#ifndef COLA_H
#define COLA_H

/**
 * Plantilla de una Cola genérica.
 * Define una interfaz para una cola.
 * @tparam type_t El tipo de datos que guarda la cola.
 */
template <typename type_t>
class Cola {
	public:
		/**
		 * Constructor.
		 */
		Cola(){};

		/**
		 * Constructor por copia.
		 */
		Cola(const Cola& orig){};

		/**
		 * Destructor.
		 */
		virtual ~Cola(){};

		/**
		 * Acceso al primer elemento o cabeza de la cola.
		 * @return El dato que contiene el primer elemento.
		 */
		virtual type_t head() const = 0;

		/**
		 * Acceso al último elemento de la cola.
		 * @return El dato que contiene el último elemento.
		 */
		virtual type_t tail() const = 0;

		/**
		 * Añadir un elemento a la cola.
		 * El elemento se agrega al final de la cola.
		 * @param element El elemento a añadir.
		 */
		virtual void pushTail(const type_t &element) = 0;

		/**
		 * Borrar un elemento de la cola.
		 * Elimina el elemento al principio de la cola.
		 * @return El elemento eliminado.
		 */
		virtual type_t popHead() = 0;

		/**
		 * Retorna el número de elementos de la cola.
		 * @return  El tamaño de la cola.
		 */
		virtual int size() const = 0;

		/**
		 * Indica si la cola está vacía.
		 * @return True si lo está, False de lo contrario.
		 */
		virtual bool empty() const = 0;

		/**
		 * Imprime a la salida estandar una representación
		 * textual de la cola.
		 */
		virtual void imprimir() const = 0;
};

#endif
