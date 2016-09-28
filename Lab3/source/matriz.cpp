#include "matriz.h"
#include <iostream>

Matriz::Matriz():
	n_size(0), m_size(0), datos(nullptr)
{
	//std::cout << this << " ha nacido al mundo por defecto." << std::endl;
	//datos = new double[1];
	//datos = 0;

}

Matriz::Matriz(int n, int m):
	n_size(n), m_size(m), datos(nullptr)
{
	//std::cout << this << " ha nacido al mundo." << std::endl;
	if (n < 1 || m < 1) {
		//throw std::exception("Ilegal size for matrix");
		std::cerr << "Error de tamaño" << std::endl;
	} else {
		datos = new double[n*m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				datos[i*m_size + j] = 0;
			}
		}
	}
}

Matriz::Matriz(const Matriz& other):
	n_size(other.n_size), m_size(other.m_size), datos(nullptr)
{
	datos = new double[n_size*m_size];
	for (int i = 0; i < n_size; i++) {
		for (int j = 0; j < m_size ; j++) {
			datos[i*m_size + j] = other.datos[i*m_size + j];
		}
	}
}



Matriz::~Matriz() {
	//std::cout << this << " fue enviado al avismo." << std::endl;
	//std::cout << "Desctructor... " << datos << std::endl;
	if (datos) {
		delete[] datos;
		datos = nullptr;
	}
}

Matriz Matriz::operator+(const Matriz &other) {
	if (other.n_size != n_size || other.m_size != m_size) {
		std::cerr << "Error de tamaño" << std::endl;
		return Matriz();
	}

	Matriz nueva(n_size, m_size);

	for (int i = 0; i < n_size; i++) {
		for (int j = 0; j < m_size; j++) {
			nueva.datos[i*m_size + j] = datos[i*m_size + j] + other.datos[i*m_size + j];
		}
	}

	return nueva;
}


Matriz Matriz::operator-(const Matriz &other) {
	if (other.n_size != n_size || other.m_size != m_size) {
		std::cerr << "Error de tamaño" << std::endl;
		return Matriz();
	}

	Matriz nueva(n_size, m_size);

	for (int i = 0; i < n_size; i++) {
		for (int j = 0; j < m_size; j++) {
			nueva.datos[i*m_size + j] = datos[i*m_size + j] - other.datos[i*m_size + j];
		}
	}

	return nueva;
}


Matriz Matriz::operator*(const Matriz &other) {
	if (m_size != other.n_size) {
		std::cerr << "Error de tamaño" << std::endl;
		return Matriz();
	}

	Matriz nueva(n_size, other.m_size);

	for (int i = 0; i < nueva.n_size; i++) {
		for (int j = 0; j < nueva.m_size; j++) {
			double temp = 0;
			for (int x = 0; x < m_size; x++) {
				temp += datos[i*m_size + x] * other.datos[x*other.m_size + j];
			}
			nueva.datos[i*nueva.m_size + j] = temp;
		}
	}

	return nueva;
}

Matriz Matriz::operator/(const Matriz &other) {
	if (other.n_size != n_size || other.m_size != m_size) {
		std::cerr << "Error de tamaño" << std::endl;
		return Matriz();
	}

	Matriz nueva(n_size, m_size);

	for (int i = 0; i < n_size; i++) {
		for (int j = 0; j < m_size; j++) {
			nueva.datos[i*m_size + j] = datos[i*m_size + j] / other.datos[i*m_size + j];
		}
	}
	
	return nueva;
}

void Matriz::operator~() {
	for (int i = 0; i < n_size; i++) {
		for (int j = 0; j < m_size; j++) {
			std::cout << datos[i*m_size + j];
			std::cout << "  ";
		}
		std::cout << std::endl;
	}
}

Matriz& Matriz::operator=(const Matriz &other) {
	if (datos) {
		//std::cout << "Operador = , " << datos << std::endl;
		delete[] datos;
		datos = nullptr;
	}
	n_size = other.n_size;
	m_size = other.m_size;
	datos = new double[other.n_size*other.m_size];
	for (int i = 0; i < other.n_size; i++) {
		for (int j = 0; j < other.m_size; j++) {
			datos[i*m_size + j] = other.datos[i*other.m_size + j];
		}
	}
	return *this;
}

void Matriz::setAt(int x, int y, double val) {
	if (x < n_size && y < m_size) {
		datos[x*m_size + y] = val;
	}
}

