#ifndef PILA_H
#define PILA_H

template <typename type_t>
class Pila {
	public:
		Pila();
		Pila(const Pila& orig);
		virtual ~Pila();

		virtual const type_t top() = 0;
		virtual const type_t bottom() = 0;

		virtual void push(type_t element) = 0;
		virtual type_t pop() = 0;

		virtual const int size() = 0;
		virtual const bool empty() = 0;
		virtual const void imprimir() = 0;
};

#endif
