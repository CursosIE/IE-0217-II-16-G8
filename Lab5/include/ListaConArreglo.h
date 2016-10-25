
#ifndef LISTACONARREGLO_H
#define LISTACONARREGLO_H
#include <iostream>
#include "Lista.h"

class ListaConArreglo : public Lista {
public:
    ListaConArreglo();
    ListaConArreglo(int N);
    ListaConArreglo(const ListaConArreglo& orig);
    ~ListaConArreglo();


    void agregar(char e);
    void agregarEnOrdenAscendente(char e);
    void eliminar(char e);
    void eliminarK(int k);

    int buscar(char e);

    int siguienteK(int k);
    int anteriorK(int k);

    double recuperar(int k);

    void imprimir();

private:
    int tam;
    int ultimo;
    char* data; //almacenar los elementos
};

#endif /* LISTACONARREGLO_H */
