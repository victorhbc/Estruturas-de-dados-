#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "cab.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Ponto* p1 = criarPonto(1.0, 2.0);
    Ponto* p2 = criarPonto(3.0, 1.0);    
    cout << "A distancia desses pontos eh " << distancia(p1, p2) << endl;

    return 0;
}
