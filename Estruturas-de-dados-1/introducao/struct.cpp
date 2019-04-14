#include<stdio.h>
#include<iostream>

using namespace std;

typedef struct animal
{
	int idade;
} tanimal;

typedef struct pessoa
{
	int idade;
	float peso;
	tanimal animal;
} tpessoa;

int main(int argc, char *argv[])
{
	tpessoa *p;

	p = (tpessoa*)malloc(sizeof(tpessoa));
	p->idade = 20;
	p->peso = 76.44;
	printf("Idade da pessoa: %d\n", p->idade);
	(p->animal).idade = 30;
	printf("Idade do animal: %d\n", (p->animal).idade);

	return 0;
}
