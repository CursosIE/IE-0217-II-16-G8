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
      std::cerr << "Trying to check m_head of empty queue." << std::endl;
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

  void imprimir()const {};

protected:

  node_t* m_top;
  node_t* m_bottom;
  int m_size;

  void clear(){
    node_t* it;
    it = m_top;
    if (it != 0) {
      while (it->next != 0) {
        it = it->next;
        delete it->prev;
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
