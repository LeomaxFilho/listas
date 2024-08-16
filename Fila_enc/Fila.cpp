#include "Fila.hpp"

Fila::Fila(int tam)
{
    inicio = 0;
    fim = -1;
    n_elementos = 0;
    tam_max = tam;

    dados = (int*)malloc(sizeof(int)*tam_max);
}
bool Fila::vazia()
{

    if (n_elementos == 0)
    {
        return true;
    }
    return false;
}

bool Fila::cheia()
{
    if (n_elementos == tam_max)
    {
        return true;
    }
    
    return false;
}
int Fila::tamanho()
{
    return n_elementos;
}

int Fila::first(){
    return dados[inicio];
}

bool Fila::push(int val)
{
    if (cheia())
        return false;

    fim = (fim + 1) % tam_max; // * quando o final for igual ao tamanho maximo ele vai para o inicio do vetor
    dados[fim] = val;
    //cout <<"val inserido: " << dados[fim] << "\n";
    n_elementos++;
    return true;
}

bool Fila::pop()
{

    if (vazia())
        return false;

    int deletado = first();
    inicio = (inicio + 1) % tam_max;

    n_elementos--;
    return true;
}

void Fila::print()
{
    if (vazia())
    {
        printf("[0] Fila vazia \n");   
        return;
    }

    int i = inicio;
    printf("[Print] {");

    for ( int j = 0; j < n_elementos; j++)
    {
        

        if (i != fim)
        {
            printf("%d, ", dados[i]);
        }else
            printf("%d", dados[i]);
        i++;
        if (i == tam_max)
        {
            i = 0;
        }

    }

    printf("}\n");
}   
