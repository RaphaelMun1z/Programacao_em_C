#include <stdio.h>

int main()
{
    int number;

    // Ponteiro é um valor que aponta para um endereço de memória
    int *pointer;

    printf("Informe um número: ");
    scanf("%d", &number);

    // Inicializando o ponteiro
    pointer = &number;

    printf("Número informado: %d\n", number);
    printf("Endereço de memória (decimal): %d\n", &number);
    printf("Endereço de memória (hexadecimal): %p\n", pointer);

    return 0;
}