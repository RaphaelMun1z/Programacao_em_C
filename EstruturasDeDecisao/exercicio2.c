// 2. Leia quatro notas, calcule a média aritmética e imprima o resultado.
#include <stdio.h>

int main() {
	float g1;
	float g2;
	float g3;
	float g4;
	float average;

	printf("Informe a primeira nota: ");
	fflush(stdout);
	scanf("%f", &g1);

	printf("Informe a primeira nota: ");
	fflush(stdout);
	scanf("%f", &g2);

	printf("Informe a primeira nota: ");
	fflush(stdout);
	scanf("%f", &g3);

	printf("Informe a primeira nota: ");
	fflush(stdout);
	scanf("%f", &g4);

	average = (g1 + g2 + g3 + g4) / 4;

	printf("\nA média aritmética das notas informadas é: %f", average);

	return 0;
}
