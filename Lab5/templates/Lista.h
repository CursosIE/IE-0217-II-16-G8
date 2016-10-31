#ifndef LISTA_H
#define LISTA_H

template <typename type_t>
class Lista { //lista de type_ts
public:
    Lista(){};
    Lista(const Lista& orig){};
    virtual ~Lista(){};

    virtual void agregar(type_t e) = 0;
    virtual void agregarEnOrdenAscendente(type_t e) = 0;
    virtual void eliminar(type_t e) = 0;
    virtual void eliminarK(int k) = 0;

    virtual int buscar(type_t e) = 0;

    virtual int siguienteK(int k) = 0;
    virtual int anteriorK(int k) = 0;

    virtual type_t recuperar(int k) = 0;
    virtual void imprimir() = 0;
private:

};

#endif /* LISTA_H */
