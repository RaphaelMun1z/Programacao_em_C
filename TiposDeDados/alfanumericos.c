#include <stdio.h>

int main()
{
    char opt;

    printf("Informe uma opção: \n");
    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conta. \n");
    printf("c - Limite da conta. \n");
    scanf("%c", &opt);

    switch (opt)
    {
    case 'a':
        printf("Seu saldo é... \n");
        break;
    case 'b':
        printf("Extrato da conta... \n");
        break;
    case 'c':
        printf("Limite da conta... \n");
        break;
    default:
        printf("Comando inválido. \n");
        break;
    }

    return 0;
}