// 3. Faça um programa que leia 10 números e escreva o maior e o menor valor lido.
#include <stdio.h>

int main()
{
    float number;
    float bigger;
    float smaller;

    for (int ii = 0; ii < 10; ii++)
    {
        printf("Informe o número: ");
        scanf("%f", &number);

        if (number > bigger)
        {
            bigger = number;
        }

        if (number < smaller)
        {
            smaller = number;
        }
    }

    printf("Maior número: %f \n", bigger);
    printf("Menor número: %f \n", smaller);

    return 0;
}