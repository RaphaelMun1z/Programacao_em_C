// Estruturas de decisão if, else, else if
#include <stdio.h>

int main() {
	int age;

	printf("Qual a sua idade?");
	fflush(stdout);
	scanf("%d", &age);

	if (age < 18) {
		printf("Você é menor de idade.");
	} else if (age >= 18 && age < 60) {
		printf("Você é adulto.");
	} else {
		printf("Você é idoso.");
	}

	printf("\nSua idade é %d.", age);

	return 0;
}
