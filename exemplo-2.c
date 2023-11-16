#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//exemplo 2
#define N 30

struct Pessoa
{
	int idade;
	float peso;
	char nome[N];
};

typedef struct Pessoa Pessoa;

int main(){
	
	Pessoa pessoa = {0,0.0, "Victor Zerefos"};
	int n = sizeof(pessoa.nome);
	sizeof(pessoa.nome[0]);// le o tamanho do meu array dinamicamante
	
	puts("Imprimindo dados de pessoa: ");
	printf("Idade: %d\n", pessoa.idade);
	printf("Peso: %f\n", pessoa.peso);
	printf("Nome: %s\n", pessoa.nome);

//Atribuindo dados aos campos
	pessoa.idade = 20;
	pessoa.peso = 90.0;
	strcpy(pessoa.nome, "Eu denovo");
	
	puts("\nAlterando os dados via código: \n");
	printf("Idade: %d\n", pessoa.idade);
	printf("Peso: %f\n", pessoa.peso);
	printf("Nome: %s\n", pessoa.nome);

//Atribuindo dados aos campos dinâmicamente
	puts("\nDigite sua idade:");
	scanf("%d", &pessoa.idade);
	
	puts("Digite seu peso:");
	scanf("%f", &pessoa.peso);
	fflush(stdin);
	
	puts("Digite seu nome:");
	fgets(pessoa.nome, n, stdin);
	
	puts("\nAlterando os dados via usuário: \n");
	printf("Idade: %d\n", pessoa.idade);
	printf("Peso: %.2f\n", pessoa.peso);
	printf("Nome: %s\n", pessoa.nome);
}
