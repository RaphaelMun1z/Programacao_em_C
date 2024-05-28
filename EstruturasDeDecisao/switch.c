#include <stdio.h>

int main()
{
    int value;

    printf("Digite um valor: ");
    fflush(stdout);
    scanf("%d", &value);

    switch (value){
    case 1:
        printf("O valor é 1");
        break;
    default:
        printf("Caiu no default");
        break;
    }

    return 0;
}