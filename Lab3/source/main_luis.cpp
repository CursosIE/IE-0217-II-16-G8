#include "polinomio.h"
#include "fraccion.h"
#include "matriz.h"
#include "calculadora.h"

using namespace std;

int main(int argc, char* argv[]){

      // Calculadoras

      Calculadora<Polinomio> calcupolinomio;
      Calculadora<Fraccion> calcuFraccion;
      Calculadora<Matriz> calcuMatriz;

      // Prueba con los polinomios

      Polinomio p1(3);
      Polinomio p2(2);
      Polinomio p3(0);
      Polinomio p4(0);
      Polinomio p5(0);
      Polinomio p6(0);


      p3 = calcupolinomio.add(p1,p2);
      p4 = calcupolinomio.sub(p1,p2);
      p5 = calcupolinomio.mul(p1,p2);
      p6 = calcupolinomio.div(p1,p2);

      ~p3;
      ~p4;
      ~p5;
      ~p6;

      // Prueba con matrices

      Matriz  m1(3,3);
      Matriz  m2(3,3);
      Matriz  m3;
      Matriz  m4;
      Matriz  m5;
      Matriz  m6;


      m3 = calcuMatriz.add(m1,m2);
      m4 = calcuMatriz.sub(m1,m2);
      m5 = calcuMatriz.mul(m1,m2);
      m6 = calcuMatriz.div(m1,m2);

      ~m3;
      ~m4;
      ~m5;
      ~m6;

      // Prueba con fracciones

      Fraccion  f1(6,4);
      Fraccion  f2(1,2);

      Fraccion  f3;
      Fraccion  f4;
      Fraccion  f5;
      Fraccion  f6;

      f3 = calcuFraccion.add(f1,f2);
      f4 = calcuFraccion.sub(f1,f2);
      f5 = calcuFraccion.mul(f1,f2);
      f6 = calcuFraccion.div(f1,f2);

      ~f3;
      ~f4;
      ~f5;
      ~f6;

return 0;
}
