// 1. Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe
// as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
// valores das variáveis antes e após a modificação.
#include <stdio.h>

int main()
{
    int numberInt = 0;
    float numberFloat = 0;
    char letter = 'a';

    // Ponteiros
    int *pointerNumberInt;
    float *pointerNumberFloat;
    char *pointerLetter;

    pointerNumberInt = &numberInt;
    pointerNumberFloat = &numberFloat;
    pointerLetter = &letter;

    printf("Número inteiro: %d\n", numberInt);
    printf("Número real: %f\n", numberFloat);
    printf("Caractere: %c\n", letter);

    printf("\n");

    printf("Informe um número inteiro: ");
    scanf("%d", pointerNumberInt);

    printf("Informe um número real: ");
    scanf("%f", pointerNumberFloat);

    printf("Informe um caractere: ");
    scanf(" %c", pointerLetter);

    printf("\n");

    printf("Número inteiro: %d\n", numberInt);
    printf("Número real: %f\n", numberFloat);
    printf("Caractere: %c\n", letter);

    return 0;
}