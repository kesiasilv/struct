#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

//renomeando o nome do identificador
typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "portuguese");/*como estou usando a biblioteca locale.h 
					quando for atribuir valores via teclado no peso (usuario)
					numero real precisa ser com ',' e nao ponto*/
	
	//criando e inicializando
	tipo_pessoa pes = {0, 0.0, "teste"};//ja atribui valores para iniciar
	
	printf("iniciando\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//modificando os valores dos campos
	pes.idade = 10;
	pes.peso = 99.99;
	//como char esta em um vetor string char nao pode atribuir com '=' e sim com o strcpy
	strcpy(pes.nome, "Texto");
	
	printf("\nAlterando os valores dos campos via codigo: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome); 
	
	//alterando via teclado
	printf("\ndigite uma idade: \n");
	scanf("%d", &pes.idade);
	
	printf("digite um peso: \n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	
	printf("digite um nome: \n");
	//usando o scanf aprimorado
	scanf("%50[^\n]s", pes.nome);
	
	printf("\nresultados: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
}
