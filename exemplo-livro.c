#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definição da struct livro
struct livro
{
    char titulo[50];
    char autor[50];
    int ano;
    
};

typedef struct livro livro;

int main()
{
   
    // Criando uma instância da struct livro
    livro livro;
   
    printf("Digite o nome do livro: ");
    scanf("%s", &livro.titulo);

    printf("Digite o autor: ");
    scanf("%s", &livro.autor);

    printf("Digite o ano de publicacao:\n");
     scanf("%d", &livro.ano);
   
    // Imprimindo as informações do livro
    printf("\nInformacoes do livro:\n");
    printf("titulo: %s\n", livro.titulo);
    printf("autor: %s\n", livro.autor);
    printf("ano: %d\n", livro.ano);
   

    return 0;
}
