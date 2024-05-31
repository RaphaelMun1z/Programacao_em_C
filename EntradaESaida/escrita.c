#include <stdio.h>

int main()
{
    FILE *arq;
    char fruit[10];

    arq = fopen("../frutas.txt", "a");

    if (arq)
    {
        printf("Informe uma fruta [0 para sair]: ");
        fgets(fruit, 10, stdin);

        while (fruit[0] != '0')
        {
            fputs(fruit, arq);
            printf("Informe uma fruta [0 para sair]: ");
            fgets(fruit, 10, stdin);
        }
    }
    else
    {
        printf("Não foi possível criar o arquivo!");
    }

    fclose(arq);

    return 0;
}