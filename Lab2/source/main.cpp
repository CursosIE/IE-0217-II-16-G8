#include "figura.h"
#include "triangulo.h"
#include "cuadrado.h"
#include "circulo.h"
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
	cout << "Creando un triángulo" << endl;
	Triangulo t(3, 4, 5);
	!t;
	~t;

	cout << "Creando otro triángulo, pero dinámico" << endl;
	Triangulo *t2 = new Triangulo(9, 15, 13);
	t2->setNombre("Triangulillo");
	t2->setColor("rojo");
	!(*t2);
	~(*t2);

	cout << "Creando cuadrado y circulo polimorfico" << endl;
	Figura *c = new Circulo();
	Figura *c2 = new Cuadrado();

	cout << "Area del circulo: " << c->area() << endl;
	cout << "Perímetro del circulo: " << c->perimetro() << endl;
	cout << "Area del cuadrado: " << c2->area() << endl;
	cout << "Perímetro del cuadrado: " << c2->perimetro() << endl;

	delete t2;
	delete c;
	delete c2;

	return 0;
}
