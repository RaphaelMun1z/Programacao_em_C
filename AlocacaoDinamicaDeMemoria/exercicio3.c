// 3. Faça um programa que receba do usuário o tamanho de uma string e chame uma função para locar
// dinamicamente essa string. Receba esta string do usuário. Por fim, apresente conteúdo dessa string sem
// suas vogais.

#include <stdio.h>
#include <stdlib.h>

void setMemo(char string, int length)
{
    string = (char *)calloc(length, sizeof(char));
}

int main()
{
    int s_length;
    char *string;

    printf("Informe o tamanho da string: ");
    scanf("%d", &s_length);
    s_length += 1;
    getchar();

    setMemo(string, s_length);

    printf("Informe o conteúdo: ");
    fgets(string, s_length, stdin);

    for (int ii = 0; ii < s_length; ii++)
    {
        if (*(string + ii) != 'a' && *(string + ii) != 'e' && *(string + ii) != 'i' && *(string + ii) != 'o' && *(string + ii) != 'u')
        {
            printf("%c", *(string + ii));
        }
    }

    return 0;
}