#include <stdio.h>

int main()
{
    char text[50];

    printf("Digite um texto qualquer: ");
    gets(text);

    printf("Texto: %s", text);

    return 0;
}