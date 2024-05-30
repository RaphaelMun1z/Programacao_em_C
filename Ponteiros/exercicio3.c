// 3. Faça um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética
// de ponteiros, leia este array do teclado e imprima o dobro de cada valor lido.
#include <stdio.h>

int main()
{
    int numbers[5];

    for (int ii = 0; ii < 5; ii++)
    {
        printf("Informe o %d° valor: ", ii+1);
        scanf("%d", &numbers[ii]);
    }

    printf("\n");

    for (int ii = 0; ii < 5; ii++)
    {
        printf("Valor: %d \n", *(numbers + ii) * 2);
    }

    return 0;
}