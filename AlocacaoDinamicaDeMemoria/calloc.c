#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd, *p, bytes;

    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int *)calloc(qtd, sizeof(int));

    if (p)
    {
        for (int ii = 0; ii < qtd; ii++)
        {
            printf("Informe o valor para a posição %d do vetor: ", ii);
            scanf("%d", &p[ii]);
        }

        for (int ii = 0; ii < qtd; ii++)
        {
            printf("Na posição %d do vetor está o valor %d. \n", ii, p[ii]);
        }

        bytes = qtd * sizeof(int);

        printf("A variável 'p' ocupa %ld bytes em memória. \n", bytes);
    }
    else
    {
        printf("Memória insuficiente!");
    }

    free(p);
    p = NULL;

    return 0;
}