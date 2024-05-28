// Estruturas de decis�o if, else, else if
#include <stdio.h>

int main() {
	int age;

	printf("Qual a sua idade?");
	fflush(stdout);
	scanf("%d", &age);

	if (age < 18) {
		printf("Voc� � menor de idade.");
	} else if (age >= 18 && age < 60) {
		printf("Voc� � adulto.");
	} else {
		printf("Voc� � idoso.");
	}

	printf("\nSua idade � %d.", age);

	return 0;
}
