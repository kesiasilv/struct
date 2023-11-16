#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 3

//exemplo 4

struct Pessoa {
	int idade;
	float peso;
	char nome[50];
};

	typedef struct Pessoa Pessoa;

int main(){

	Pessoa pessoas[N];
	int i;
	
	for (i = 0; i < N; i++){
	printf("Insira os dados %d: \n", i + 1);
	puts("Nome: ");
	scanf("%50[^\n]s", pessoas[i].nome);
	fflush(stdin);
	
	puts("Idade: ");
	scanf("%d", &pessoas[i].idade);
	fflush(stdin);
	
	puts("Peso: ");
	scanf("%f", &pessoas[i].peso);
	fflush(stdin);
	}
	
	for (i = 0; i < N; i++){
	printf(">> Pessoa %d <<\n", i + 1);
	printf("Nome: %s: \n", pessoas[i].nome);
	printf("Idade: %d: \n", pessoas[i].idade);
	printf("Peso: %.2f: \n", pessoas[i].peso);
	}
}
