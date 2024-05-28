// 1. Faça um programa que leia um número inteiro e o imprima.
#include <stdio.h>

int main() {
	int number;
	printf("Informe um número inteiro: ");
	fflush(stdout);
	scanf("%i", &number);
	printf("O número digitado foi: %i", number);

	return 0;
}
