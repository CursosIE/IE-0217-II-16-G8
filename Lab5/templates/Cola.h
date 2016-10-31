#ifndef COLA_H
#define COLA_H

template <typename type_t>
class Cola {
	public:
		Cola(){};
		Cola(const Cola& orig){};
		virtual ~Cola(){};

		virtual type_t head() const = 0;
		virtual type_t tail() const = 0;

		virtual void pushTail(const type_t &element) = 0;
		virtual type_t popHead() = 0;

		virtual int size() const = 0;
		virtual bool empty() const = 0;
		virtual void imprimir() const = 0;
};

#endif
