#include <stdio.h>
#include <stdlib.h>
//exemplo 1

void clearScreen() {
system("clear");
}

//definindo a struct
struct Ponto {
	int x;
	int y;
};

int main() {

// Criando uma instância da struct Ponto
	struct Ponto ponto1;
// Atribuindo valores aos membros da struct
	ponto1.x = 10;
	ponto1.y = 20;
// Acessando e imprimindo os valores
	printf("Coordenadas: (%d, %d)\n", ponto1.x, ponto1.y);
return 0;
}
