#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct pessoa{
	char nome[20];
	int idade;
	float peso;
};

typedef struct pessoa pessoa;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	pessoa lista[2];
	int i;
	
	for(i=0; i < 2; i++){
		printf("Insira dados pessoa %d: \n", i + 1);
		printf("digite seu nome: ");
		scanf("%49[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		printf("digite sua idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		printf("digite seu peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
	}
	system("cls");//limpa o prompt de comando para apresentar os dados
	for(i=0; i<2; i++){
		printf("\nDados registrados pessoa %d \n", i + 1);
		printf("nome: %s\n", lista[i].nome);
		printf("idade: %i\n", lista[i].idade);
		printf("peso: %.2f\n", lista[i].peso);
	}
	
}
