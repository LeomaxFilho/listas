#include "Lista.hpp"

int main(int argc, char const *argv[])
{
    int arr[] = {4,3,2,1}; // * Caso de teste

    Lista lista(10); // * Criando uma lista com espaço (10)
    lista.print(); // * Mostra que a lista esta vazia

    // * inserir no final

    int tam_arr = sizeof(arr)/sizeof(int); // * Tamanho do arr de teste

    for (int i = 0; i < tam_arr; i++)
        lista.insere_fim(arr[i]);
    lista.print(); // * Mostra a nova lista

    // * remover

    lista.remove(1); // * Remova o elemento de indice 1
    lista.print(); // * Mostra a nova lista

    // * inserir no meio
    lista.insere(10, 0); // * Insere o valor 10 na posicao 0 / (int val, int pos)
    lista.print(); // * Mostra a nova lista

    // * tenta remover de uma posicao invalida
    lista.remove(6); // * Tenta remover em uma posicao invalida
    //! ele deve apenas nao fazer nada
    cout << lista.tamanho(); // * Mostra a nova lista
    
    return 0;
}