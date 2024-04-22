#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
	char rua[50];
	int numero;
};

struct pessoa{
		char nome[100];
		int idade;
		struct endereco ender;//struct dentro de struct
	};

int main(){
	//atribuição com structs;
	struct pessoa p;
	
	printf("digite seu nome: \n");
	fgets(p.nome, 100, stdin);
	setbuf(stdin, NULL);//limpa o buff
	
	printf("digite sua idade: \n");
	scanf("%d", &p.idade);
	setbuf(stdin, NULL);
	
	printf("digite seu endereco: \n");
	printf("rua: ");
	fgets(p.ender.rua, 50, stdin);
	setbuf(stdin, NULL);
	
	printf("numero: ");
	scanf("%d", &p.ender.numero);
	setbuf(stdin, NULL);
	
	//apresentando resultados:
	system("cls");
	puts("-----Dados-----");
	printf("%s", p.nome);
	printf("Idade: %d", p.idade);
	printf("\nRua: %s", p.ender.rua);
	printf("Numero: %d", p.ender.numero);
}
