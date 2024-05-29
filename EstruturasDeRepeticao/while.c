#include <stdio.h>

int main()
{
    float number;
    float sum = 0;

    while (number != 0){
        printf("Informe um valor: ");
        scanf("%f", &number);
        sum += number;
    }

    printf("A soma é: %f", sum);

    return 0;
}