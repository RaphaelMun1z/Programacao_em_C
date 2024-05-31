// 1. Faça um programa que:
// a) Crie/abra um arquivo texto de nome “arq.txt”;
// b) Permita que o usuário grave diversos caracteres neste arquivo, até que o usuário entre com o caractere
// ‘0’;
// c) Feche o arquivo;
// d) Abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.
#include <stdio.h>

int main()
{
    FILE *arquivo;
    char userInput = 'A';
    char read, result;

    arquivo = fopen("../arq.txt", "w");

    if (arquivo)
    {
        while (userInput != '0')
        {
            printf("Informe o conteúdo que deseja adicionar ao arquivo de texto: ");
            scanf(" %c", &userInput);

            if (userInput != '0')
            {
                fputc(userInput, arquivo);
            }
        }
    }
    else
    {
        printf("Não foi possível criar o arquivo!");
    }

    fclose(arquivo);

    arquivo = fopen("../arq.txt", "r");

    if (arquivo)
    {
        while ((read = getc(arquivo)) != EOF)
        {
            printf("%c \n", read);
        }
    }
    else
    {
        printf("Não foi possível abrir o arquivo!");
    }

    fclose(arquivo);

    return 0;
}