// 1. Crie um programa que tenha uma função recursiva que receba um número inteiro positivo N e calcula e
// apresente o somatório dos números de 1 a N.
#include <stdio.h>

int sum(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return n + sum(n - 1);
}

// 5 + 4
// 9 + 3
// 12 + 2
// 14 + 1
// 15

int main()
{
    int value = 5;

    printf("%d", sum(value));

    return 0;
}