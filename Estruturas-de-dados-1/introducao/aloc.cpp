#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define len 10

using namespace std;

void f(int v[10]);//mesmo função void f(int v[10])

int main(){
    
    int v[len];
    
    for(int i = 0; i < len; i++){
        v[i] = i;
    }

    f(v);
    
    printf("%d\n", *(v+2));
    cout << *(v + 0);

    return 0;
}

void f(int v[10]){
    v[0] = 20;
}