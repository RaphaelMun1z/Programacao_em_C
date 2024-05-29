#include <stdio.h>

int main()
{
    float num1 = 2;
    float num2 = 4;
    float result;

    result = num1 + num2;
    printf("%.2f + %.2f = %.2f \n", num1, num2, result);

    result = num1 - num2;
    printf("%.2f - %.2f = %.2f \n", num1, num2, result);

    result = num1 * num2;
    printf("%.2f x %.2f = %.2f \n", num1, num2, result);

    result = num1 / num2;
    printf("%.2f / %.2f = %.2f \n", num1, num2, result);

    result = num1 * num1;
    printf("%.2f^2 = %.2f \n", num1, result);

    return 0;
}