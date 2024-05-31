#include <stdio.h>

int main(){
    FILE *arq;

    // fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
    // w -> Escrita (se o arquivo já existir, será sobrescrito com um novo)
    // r -> Leitura
    // a -> Adição de conteúdo
    arq = fopen("arquivo.txt", "w");

    fclose(arq);

    return 0;
}