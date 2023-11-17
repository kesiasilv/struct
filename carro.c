#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da struct carro
struct Carro{
    char marca[50];
    char modelo[50];
    int ano;
    float preco;

};

typedef struct Carro Carro;

int main(){
    
    // Criando uma instância da struct carro
    Carro carro;

    printf("Digite a marca do carro: \n");
    scanf("%s", &carro.marca);

    printf("digite o modelo do carro: \n");
    scanf("%s", &carro.modelo);

    printf("digite o ano do carro: \n");
    scanf("%d", &carro.ano);

    printf("digite o preco do carro: \n");
    scanf("%f", &carro.preco);

// Imprimindo as informações do carro
    printf("informacoes do carro: \n");
    printf("marca: %s\n", carro.marca);
    printf("modelo: %s\n", carro.modelo);
    printf("ano: %d\n", carro.ano);
    printf("preco: %.2f\n", carro.preco);
}
