#include <stdio.h>

void increase(int* count)
{
    printf("Count vale: %d\n", (*count));
    printf("Endereço de memória: %p\n", count);

    printf("Count vale: %d\n", ++(*count));
    printf("Endereço de memória: %p\n", count);
}

int main()
{
    int count = 10;

    printf("Valor do Count antes da função: %d\n", count);
    printf("Endereço de memória: %p\n", &count);

    increase(&count);

    printf("Valor do Count depois da função: %d\n", count);
    printf("Endereço de memória: %p\n", &count);

    return 0;
}