#include "Lista_enc.hpp"
#include "No.hpp"

int main(int argc, char const *argv[])
{
    int vetor[] = {3,4,5,1}; // * insere esse vetor na lista
    int count = (sizeof(vetor)/sizeof(int));
    Lista_enc lista;

    // * tenta remover de uma lista vazia
    lista.remove(1);

    // * povoa a lista
    for (int i = 0; i < count; i++)
    {
        lista.insere(i,vetor[i]);
    }
    lista.print();

    // * remove um valor da lista
    lista.remove(2);
    lista.print();

    // * adiciona um valor a um indice no meior da lista
    lista.insere(2,12);
    lista.print();

    return 0;
}