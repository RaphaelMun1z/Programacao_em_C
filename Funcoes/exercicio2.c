// 2. Faça um programa que tenha uma função que, dado um caractere qualquer de entrada, retorne o mesmo
// caractere sempre em maiúsculo.
#include <stdio.h>

char toUppercase(char l)
{
    int charNumber = (int)l;
    return charNumber - 32;
}

int main()
{
    char letter;

    printf("Caractere: ");
    scanf("%c", &letter);

    printf("Resultado: %c", toUppercase(letter));

    return 0;
}