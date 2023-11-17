#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Funcionario{
    char nome[50];
    int idade;
    float salario;
};

typedef struct Funcionario Funcionario;

int main(){

    Funcionario funcionario;

    printf("Digite o nome do Funcionario: \n");
    scanf("%s", &funcionario.nome);

    printf("Digite a idade: \n");
    scanf("%d", &funcionario.idade);

    printf("digite o Salario: \n");
    scanf("%f", &funcionario.salario);

    printf("informacoes do funcionario: \n");
    printf("Nome : %s \n", funcionario.nome);
    printf("idade: %d \n", funcionario.idade);
    printf("salario: %.2f \n", funcionario.salario);
}
