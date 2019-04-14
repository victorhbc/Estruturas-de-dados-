#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define len 20000
#include "header.h"

using namespace std;

void Quick(int vetor[], int left, int right, int &ch, int &rep);

int main(int argc, char const *argv[])
{
	int x;
	int v0[len], v1[len], v2[len];
    int change = 0;
    int repetitions = 0;


	cout << "Ordenado: " << endl;
	time_t tStart;
	tStart = clock();
    sorted(v0);
    Quick(v0, 0, len-1, change, repetitions);
    tStart = clock() - tStart;
	double timeTaken = ((double)tStart) / CLOCKS_PER_SEC;
	cout << "\tTempo: \t\t" << timeTaken << "segundos" << endl;
	cout << "\tTrocas: \t" << change << endl;
    cout << "\tComparacoes: \t\t" << repetitions << endl;

    change = 0;
    repetitions = 0;
	cout << "Desordenado: " << endl;	
	tStart = clock();
    unsorted(v1);
    Quick(v1, 0, len-1, change, repetitions);
    tStart = clock() - tStart;
	timeTaken = ((double)tStart) / CLOCKS_PER_SEC;
	cout << "\tTempo: \t\t" << timeTaken << "segundos" << endl;
    cout << "\tTrocas: \t\t" << change << endl;
    cout << "\tComparacoes: \t\t" << repetitions << endl;

    change = 0;
    repetitions = 0;
	cout << "Randomico: " << endl;
	tStart = clock();
    random(v2);
    Quick(v2, 0, len-1, change, repetitions);
    tStart = clock() - tStart;
	timeTaken = ((double)tStart) / CLOCKS_PER_SEC;
	cout << "\tTempo: \t\t" << timeTaken << "segundos" << endl;
	cout << "\tTrocas: \t\t" << change << endl;
    cout << "\tComparacoes: \t\t" << repetitions << endl;
    
	return 0;
}

void Quick(int vetor[], int left, int right, int &ch, int &rep){
   int pivo, aux, i, j, meio;
   
   i = left;
   j = right;

   ch++;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
         rep++;
      }
   }while(j > i);
   
   if(left < j) Quick(vetor, left, j, ch, rep);
   if(i < right) Quick(vetor, i, right,ch, rep);   

}
