#ifndef COLA_H
#define COLA_H

template <typename type_t>
class Cola {
	public:
		Cola(){};
		Cola(const Cola& orig){};
		virtual ~Cola(){};

		virtual const type_t head() = 0;
		virtual const type_t tail() = 0;

		virtual void pushTail(const type_t &element) = 0;
		virtual type_t popHead() = 0;

		virtual const int size() = 0;
		virtual const bool empty() = 0;
		virtual const void imprimir() = 0;
};

#endif
