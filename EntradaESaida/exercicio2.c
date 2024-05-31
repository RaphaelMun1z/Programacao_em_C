// 2. Faça um programa que receba do usuário o nome de um arquivo texto e mostre na tela quantas linhas
// este arquivo possui.
#include <stdio.h>

int main()
{
    FILE *arq;
    char filename[20], newFilename[20];
    int lines = 0;

    printf("Nome do arquivo: ");
    scanf(" %s", filename);

    sprintf(newFilename, "../%s", filename);

    arq = fopen(newFilename, "r");

    if (arq)
    {
        for (char c = getc(arq); c != EOF; c = getc(arq))
        {
            if (c == '\n')
            {
                lines++;
            }
        }

        printf("Há %d linhas.", lines);
    }
    else
    {
        printf("Arquivo inexistente!");
    }

    fclose(arq);

    return 0;
}