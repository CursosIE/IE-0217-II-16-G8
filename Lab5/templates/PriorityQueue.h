#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "Cola.h"
#include "LinkedNode.h"
#include <iostream> 

/**
 * Plantilla de una Cola con prioridad.
 * La cola utiliza nodos doblemente enlazados.
 * @tparam type_t El tipo de datos que guarda la cola.
 */
template <typename type_t>
class PriorityQueue : public Cola<type_t> {
	public:
		typedef LinkedNode<type_t> node_t;

		/**
		 * Constructor por defecto.
		 */
		PriorityQueue(): m_head(0), m_tail(0), m_size(0){};

		PriorityQueue(const PriorityQueue& orig){};

		/**
		 * Destructor por defecto.
		 */
		virtual ~PriorityQueue(){
			clear();
		};

		/**
		 * Elemento a la cabeza de la cola.
		 * Si la cola está vacía el comportamiento
		 * es indefinido.
		 * @return El elemento.
		 */
		type_t head() const{
			if (m_head) {
				return m_head->data;
			} else {
				std::cerr << "Trying to check m_head of empty queue." << std::endl;
				return type_t();
			}
		};

		/**
		 * Elemento al final de la cola.
		 * Si la cola está vacía el comportamiento
		 * es indefinido.
		 * @return El elemento
		 */
		type_t tail() const{
			if (m_tail) {
				return m_tail->data;
			} else {
				std::cerr << "Trying to check m_tail of empty queue." << std::endl;
				return type_t();
			}
		};

		/**
		 * Agrega un elemento al final de la cola.
		 * Crea un nuevo nodo que contenga al elemento
		 * y lo enlaza al final de la cola.
		 * @param element El elemento que se agrega.
		 */
		void pushTail(const type_t &element){
			if (m_size == 0) {
				m_head = new node_t(0, 0, element);
				m_tail = m_head;
				m_size++;
				return;
			}

			node_t *nuevo = new node_t(m_tail, 0, element);
			m_tail->next = nuevo;
			m_tail = nuevo;
			m_size++;
			return;
		};

		/**
		 * Saca el elemento que está de primero en la cola.
		 * Retorna este elemento y luego lo elimina de la
		 * cola. Si la cola está vacía su comportamiento
		 * es indefinido.
		 * @return El primer elemento de la cola.
		 */
		type_t popHead(){
			if (m_size == 0) {
				std::cerr << "Trying to pop m_tail of empty queue." << std::endl;
				return type_t();
			}

			type_t data(m_head->data);

			if (m_size == 1) {
				delete m_head;
				m_head = 0;
				m_tail = 0;
				m_size--;
				return data;
			}

			m_head = m_head->next;
			delete m_head->prev;
			m_head->prev = 0;
			m_size--;
			return data;
		};

		/**
		 * Retorna el tamaño de la cola.
		 * @return La cantidad de elementos de la cola.
		 */
		int size() const{
			return m_size;
		};


		/**
		 * Indica si la cola se encuentra vacía.
		 * @return True si está vacía.
		 */
		bool empty() const{
			return m_size == 0;
		};

		/**
		 * Imprime información de la cola.
		 * Indica la cantidad de elementos y luego 
		 * imprime los elementos separados por espacios.
		 * El tipo de la plantilla (type_t) debe definir
		 * el operador '<<' para poder concatenar al 
		 * stream std::cout, de lo contrario habrá un error
		 * de compilación.
		 */
		void imprimir() const{
			std::cout << "Cola de prioridad con " << m_size << " elementos." << std::endl;
			node_t *it = m_head;
			for (int i = 0; i < m_size; i++) {
				std::cout << it->data << " ";
				it = it->next;
			}
			std::cout << std::endl;
		};

	protected:

		node_t* m_head; /**<Puntero al nodo que contiene el primer elemento de la cola.*/
		node_t* m_tail; /**<Puntero al nodo que tiene el último elemento de la cola.*/
		int m_size; /**<Cantidad de elementos en la cola.*/

		/**
		 * Borra todos los elementos de la cola y deja su tamaño en cero.
		 */
		void clear(){
			node_t* it;
			it = m_head;
			if (it != 0) {
				while (it->next != 0) {
					it = it->next;
					delete it->prev;
				}
				delete it;
			}

			m_size = 0;
			m_head = 0;
			m_tail = 0;
			return;
		}

};

#endif
