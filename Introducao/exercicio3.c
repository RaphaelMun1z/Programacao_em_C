// 3. Leia um n�mero e imprima o resultado do quadrado deste n�mero.
#include <stdio.h>
#include <math.h>

int main() {
	float value;
	float valueSquare;

	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%f", &value);

	valueSquare = pow(value, 2);

	printf("O quadrado de %f �: %f", value, valueSquare);

	return 0;
}
