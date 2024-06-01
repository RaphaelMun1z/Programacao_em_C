#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int qtd;

    printf("Informe o tamanho da sequência fibonacci: ");
    scanf("%d", &qtd);

    for (int ii = 0; ii < qtd; ii++)
    {
        printf("%d ", fib(ii + 1));
    }

    return 0;
}