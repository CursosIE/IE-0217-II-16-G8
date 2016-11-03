#ifndef STACK_H
#define STACK_H

#include "Pila.h"
#include "LinkedNode.h"
#include <iostream>


/**
 * Clase que implementa una pila
 */

template <typename type_t>
class Stack : public Pila<type_t> {

public:
  typedef LinkedNode<type_t> node_t;

  /**
   * Constructor por defecto - Inicia el tamaño y punteros de los nodos de la pila en cero.
   */

  Stack(): m_top(0), m_bottom(0), m_size(0){};
  /**
   * Constructor.
   */
  Stack(const Stack& orig){};
  /**
   * Destructor - Llama al método clear para borrar lo que haya en la pila.
   */
  virtual ~Stack(){
    clear();
  };

  /**
  * Metodo que retorna el primer elemento de la pila.
  * @return data El elemento en la cima de la pila.
  */
   type_t top()const{
    if (m_top) {
      return m_top->data;
    } else {
      std::cerr << "Trying to check m_top of empty stack." << std::endl;
      return type_t();
    }
  };

  /**
  * Metodo para colocar un elemento sobre la pila.
  * @param element El elemento a colocar sobre la pila.
  * @return 0.
  */
  void push(type_t element){
    if (m_size == 0) {
      m_top = new node_t(0, 0, element);
      m_bottom = m_top;
      m_size++;
      return;
    }

    node_t *nuevo = new node_t(m_top, 0, element);
    m_top->next = nuevo;
    m_top = nuevo;
    m_size++;
    return;
  };

  /**
 * Metodo virtual para sacar el elemento encima de la pila.
 * @return data El elemento encima de la pila.
 */
  type_t pop(){
    if (m_size == 0) {
      std::cerr << "Trying to pop empty stack." << std::endl;
      return type_t();
    }

    type_t data(m_top->data);

    if (m_size == 1) {
      delete m_top;
      m_top = 0;
      m_bottom = 0;
      m_size--;
      return data;
    }

    m_top = m_top->prev;
    delete m_top->next;
    m_top->next = 0;
    m_size--;
    return data;
  };

  /**
 * Metodo que retorna el numero de elementos en la pila.
 * @return m_size El número de elementos en la pila.
 */

   int size()const{
    return m_size;
  };

  /**
  * Metodo que indica sila pila está vacía o no.
  * @return 1 si el tamaño es cero, 0 de lo contrario.
  */
  bool empty()const {
    return m_size == 0;
  };

 /**
 * Metodo que imprime los punteros de los nodos de la pila.
 * Indica si el puntero en la cima no es nulo, lo cual indica un bug.
 */

  void deb_imprimir() const {
	std::cerr << "Stack, m_size " << m_size << ", top: " << m_top << ", bottom: " << m_bottom << std::endl;
	node_t *it = m_top;
	if (m_top) {
		if (m_top->next) {
		std::cout << "wtf top is drunk" << m_top->next << std::endl;
		}
	}

	for (int i = 0; i < m_size; i++) {
		std::cout << it << " >> ";
		it = it->prev;
	}
	if (it)
		std::cout << it->prev;
	std::cout << std::endl;
  }

/**
 * Metodo que imprime los elementos de la pila.
 */

  void imprimir()const {
	std::cout << "Stack con " << m_size << " elementos." << std::endl;
	node_t *it = m_top;
	for (int i = 0; i < m_size; i++) {
		std::cout << it->data << " ";
		it = it->prev;
	}
	std::cout << std::endl;

  };


  /**
   * Metodo que imprime los elementos de la pila al revez.
   */

  void reverse_imprimir() const {
	std::cout << "Stack con " << m_size << " elementos, al verris." << std::endl;
	node_t *it = m_bottom;
	for (int i = 0; i < m_size; i++) {
		std::cout << it->data << " ";
		it = it->next;
	}
	std::cout << std::endl;
  };

// protected:

  node_t* m_top; /**< Puntero al elemento encima de la pila */
  node_t* m_bottom; /**< Puntero al elemento al fondo de la pila */
  int m_size; /**< Tamano de la pila */



  /**
   * Metodo protegido que borra los elementos de la pila.
   * Despues de borrar, inicia en cero las variables de la pila.  
   */

  void clear(){
    node_t* it;
    it = m_top;
    if (it != 0) {
      while (it->prev != 0) {
        it = it->prev;
        delete it->next;
      }
      delete it;
    }

    m_size = 0;
    m_top = 0;
    m_bottom = 0;
    return;
  }

};

#endif
