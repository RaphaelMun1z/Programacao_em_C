#include <stdio.h>

int main()
{
    /*
      0   1   2   3   4
    ---------------------
    | 1 | 2 | 3 | 4 | 5 |
    ---------------------
    int = 4 bytes
    bit 0 / 1
    byte 0000 0001

    0000 0000 0000 0000 0000 0000 0000 0001
    0000 0000 0000 0000 0000 0000 0000 0010
    */
    int values[5] = {1, 2, 3, 4, 5};

    for (int ii = 0; ii < 5; ii++)
    {
        printf("Valor: %d | Bytes: %ld \n", values[ii], sizeof(values[ii]));
    }

    printf("Array | Bytes: %ld \n", sizeof(values));

    printf("values[0] vale %d e o Endereço de Memória é %p \n", values[0], values[0]);
    printf("*(values) vale %d e o Endereço de Memória é %p \n", *(values), *(values));

    printf("*(values+1) vale %d e o Endereço de Memória é %p \n", *(values+1), *(values+1));

    return 0;
}