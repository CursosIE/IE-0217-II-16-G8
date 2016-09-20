#ifndef POLINOMIO_H
#define POLINOMIO_H

class Polinomio{
  public:
          Polinomio();
          Polinomio(int grad, double* coef);
          Polinomio~();

          Polinomio operator+(double* coeficientes1, double* coeficientes2);
          Polinomio operator-(double* coeficientes1, double* coeficientes2);
          Polinomio operator*(double* coeficientes1, double* coeficientes2);
          Polinomio operator/(double* coeficientes1, double* coeficientes2);
          Polinomio operator~();

  private:
          int grado;
          double* coeficientes;

}
