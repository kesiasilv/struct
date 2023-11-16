#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//exemplo 3

// Definição da struct Aluno
struct Aluno {
	char nome[50];
	int idade;
	float notas[3]; // Array para armazenar notas(por exemplo, 3 notas)
};

typedef struct Aluno Aluno;

int main() {
	
	int i;
	
// Criando uma instância da struct Aluno
	Aluno aluno1;
	
// Preenchendo os membros da struct
	printf("Digite o nome do aluno: ");
	scanf("%s", aluno1.nome);

	printf("Digite a idade do aluno: ");
	scanf("%d", &aluno1.idade);
	
	printf("Digite as 3 notas do aluno:\n");
	for (i = 0; i < 3; ++i) {
	printf("Nota %d: ", i + 1);
	scanf("%f", &aluno1.notas[i]);
}
// Imprimindo as informações do aluno
	printf("\nInformacoes do Aluno:\n");
	printf("Nome: %s\n", aluno1.nome);
	printf("Idade: %d\n", aluno1.idade);
	printf("Notas: %.2f, %.2f, %.2f\n", aluno1.notas[0], aluno1.notas[1], aluno1.notas[2]);

return 0;
}
