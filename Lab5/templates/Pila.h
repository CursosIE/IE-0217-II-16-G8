#ifndef PILA_H
#define PILA_H

template <typename type_t>
class Pila {
	public:
		Pila(){};
		Pila(const Pila& orig){};
		virtual ~Pila(){};

		virtual type_t top() const = 0;

		virtual void push(type_t element) = 0;
		virtual type_t pop() = 0;

		virtual int size()const  = 0;
		virtual  bool empty() const = 0;
		virtual  void imprimir() const = 0;
};

#endif
