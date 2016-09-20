#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
	public:
		Fraccion();
		Fraccion(int num, int den);
		virtual ~Fraccion();

		Fraccion operator+(const Fraccion &other);
		Fraccion operator-(const Fraccion &other);
		Fraccion operator*(const Fraccion &other);
		Fraccion operator/(const Fraccion &other);
		void operator~ ();


	private:
		int numerador;
		int denominador;

};

#endif
