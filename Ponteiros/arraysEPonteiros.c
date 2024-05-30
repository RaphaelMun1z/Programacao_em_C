#include <stdio.h>

int main()
{
    int values[5] = {1, 2, 3, 4, 5};

    for (int ii = 0; ii < 5; ii++)
    {
        printf("%d \n", values[ii]);
    }

    printf("%p \n", &values[0]);
    printf("%p \n", values);

    return 0;
}