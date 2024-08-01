#include "Lista.hpp"

bool Lista::vazia(){
    if(tam_atual == 0)
        return true;
    return false;
}

bool Lista::cheia(){
    if(tam_atual == tam_max)
        return true;
    return false;
}

int Lista::tamanho(){
    return tam_atual;
}

int Lista::value(int pos){

    if(pos > tam_max || pos < 0)
        return -1;
    int val = valor[pos];
    return val;
}

int Lista::posicao(int value){

    if (vazia())
        return -1;

    for (int i = 0; i < tam_atual; i++)
        if (valor[i] == value)
            return i;
    return -1;
}

bool Lista::insere_fim(int val){

    if (cheia())
        return false;
    valor[tam_atual+1] = val;
    tam_atual++;
    return true;
}

bool Lista::insere(int val, int pos){

    if (cheia() || pos > tam_atual+1 || pos > tam_max || pos < 0)
        return false;
    
    int i = tam_atual;

    while ( i > pos)
    {
        valor[i] = valor[i-1];
        i--;
    }

    valor[pos] = val;
    tam_atual++;
    return true;
}

bool Lista::remove(int pos){
    if (vazia() || pos > tam_atual || pos < 0)
        return false;
    
    int i = pos;
    while (i < (tam_atual))
    {
        valor[i] = valor[i+1];
        i++;
    }
    valor[i] = 0;
    tam_atual--;
    return true;
}

void Lista::print(){

    if(vazia()){
        cout << "[o] lista vazia \n";
        return;
    }

    cout << "[print] {";
    for (int i = 0; i < tam_atual; i++)
    {
        if (i < tam_atual-1)
            cout << valor[i] << ",";
        else
            cout << valor[i] << "} \n";
    }
    

}