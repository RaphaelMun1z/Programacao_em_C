#include <stdio.h>

int main() {
	int age;

	printf("Qual é a sua idade? ");
	fflush(stdout);
	scanf("%d", &age);

	printf("A sua idade é %d", age);

	return 0;
}
