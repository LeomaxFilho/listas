#include <bits/stdc++.h>
using std::cout;

#ifndef LISTA_HPP

class Lista
/**
* * Lista
* implementacao de uma lista ordenada
* @param tam tamanho da lista a ser cirada
*/

{
public:
    Lista(int tam) : tam_max(tam), tam_atual(0){
        //
        valor = (int*)malloc(sizeof(int)*tam); // * faz o casting de tipo void* para int*
    }

    bool vazia();
    bool cheia();
    int tamanho();
    int value(int pos); // * retorna o valor do indice(pos), pos !(deve ser a posicao no array de 0-tam_max)
    int posicao(int value); // * retorna o indice em que se encontra o valor(value)
    bool insere_fim(int val);   // * insere o valor(val) no final da lista
    bool insere(int val, int pos); // * insere o valor(val) na posicao(pos)
    bool remove(int pos);
    void print();

    int* valor;
    int tam_max;
    int tam_atual;
};

#endif


