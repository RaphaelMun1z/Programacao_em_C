#include <stdio.h>

int main()
{
    int numbersInt[5];
    float numbersFloat[5];

    numbersInt[0] = 1;
    numbersInt[1] = 3;
    numbersInt[2] = 5;
    numbersInt[3] = 7;
    numbersInt[4] = 9;

    for (int ii = 0; ii < 5; ii++)
    {
        numbersFloat[ii] = (float)numbersInt[ii] / 2;
    }

    for (int ii = 0; ii < 5; ii++)
    {
        printf("%.2f \n", numbersFloat[ii]);
    }

    return 0;
}