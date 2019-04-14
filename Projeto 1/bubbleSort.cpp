#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define len 20000
#include "header.h"

using namespace std;

void bubble(int v[]);

int main(int argc, char const *argv[])
{
	int x;
	int v0[len], v1[len], v2[len];

	cout << "Ordenado: " << endl;
    sorted(v0);
    bubble(v0);

	cout << "Desordenado: " << endl;	
    unsorted(v1);
    bubble(v1);

	cout << "Randomico: " << endl;
    random(v2);
    bubble(v2);

	return 0;
}


void bubble(int v[]){
	
	int equal = 0, change = 0, aux;
	time_t tStart;
	
	tStart = clock();

	for(int i = 0; i < len - 1; i++){
		for(int j = len - 2; j >= i; j--){
			if(v[j] > v[j + 1]){
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
                change++;
			}
			equal++;
		}	
	}

	tStart = clock() - tStart;

	double timeTaken = ((double)tStart) / CLOCKS_PER_SEC;

	cout << "\tTempo: \t\t" << timeTaken << "segundos" << endl;
	cout << "\tTrocas: \t" << change << endl;
	cout << "\tComparacoes: \t" << equal << endl;

}

