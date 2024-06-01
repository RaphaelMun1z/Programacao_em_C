// 3. Crie um programa que tenha uma função recursiva que receba um valor inteiro e converta este número
// para binário.
#include <stdio.h>

int convert(int value)
{
    if (value == 0)
    {
        return 0;
    }

    return (value % 2 + 10 * convert(value / 2));
}

int main()
{
    int value = 2;
    printf("O valor %d em binário é %d.", value, convert(value));

    return 0;
}