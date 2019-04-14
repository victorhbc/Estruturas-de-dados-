#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "cab.h"

using namespace std;

struct ponto{
    float x;
    float y;
};

Ponto* criarPonto(float x, float y){
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    
    if (p == NULL) {
        cout << "MEMORIA INSULFICIENTE" << endl;
        exit(1);
    }else
    {
        cout << "PONTO CRIADO" << endl;
    }
    

    p->x = x;
    p->y = y;
     
    return p;
}

void liberarPonto(Ponto *p){
    free(p);
}

void acessarPonto(Ponto *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

void atribuirValores(Ponto *p, float x, float y){
    p->x = x;
    p->y = y;
}

float distancia(Ponto *p1, Ponto *p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;

    return sqrt(dx * dx + dy * dy);
}