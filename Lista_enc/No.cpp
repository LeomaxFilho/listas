#include "No.hpp"

void No::setval(int val){
    valor = val;
}

int No::getval(){
    return valor;
}
void No::setprox(No* no){
    prox = no;
}

No* No::getprox(){
    return prox;
}