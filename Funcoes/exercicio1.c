// 1. Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o
// maior valor.
#include <stdio.h>

int biggestValue(int array[], int length)
{
    int biggest = 0;

    for (int ii = 0; ii < length; ii++)
    {
        if (array[ii] > biggest)
        {
            biggest = array[ii];
        }
    }

    return biggest;
}

int main()
{
    int numberArray[10] = {12, 5, 52, 33, 93, 4, 101, 46, 20, 71};

    printf("Maior: %d", biggestValue(numberArray, 10));

    return 0;
}