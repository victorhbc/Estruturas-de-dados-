#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include "lista.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Lista *lista;
    lista = criatLista();
    lista = inserirNaLista(lista, 15);
    lista = inserirNaLista(lista, 20);
    lista = inserirNaLista(lista, 5);
    imprimirLista(lista);

    if (buscar(lista, 5))
        cout << "encontrou" << endl;
    else
        cout << "nao esta" << endl;

    lista = remover(lista, 5);

    if (buscar(lista, 5))
        cout << "encontrou" << endl;
    else
        cout << "nao esta" << endl;

    imprimirLista(lista);

    liberar(lista);

    return 0;
}
