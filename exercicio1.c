#include <stdio.h>

int main() {
	int number;
	printf("Informe um n�mero inteiro: ");
	fflush(stdout);
	scanf("%i", &number);
	printf("O n�mero digitado foi: %i", number);

	return 0;
}
