#include <bits/stdc++.h>
using std::cout;

#if !defined(NO_H)
#define NO_H

class Lista_enc; //declaracao antecipada para adicionar como friend class

class No
{
private:
    No* prox;
    int valor;
    
    void setval(int val);
    int getval();
    void setprox(No* no);
    No* getprox();
    
public:
    No(int a) : valor(a), prox(NULL) {}

    friend class Lista_enc;
};

#endif // NO_H