#include "fraccion.h"
#include "matriz.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	cout << "Fracciones: " << endl;
	Fraccion a(1,4), b(6,9), c(2,4);
	~a;
	~b;
	~c;

	cout << "a+b = ";
	c = a+b;
	~c;

	cout << "a*b = ";
	c = a*b;
	~c;

	cout << endl << "Probrando matrices: " << endl;

	Matriz m1(3,3), m2(3,2), m3(3,3);
	for (int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			m1.setAt(i,j, i+j);
			if (i == j)
				m3.setAt(i,j, 1);
		}
	
	}

	m2.setAt(0,0,4);
	m2.setAt(2,0,5);
	m2.setAt(0,1,-6);
	m2.setAt(2,1,7);

	cout << endl << "M1:" << endl;
	~m1;
	cout << endl << "M2:" << endl;
	~m2;
	cout << endl << "M3:" << endl;
	~m3;
	cout << endl;


	Matriz temp(1,2);
	temp = m1 + m3;
	cout << "M1 + M3" << endl;
	~temp;
	
	return 0;
}
