#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "Cola.h"
#include "LinkedNode.h"
#include <iostream> 

template <typename type_t>
class PriorityQueue : public Cola<type_t> {
	public:
		typedef LinkedNode<type_t> node_t;
		PriorityQueue(): m_head(0), m_tail(0), m_size(0){};
		PriorityQueue(const PriorityQueue& orig){};
		virtual ~PriorityQueue(){
			clear();
		};

		type_t head() const{
			if (m_head) {
				return m_head->data;
			} else {
				std::cerr << "Trying to check m_head of empty queue." << std::endl;
				return type_t();
			}
		};

		type_t tail() const{
			if (m_tail) {
				return m_tail->data;
			} else {
				std::cerr << "Trying to check m_tail of empty queue." << std::endl;
				return type_t();
			}
		};

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

		int size() const{
			return m_size;
		};


		bool empty() const{
			return m_size == 0;
		};

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

		node_t* m_head;
		node_t* m_tail;
		int m_size;

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
