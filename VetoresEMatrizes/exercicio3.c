// 3. Faça um programa que leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
// possuírem valores negativos.
#include <stdio.h>

int main()
{
    float numbers[10];

    numbers[0] = 34;
    numbers[1] = -78;
    numbers[2] = 23;
    numbers[3] = -56;
    numbers[4] = 12;
    numbers[5] = -89;
    numbers[6] = 45;
    numbers[7] = -67;
    numbers[8] = 91;
    numbers[9] = -10;

    for (int ii = 0; ii < 10; ii++)
    {
        if (numbers[ii] < 0)
        {
            numbers[ii] = 0;
        }
    }

    for (int ii = 0; ii < 10; ii++)
    {
        printf("numbers[%d]: %f \n", ii, numbers[ii]);
    }

    return 0;
}