#include <bits/stdc++.h>
#include "No.hpp"
using std::cout;

#if !defined(LISTA_ENC_H)
#define LISTA_ENC_H

class Lista_enc
{
private:
    No* inicio;
    int tamanho;

public:
    Lista_enc() : inicio(NULL), tamanho(0){}
    
    int tam();
    bool vazia();
    // * insere
    bool insere(int pos, int val); // * analisa onde sera inserido na lista
    bool insereInicioLista(int val);
    bool insereFimLista(int val);
    bool insereMeioLista(int pos, int dado);
    bool insereOrdem(int val); // * serve apenas caso a lista esteja previamente em ordem
    // * remove
    bool remove(int pos);
    int removeInicioLista();
    int removeNaLista(int pos);
    // * imprime
    void print();
};
#endif // LISTA_ENC_H