#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definição da struct livro
#define N 50
struct livro
{
    char titulo[N], autor[N];
    int ano, avaliacao;
    double reviews[5];
};

typedef struct livro livro;

int main()
{
    double e = 0;

    // Criando uma instância da struct livro

    livro livro[3];

    for (int i = 0; i < 3; i++)
    {
        printf("==============================\n");
        printf("Digite o nome do livro: ");
        scanf(" %s", livro[i].titulo);
        fflush(stdin);

        printf("Digite o autor: ");
        scanf(" %s", livro[i].autor);
        fflush(stdin);

        printf("Digite o ano de publicacao:\n");
        scanf("%d", &livro[i].ano);
        fflush(stdin);

        printf("avalie esse livro (0 a 10): \n");
        for (int j = 0; j < 5; j++)
        {
            printf("nota %d\n", j + 1);
            scanf("%lf", &livro[i].reviews[j]);
            fflush(stdin);
        }

        printf("==============================\n");
    }

    // Imprimindo as informações do livro
    for (int i = 0; i < 3; i++)
    {
        printf("\nInformacoes do livro:\n");
        printf("titulo: %s\n", livro[i].titulo);
        printf("autor: %s\n", livro[i].autor);
        printf("ano : %d\n", livro[i].ano);

        double soma = 0.0;
        for(int j = 0; j<5; j++){
            soma += livro[i].reviews[j];
        }

        soma /= 5;
        printf("avalaiacao: %.2lf\n", soma / 2);
    }

    return 0;
}
