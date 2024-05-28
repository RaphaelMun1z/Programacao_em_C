// 1. Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos.
#include <stdio.h>
#include <math.h>

int main() {
	float v1;
	float v2;
	float v3;
	float squareSum;

	printf("Informe o primeiro valor: ");
	fflush(stdout);
	scanf("%f", &v1);

	printf("Informe o segundo valor: ");
	fflush(stdout);
	scanf("%f", &v2);

	printf("Informe o terceiro valor: ");
	fflush(stdout);
	scanf("%f", &v3);

	squareSum = pow(v1, 2) + pow(v2, 2) + pow(v3, 2);

	printf("A soma dos quadrados dos valores é: %f", squareSum);

	return 0;
}

