#include <bits/stdc++.h>
using std::cout;

#if !defined(FILA_HPP)
#define FILA_HPP

class Fila
{
private:
    int* dados;
    int inicio;
    int fim;
    int n_elementos;

    int tam_max;
public:
    Fila(int tam);
    bool vazia();
    bool cheia();
    int tamanho();
    int first();
    bool push(int val);
    bool pop();
    void print();
};

#endif // FILA_HPP