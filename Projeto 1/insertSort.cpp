#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define len 20000
#include "header.h"

using namespace std;

void select(int v[]);

int main(int argc, char const *argv[])
{
	int x;
	int v0[len], v1[len], v2[len];

	cout << "Ordenado: " << endl;
    sorted(v0);
    select(v0);

	cout << "Desordenado: " << endl;	
    unsorted(v1);
    select(v1);

	cout << "Randomico: " << endl;
    random(v2);
    select(v2);

	return 0;
}


void select(int v[]){
	
	int equal = 0, change = 0, aux, j;

	time_t tStart;
	
	tStart = clock();

    for (int i = 1; i < len; i++) {
		aux = v[i];
		int j = i - 1;
		
		while ((j >= 0) && (v[j] > aux)) {
            equal++;
			v[j + 1] = v[j];
			j--;
            change++;
		}
		
		v[j + 1] = aux;
	}
	tStart = clock() - tStart;

	double timeTaken = ((double)tStart) / CLOCKS_PER_SEC;

	cout << "\tTempo: \t\t" << timeTaken << "segundos" << endl;
	cout << "\tTrocas: \t" << change << endl;
	cout << "\tComparacoes: \t" << equal << endl;

}

