#include <stdio.h>

int main() {
	int age;

	printf("Qual � a sua idade? ");
	fflush(stdout);
	scanf("%d", &age);

	printf("A sua idade � %d", age);

	return 0;
}
