// 2. Crie um programa que tenha uma função recursiva que calcule e retorne o fatorial de um número inteiro N.
#include <stdio.h>

int fatorial(int n)
{
    if (n == 1)
    {
        return n;
    }

    return n * fatorial(n - 1);
}

/*
3! = 3.2.1
4! = 4.3.2.1
*/

int main()
{
    int number = 5;

    printf("Fatorial de %d é %d.", number, fatorial(number));

    return 0;
}