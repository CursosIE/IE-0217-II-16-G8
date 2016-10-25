
#ifndef LISTACONARREGLO_H
#define LISTACONARREGLO_H
#include <iostream>
#include "Lista.h"

template <typename type_t>
class ListaConArreglo : public Lista<type_t>{
public:
    ListaConArreglo();
    ListaConArreglo(int N);
    ListaConArreglo(const ListaConArreglo& orig);
    ~ListaConArreglo();


    void agregar(type_t e);
    void agregarEnOrdenAscendente(type_t e);
    void eliminar(type_t e);
    void eliminarK(int k);

    int buscar(type_t e);

    int siguienteK(int k);
    int anteriorK(int k);

    double recuperar(int k);

    void imprimir();

private:
    int tam;
    int ultimo;
    type_t* data; //almacenar los elementos
};

#endif /* LISTACONARREGLO_H */
