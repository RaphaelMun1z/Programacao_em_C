// 2. Faça um programa aloque inicialmente um vetor com 3 inteiros, pergunte ao usuário quantos valores ele
// quer informar, use REALLOC caso seja mais que 3 valores, leia e apresente os valores.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array, qtd = 3;

    array = (int *)malloc(qtd * sizeof(int));

    printf("Quantos valores você deseja no array? ");
    scanf("%d", &qtd);

    if (qtd > 3)
    {
        array = (int *)realloc(array, qtd * sizeof(int));
    }

    for (int ii = 0; ii < qtd; ii++)
    {
        printf("Informe o valor para a posição %d do array: ", ii);
        scanf("%d", &array[ii]);
    }

    for (int ii = 0; ii < qtd; ii++)
    {
        printf("Array[%d]: %d \n", ii, array[ii]);
    }

    free(array);
    array = NULL;

    return 0;
}