#include <stdio.h>
#include "lib.h"
// gcc programa2.c lib.c -o programa2

int main()
{
    int n1, n2, retS, retM;

    message();

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o segundo número: ");
    scanf("%d", &n2);

    retS = sum(n1, n2);
    printf("%d + %d = %d\n", n1, n2, retS);

    retM = multiplication(n1, n2);
    printf("%d * %d = %d\n", n1, n2, retM);

    return 0;
}