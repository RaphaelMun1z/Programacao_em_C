// 1. Crie um programa que:
// a) Aloque dinamicamente um array de 5 números inteiros;
// b) Peça para o usuário informar os 5 números no espaço alocado;
// c) Mostre na tela os 5 valores;
// d) Libere a memória alocada;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers, qtd = 5;

    numbers = (int *)calloc(qtd, sizeof(int));

    if (numbers)
    {
        for (int ii = 0; ii < qtd; ii++)
        {
            printf("Informe o número que ocupará a posição %d do vetor: ", ii);
            scanf("%d", &numbers[ii]);
        }

        for (int ii = 0; ii < qtd; ii++)
        {
            printf("Array[%d]: %d \n", ii, numbers[ii]);
        }
    }
    else
    {
        printf("Não há memória suficiente!");
    }

    free(numbers);
    numbers = NULL;

    return 0;
}