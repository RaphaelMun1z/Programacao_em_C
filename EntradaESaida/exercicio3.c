// 3. Faça um programa que receba do usuário o nome de um arquivo texto e um caractere. Mostre na tela
// quantas vezes aquele caractere aparece dentro do arquivo.
#include <stdio.h>

int main()
{
    FILE *arq;
    char filename[20], newFilename[20];
    char caractere, result, read;
    int aux = 0;

    printf("Nome do arquivo: ");
    gets(filename);

    printf("Caractere: ");
    scanf(" %c", &caractere);

    sprintf(newFilename, "../%s", filename);

    arq = fopen(newFilename, "r");

    if (arq)
    {
        while (!feof(arq))
        {
            result = fscanf(arq, "%c", &read);
            if (result == 1)
            {
                if (read == caractere)
                {
                    aux++;
                }
            }
        }

        printf("O caractere %c aparece %dx.", caractere, aux);
    }
    else
    {
        printf("Arquivo inexistente!");
    }

    fclose(arq);

    return 0;
}