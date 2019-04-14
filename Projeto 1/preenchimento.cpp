#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define len 20000
#include "header.h"

using namespace std;

void sorted(int v[]){

    for (int i = 0; i < len; i++){
        v[i] = i;
    }
    
}

void random(int v[]){

    for (int i = 0; i < len; i++){
        v[i] = rand();
    }
    
}

void unsorted(int v[]){

    int j = 199999;

    for (int i = 0; i < len; i++){
        v[i] = j;
        j--;
    }
    
}