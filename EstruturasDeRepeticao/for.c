#include <stdio.h>

int main()
{
    float number;
    float sum = 0;

    for (int ii = 0; ii < 5; ii++){
        printf("Informe um valor: ");
        scanf("%f", &number);

        sum += number;
    }

    printf("A soma é: %f", sum);

    return 0;
}