#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define len 10

using namespace std;

void f(int v[10]);//mesmo função void f(int v[10])

int main(){

    int *v; 

    v = (int *)malloc(10 * sizeof(int));    
    if(v == NULL)
        cout << "nao";
    else
        cout << "work";

    free(v);
    return 0;
}

void f(int v[10]){
    v[0] = 20;
}