#import <stdio.h>

int main() {
	int v1;
	int v2;
	int v3;
	int sum;

	printf("Digite o primeiro número: ");
	fflush(stdout);
	scanf("%i", &v1);

	printf("Digite o segundo número: ");
	fflush(stdout);
	scanf("%i", &v2);

	printf("Digite o terceiro número: ");
	fflush(stdout);
	scanf("%i", &v3);

	sum = v1 + v2 + v3;

	printf("A soma dos três números é: %i", sum);

	return 0;
}
