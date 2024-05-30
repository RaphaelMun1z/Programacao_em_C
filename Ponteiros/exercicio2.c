// 2. Faça um programa que contenha duas variáveis inteiras. Leia estas variáveis do teclado. Em seguida,
// compare seus endereços e exiba o conteúdo do maior endereço.
#include <stdio.h>

int main()
{
    int v1, v2;

    printf("Valor 1: ");
    scanf("%d", &v1);

    printf("Valor 2: ");
    scanf("%d", &v2);

    printf("V1: %p | V2: %p \n", v1, v2);

    if (&v1 > &v2)
    {
        printf("| %d |", v1);
    }
    else
    {
        printf("| %d |", v2);
    }

    return 0;
}