// 3. Leia um número e imprima o resultado do quadrado deste número.
#include <stdio.h>
#include <math.h>

int main() {
	float value;
	float valueSquare;

	printf("Informe um número: ");
	fflush(stdout);
	scanf("%f", &value);

	valueSquare = pow(value, 2);

	printf("O quadrado de %f é: %f", value, valueSquare);

	return 0;
}
