#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include "lista.h"

using namespace std;

struct lista{
    int info;
    struct lista *prox;
};

Lista* criatLista(){
    return NULL;
}

Lista* inserirNaLista(Lista *l, int i){
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    cout << "elemento inserido com sucesso" << endl;
    return novo;
}

void imprimirLista(Lista *l){
    while(l != NULL){
        cout << l->info << endl;
        l = l->prox;
    }
}

Lista* buscar(Lista *l, int v){
    while(l != NULL){
        if (l->info == v) 
            return l;
        l = l->prox;
    }
    return NULL;
}

Lista* remover(lista *l, int v){
    Lista* ant = NULL ;
    Lista* p = l;

    while(p != NULL && p->info != v){
        ant = p;
        p = p->prox;
    }

    if (p == NULL) 
        return l;
    
    if (ant == NULL) //remove o primeiro elemento
        l = p->prox;
    else
        ant->prox = p->prox;
    
    free(p);

    return l;
     
}

void liberar(lista *l){
    Lista *p = l;
    while(p != NULL){
        lista *t = p->prox;
        free(p);
        p = t;
    }
    cout << "Lista liberada" << endl;
}

int comparar(lista *l1, lista *l2){
    Lista *p1 = l1;
    Lista *p2 = l2;

    while(p1 != NULL && p2 != NULL){
        if (p1->info != p2->info) 
            return 0;
        p1 = p1->prox;
        p2 = p2->prox;
    }
    
    return 0;
}