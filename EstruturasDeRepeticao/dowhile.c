#include <stdio.h>

int main()
{
    float number;
    float sum = 0;

    do
    {
        printf("Informe um valor: ");
        scanf("%f", &number);

        sum += number;
    } while (number != 0);

    printf("A soma é: %f", sum);

    return 0;
}