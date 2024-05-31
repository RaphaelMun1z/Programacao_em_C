#include <stdio.h>

int main()
{
    FILE *arq;
    char gpu[20], *result;

    arq = fopen("../arquivo.txt", "r");

    if (arq)
    {
        while (!feof(arq))
        {
            result = fgets(gpu, 20, arq);
            if (result)
            {
                printf("%s", gpu);
            }
        }
    }
    else
    {
        printf("Não achei o arquivo!");
    }

    fclose(arq);

    return 0;
}