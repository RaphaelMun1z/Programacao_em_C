#include <stdio.h>

int main()
{
    int numbers[2][2];
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[1][0] = 3;
    numbers[1][1] = 4;

    for (int line = 0; line < 2; line++)
    {
        for (int column = 0; column < 2; column++)
        {
            printf("numbers[%d][%d]: %d \n", line, column, numbers[line][column]);
        }
    }

    return 0;
}