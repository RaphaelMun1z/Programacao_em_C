#import <stdio.h>

int main() {
	int v1;
	int v2;
	int v3;
	int sum;

	printf("Digite o primeiro n�mero: ");
	fflush(stdout);
	scanf("%i", &v1);

	printf("Digite o segundo n�mero: ");
	fflush(stdout);
	scanf("%i", &v2);

	printf("Digite o terceiro n�mero: ");
	fflush(stdout);
	scanf("%i", &v3);

	sum = v1 + v2 + v3;

	printf("A soma dos tr�s n�meros �: %i", sum);

	return 0;
}
