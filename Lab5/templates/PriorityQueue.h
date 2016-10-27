#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "Cola.h"
#include "LinkedNode.h"

template <typename type_t>
class PriorityQueue : public Cola<type_t> {
	typename LinkedNode<type_t> node_t;
	public:
		PriorityQueue(): head(0), tail(0), size(0){};
		PriorityQueue(const PriorityQueue& orig){};
		virtual ~PriorityQueue(){
			clear();
		};

		const type_t head(){
			if (head) {
				return head->data;
			} else {
				std::cerr << "Trying to check head of empty queue." << std::endl;
				return type_t();
			}
		};

		const type_t tail(){
			if (tail) {
				return tail->data;
			} else {
				std::cerr << "Trying to check tail of empty queue." << std::endl;
				return type_t();
			}
		};

		void pushTail(type_t element){
			if (size == 0) {
				head = new node_t(0, 0, element);
				tail = head;
				size++;
				return;
			}

			node_t *nuevo = new node_t(tail, 0, element);
			tail->next = nuevo;
			tail = nuevo;
			size++;
			return;
		};

		type_t popHead(){
			if (size == 0) {
				std::cerr << "Trying to pop tail of empty queue." << std::endl;
				return type_t();
			}

			type_t data(head->data);

			if (size == 1) {
				delete head;
				head = 0;
				tail = 0;
				size--;
				return data;
			}

			head = head->next;
			delete head->prev;
			head->prev = 0;
			size--;
			return data;
		};

		const int size(){
			return size;
		};


		const bool empty(){
			return size == 0;
		}

		const void imprimir(){};

	protected:
		node_t *head;
		node_t *tail;
		int size;

		void clear(){
			node_t *it;
			it = head;
			if (it != 0) {
				while (it->next != 0) {
					it = it->next;
					delete it->prev;
				}
				delete it;
			}

			size = 0;
			head = 0;
			tail = 0;
			return;
		}

};

#endif
