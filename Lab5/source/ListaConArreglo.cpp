#include "ListaConArreglo.h"

template <typename type_t>

ListaConArreglo<type_t>::ListaConArreglo() {
    data = 0;
    tam = 0;
    ultimo = -1;
}

template <typename type_t>

ListaConArreglo<type_t>::ListaConArreglo(const ListaConArreglo& orig) {
}

template <typename type_t>


ListaConArreglo<type_t>::~ListaConArreglo() {
}
//////////////////////////////////

template <typename type_t>


ListaConArreglo<type_t>::ListaConArreglo(int N) {
    this->data = new type_t[N];
    tam = N;
    ultimo = tam - 1;
}

template <typename type_t>


void ListaConArreglo<type_t>::agregar(type_t e) {
    if (data == 0) {
        data = new type_t[1];
        tam = 1;
        ultimo = 0;
        data[0] = e;
    } else {
        if (ultimo == tam - 1) {
            type_t* temp = new type_t[tam * 2];
            for (int i = 0; i < tam; i++) {
                temp[i] = data[i];
            }
            ultimo++;
            tam++;
            temp[ultimo] = e;
            delete data; // ojo con lss deletes
            data = temp;
        } else {
            ultimo++;
            tam++;
            data[ultimo] = e;
        }
    }
}

template <typename type_t>


void ListaConArreglo<type_t>::eliminar(type_t e) {
    int k = buscar(e);
    eliminarK(k);
}

template <typename type_t>


void ListaConArreglo<type_t>::eliminarK(int k) {
    for (int i = k; i < tam - 1; i++) {
        data[i] = data[i + 1];
    }
    tam--;
    ultimo--;
}

template <typename type_t>


int ListaConArreglo<type_t>::buscar(type_t e) {
    for (int i = 0; i < tam; i++) {
        if (data[i] == e) {
            return i;
        }

    }
    return -1;
}

template <typename type_t>


int ListaConArreglo<type_t>::siguienteK(int k) {
    if (k + 1 < tam) {
        return data[k + 1];
    } else {
        return -1;
    }
}

template <typename type_t>


int ListaConArreglo<type_t>::anteriorK(int k) {
    if (k - 1 >= 0) {
        return data[k - 1];
    } else {
        return -1;
    }

}

template <typename type_t>


double ListaConArreglo<type_t>::recuperar(int k) {
    return data[k];
}

template <typename type_t>

void ListaConArreglo<type_t>::imprimir() {
    for (int i = 0; i < tam; i++) {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;
}



