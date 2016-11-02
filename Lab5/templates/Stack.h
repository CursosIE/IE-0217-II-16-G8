#ifndef STACK_H
#define STACK_H

#include "Pila.h"
#include "LinkedNode.h"
#include <iostream>

template <typename type_t>
class Stack : public Pila<type_t> {

public:
  typedef LinkedNode<type_t> node_t;

  Stack(): m_top(0), m_bottom(0), m_size(0){};

  Stack(const Stack& orig){};

  virtual ~Stack(){
    clear();
  };

   type_t top()const{
    if (m_top) {
      return m_top->data;
    } else {
      std::cerr << "Trying to check m_top of empty stack." << std::endl;
      return type_t();
    }
  };


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

   int size()const{
    return m_size;
  };


  bool empty()const {
    return m_size == 0;
  };

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

  void imprimir()const {
	std::cout << "Stack con " << m_size << " elementos." << std::endl;
	node_t *it = m_top;
	for (int i = 0; i < m_size; i++) {
		std::cout << it->data << " ";
		it = it->prev;
	}
	std::cout << std::endl;

  };

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

  node_t* m_top;
  node_t* m_bottom;
  int m_size;

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

// int main(){Stack<char> mi_stack;
//            mi_stack.push('c');}
