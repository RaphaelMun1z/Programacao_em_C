#include <stdio.h>

int main() {
	int number;
	printf("Informe um número inteiro: ");
	fflush(stdout);
	scanf("%i", &number);
	printf("O número digitado foi: %i", number);

	return 0;
}
