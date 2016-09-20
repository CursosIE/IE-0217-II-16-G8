#ifndef FIGURA_H
#define FIGURA_H
#include <string>

class Figura{
	public:
		Figura();
		Figura(char* v_nombre, char* v_color);
		//Figura(const Figura &other);

		virtual ~Figura();

		// Figura& operator=(const Figura rhs);

		virtual double area();
		virtual double perimetro();

	protected:
		std::string nombre;
		std::string color;

};

#endif
