#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "portuguese");/*como estou usando a biblioteca locale.h 
									quando for atribuir valores no peso 'float'
								    numero real precisa ser com ',' e nao ponto*/
	
	tipo_pessoa lista[3]; //sera uma lista de 3 pessoas nesse exemplo
	int i;
	
	for(i=0; i<TAM; i++){
		printf("insira dados (%d)\n", i + 1);
		puts("nome: ");
		scanf("%50[^\n]s", &lista[i].nome);//como é um vetor ela precisa ser chamada desta forma!
		fflush(stdin);
		
		puts("idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);	
	}
	//limpa a tela do compilador para apresentar os resultados
	system("cls");
	
	printf("DADOS: \n");
	for(i=0; i<TAM; i++){
		printf("------------------Pessoa %d-----------------\n", i + 1);
		printf("\tNome: %s\n", lista[i].nome);// o '\t' é para centralizar os dados:
		printf("\tIdade: %d\n", lista[i].idade);
		printf("\tPeso: %.2f\n", lista[i].peso);
	}
		printf("--------------------------------------------\n");
}
