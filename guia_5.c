#include <stdio.h>
#include <stdlib.h>

struct Nodo 
{
    int dato;
    struct Nodo *izq;
    struct Nodo *der;
    
};

int altura(struct Nodo *raiz)
{
    if (raiz == NULL)
    {
        return 0;
    }
    int alt_izq = altura(raiz -> izq);
    int alt_der = altura(raiz -> der);

    if (alt_izq > alt_der)
    {
        return 1 + alt_izq;
    } else {
        return 1 + alt_der;
    }

}
