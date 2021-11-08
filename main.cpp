#include <iostream>
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {
	
	
	char nome [30];
	char endereco [30];
	int idade;
	
	
	printf("Digite seu nome \n");
	scanf("%s", &nome);

	printf("Digite seu endereco \n");
	scanf("%s", &endereco);
	
	printf("Digite sua idade \n");
	scanf("%d", &idade);
	
	printf("\n nome: %s", nome);
	printf("\n endereco: %s", endereco);
	printf("\n idade: %d \n", idade);
	
	system("pause");
	
	return 0;
}
