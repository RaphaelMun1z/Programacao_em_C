// 3. Faça um programa que tenha uma função que dado um valor numérico de entrada, gere e imprima como
// saída o número de linhas com pontos de exclamação, conforme exemplo abaixo (para n = 5):
// !
// !!
// !!!
// !!!!
// !!!!!
#include <stdio.h>

void generateLines(int value)
{
    for (int ii = 1; ii <= value; ii++)
    {
        for (int jj = 1; jj <= ii; jj++)
        {
            printf("!");
        }
        printf("\n");
    }
}

int main()
{
    generateLines(5);

    return 0;
}