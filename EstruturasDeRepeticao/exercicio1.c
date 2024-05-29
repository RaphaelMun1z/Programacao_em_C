// 1. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.
#include <stdio.h>

int main()
{
    int number = 3;

    for (int ii = 1; ii <= 5; ii++)
    {
        int result = number * ii;
        printf("| %d ", result);
    }

    return 0;
}