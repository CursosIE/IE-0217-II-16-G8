#include "polinomio.h"
#include <iostream>

using namespace std;

Polinomio::Polinomio():grado(1){
            coeficientes = new double [1];
            coeficientes[0] = 0;
};

Polinomio::Polinomio(int n):grado(n){
            coeficientes = new double[n+1];
            for(int i = 0; i<n+1; i++){
              coeficientes[i] = 0;
            }

}

Polinomio::Polinomio(const Polinomio& other):
            grado(other.grado), coeficientes(0){
            coeficientes = new double[grado+1];
            for(int i = 0; i<grado+1; i++){
              coeficientes[i] = other.coeficientes[i];
            }

}

Polinomio::~Polinomio(){
};


void Polinomio::setCoef(int n_i, double val){

        if(n_i < grado+1) {
                  coeficientes[n_i] = val;
        } else cerr << "El grado que intenta asignar es mayor que el grado del polinomio!" << endl;

}


Polinomio Polinomio::operator+(const Polinomio &other){

  int grado_mayor = max(grado,other.grado);
  int grado_menor = min(grado, other.grado);

  Polinomio suma(grado_mayor);
  Polinomio temp(grado_mayor);

  if(grado>other.grado){
    for(int a = 0; a < grado+1; a++){
      suma.coeficientes[a] = coeficientes[a];}
    }
  else{  for(int b = 0; b < other.grado+1; b++){
      suma.coeficientes[b] = other.coeficientes[b];
          }
        }

    for(int i = 0; i < grado_menor+1; i++){
        temp.coeficientes[i] = coeficientes[i]+other.coeficientes[i];
        suma.coeficientes[i] = temp.coeficientes[i];
      }

  return suma;
}

Polinomio Polinomio::operator-(const Polinomio &other){

  int grado_mayor = max(grado,other.grado);
  int grado_menor = min(grado, other.grado);

  Polinomio resta(grado_mayor);
  Polinomio temp(grado_mayor);

  if(grado>other.grado){
    for(int a = 0; a < grado+1; a++){
      resta.coeficientes[a] = coeficientes[a];}
    }
  else{  for(int b = 0; b < other.grado+1; b++){
      resta.coeficientes[b] = other.coeficientes[b];
          }
        }

    for(int i = 0; i < grado_menor+1; i++){
        temp.coeficientes[i] = coeficientes[i]-other.coeficientes[i];
        resta.coeficientes[i] = temp.coeficientes[i];
      }

  return resta;
}

Polinomio& Polinomio::operator=(const Polinomio &other){

        if(coeficientes){
              delete[] coeficientes;
              coeficientes = 0;
        }

        grado = other.grado;
        coeficientes = new double[other.grado+1];
        for(int i = 0; i<other.grado+1; i++){
                coeficientes[i] = other.coeficientes[i];

        }

}

Polinomio Polinomio::operator*(const Polinomio &other){

  int nuevo_grado = grado+other.grado;
  int n = grado;
  int m = other.grado;

  Polinomio producto(nuevo_grado);

  for(int i = 0; i < n+1; i++){

  Polinomio temp(nuevo_grado);
      for(int j = 0; j<m+1; j++){
                temp.coeficientes[m+n-i-j] = coeficientes[n-i]*other.coeficientes[m-j];

      }
    producto = producto + temp;
  }
  return producto;
}

Polinomio Polinomio::operator/(const Polinomio &other){

      if(grado < other.grado){
        std::cerr << "No se puede dividir un polinomio de grado menor entre uno de grado mayor" << std::endl;
      }
      else{
        int n = grado;
        int m = other.grado;
        Polinomio cociente(n-m);
        Polinomio resta(n);

        for(int a = 0; a<n+1; a++){
          resta.coeficientes[a] = coeficientes[a];
          }

        for(int i = 0; i<n-m+1; i++){
              cociente.coeficientes[n-m-i] = resta.coeficientes[n-i]/other.coeficientes[m];
              for(int j = 0; j < m+1; j++){
                    Polinomio temp(n-i);
                    temp.coeficientes[n-j] = cociente.coeficientes[n-m-i]*other.coeficientes[m-j];
                    resta  = resta - temp;
              }
      }
        return cociente;
      }
}

void Polinomio::operator~(){

    for(int i = 0; i < grado+1; i++){
      std::cout << coeficientes[grado-i];
			std::cout << " ";
    }
    std::cout << "\n";

}
