#include <bits/stdc++.h>
#include "No.cpp"
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
    bool insere(int pos, int val);
};

int Lista_enc::tam(){
        return tamanho;
    }
bool Lista_enc::vazia(){
    if (tamanho == 0)
        return true;

    return false;
}

bool Lista_enc::insere(int pos, int val){
    if(pos > tamanho || pos < 0)
        return false;

    if (tamanho == 0)
    {
        No* aux = (No*)malloc(sizeof(No));
        aux->setval(val);
    }
    

}

#endif // LISTA_ENC_H
