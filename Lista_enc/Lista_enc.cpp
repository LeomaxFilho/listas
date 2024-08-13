#include "Lista_enc.hpp"

int Lista_enc::tam(){
        return tamanho;
    }
bool Lista_enc::vazia(){
    if (tamanho == 0)
        return true;

    return false;
}

bool Lista_enc::insere(int pos, int val) {
    if (vazia() && (pos != 0))
        return false;
    if (pos == 0){
        return insereInicioLista(val);
    }
    else if (pos == tamanho){
        return insereFimLista(val);
    }
    else{ // inserção no meio da lista
        return insereMeioLista(pos, val);
    }
}

bool Lista_enc::insereInicioLista(int val){

    No* novono;
        novono = (No*)malloc(sizeof(No));
        novono->setval(val); // * valor
        novono->setprox(nullptr); // * seleciona como ponteiro que aponta para null

        inicio = novono;
        tamanho++;
        return true;
}

bool Lista_enc::insereMeioLista(int pos, int val){
    No* novono;
    novono = (No*)malloc(sizeof(No));
    novono->setval(val); // * valor
    novono->setprox(nullptr); // * seleciona como ponteiro que aponta para null

    No* aux = inicio;
    int i = 1;

    while ((i < pos) && (aux != nullptr)) // * itera pela lista ate o indice desejado comecando de 0
    {
        aux = aux->getprox();
        i++;
    }
    if (aux == nullptr)
        return false;
    
    novono->setprox(aux->getprox());
    aux->setprox(novono);
    tamanho++;
    return true;
}

bool Lista_enc::insereFimLista(int val){
    No* novono;
    novono = (No*)malloc(sizeof(No));
    novono->setval(val); // * valor
    novono->setprox(nullptr); // * seleciona como ponteiro que aponta para null

    No* aux = inicio;
    while (aux->getprox() != nullptr)
        aux = aux->getprox();

    aux->setprox(novono);
    tamanho++;
    return true;
}

bool Lista_enc::remove(int pos){
    if (vazia()){
        cout << "[o] lista vazia \n";
        return -1;
    }
    if (pos == 0){
        return removeInicioLista();
    }
    else{
        return removeNaLista(pos);
    }
}

int Lista_enc::removeInicioLista(){
    No* aux = inicio;
    int conteudo = aux->getval(); // * para poder retornar o valor apagado

    inicio = aux->getprox();
    tamanho--;
    free(aux);
    
    return conteudo;
}
int Lista_enc::removeNaLista(int pos){
    No* atual = nullptr;
    No* anterior = nullptr;

    atual = inicio; // define o ponteiro para apontar para o inicio
    int i = 0;

    while ((i < pos) && (atual != nullptr))
    {
        anterior = atual;
        atual = atual->getprox();
        i++;
    }

    int conteudo = atual->getval();
    anterior->setprox(atual->getprox());

    tamanho--;
    free(atual);

    return conteudo;
}

void Lista_enc::print(){
    No* aux = inicio;

    cout << "[print] {";
    while (aux->getprox() != nullptr)
    {

        if(vazia())
            cout << "[o] lista vazia \n";

        cout << aux->getval() << ",";
        
        aux = aux->getprox(); // * passa para o proximo indice
    }
    cout << aux->getval() << "} \n";
}

bool Lista_enc::insereOrdem(int val){
    
    int i = 1;
    No* novo = (No*)malloc(sizeof(No)); // ja lanca prox == nullptr
    novo->setval(val);

    No* atual;
    No* anterior;
    atual = inicio;

    while (atual != nullptr)
    {

        if (i == 0)
        {
            if (atual->getval() > val)
            {
                inicio = novo;
                novo->setprox(atual);
                tamanho++;
                return true;
            }
            
        } else if ((i > 0) && (i < tamanho))
        {
            if (atual->getval() > val)
            {
                anterior->setprox(novo);
                novo->setprox(atual);
                tamanho++;
                return true;
            }
        }else if (i >= tamanho)
        {
            atual->setprox(novo);
            tamanho++;
            return true;
        }
        
        i++; 
        anterior = atual;
        atual = atual->getprox();
    }
    return false;
}