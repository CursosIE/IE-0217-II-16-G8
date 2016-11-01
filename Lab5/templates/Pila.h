#ifndef PILA_H
#define PILA_H

template <typename type_t>
class Pila {
	public:
		Pila(){};
		Pila(const Pila& orig){};
		virtual ~Pila(){};

		virtual type_t top() const{};

		virtual void push(type_t element) const{};
		virtual type_t pop()const{};

		virtual int size()const{};
		virtual  bool empty() const{};
		virtual  void imprimir() const{};
};

#endif
