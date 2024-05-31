#include <stdio.h>

int main()
{
    FILE *arq;
    int num, result, sum = 0;

    arq = fopen("../arquivo2.txt", "r");

    if (arq)
    {
        while (!feof(arq))
        {
            result = fscanf(arq, "%d", &num);
            if (result == 1)
            {
                sum += num;
            }
        }
    }
    else
    {
        printf("Não achei o arquivo!");
    }

    printf("Soma: %d", sum);
    fclose(arq);

    return 0;
}