#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <string>

template <typename Data>
class Calculadora{
	public:

		Calculadora(){}
		virtual ~Calculadora(){}

	Data add(Data &d1, const Data &d2) {
			return d1 + d2;
		}
	Data sub(Data &d1, const Data &d2) {
			return d1-d2;
		}

	Data mul(Data &d1, const Data &d2) {
			return d1*d2;
		}

	Data div(Data &d1, const Data &d2) {
			return d1/d2;
		}

	Data print(Data &d1) {
		  ~d1;
		}

};

#endif
