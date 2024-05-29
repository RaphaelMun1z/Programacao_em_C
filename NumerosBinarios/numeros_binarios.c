#include <stdio.h>

int main()
{
    int value = 2;

    value = value << 2;
    printf("Valor: %d.\n", value);

    value = 2;

    value = value >> 1;
    printf("Valor: %d.\n", value);

    value = 2;

    value = ~value;
    printf("Valor: %d.\n", value);

    return 0;
}