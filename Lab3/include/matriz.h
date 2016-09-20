#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz {
	public:
		Matriz();
		Matriz(int n, int m);
		Matriz(const Matriz& other);
		virtual ~Matriz();

		Matriz operator+(const Matriz &other);
		Matriz operator-(const Matriz &other);
		Matriz operator*(const Matriz &other);
		Matriz operator/(const Matriz &other);
		void operator~();
		Matriz& operator=(const Matriz &other);

		void setAt(int x, int y, double val);

	private:
		int n_size;
		int m_size;
		double *datos;

};

#endif
