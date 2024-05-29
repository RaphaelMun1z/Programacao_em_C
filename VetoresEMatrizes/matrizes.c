#include <stdio.h>

int main(){
    char name[3][50];

    for (int ii = 0; ii < 3; ii++)
    {
        printf("Informe um nome: ");
        gets(name[ii]);
    }

    for (int ii = 0; ii < 3; ii++)
    {
        printf("Nome: %s. \n", name[ii]);
    }
    
    return 0;
}