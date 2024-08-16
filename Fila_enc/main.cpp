#include "Fila.hpp"

int main(int argc, char const *argv[])
{
    int vetor[] = {1,2,3,4,5,7,9};
    Fila fila(7);

    fila.print();

    for (int i = 0; i < 7; i++)
    {
        fila.push(vetor[i]);
    }
    fila.print();
    
    fila.pop();
    fila.print();

    fila.push(10);
    fila.print();
    return 0;
}
