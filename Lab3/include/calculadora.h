#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <string>

template <typename data>
class Calculadora{
	public:

		Calculadora();

		virtual add(const data &d1, const data &d2);
		virtual sub(const data &d1, const data &d2);
		virtual mul(const data &d1, const data &d2);
		virtual div(const data &d1, const data &d2);
		virtual print(const data &d);

		virtual ~Figura();

};

#endif
