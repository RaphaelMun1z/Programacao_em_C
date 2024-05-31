// 1. Crie um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma struct.
#include <stdio.h>
#include <string.h>

struct st_person
{
    char name[50];
    int age;
    char address[100];
};

int main()
{
    struct st_person p;

    printf("Informe o nome: ");
    fgets(p.name, 50, stdin);

    printf("Informe a idade: ");
    scanf("%d", &p.age);
    getchar();

    printf("Informe o endereço: ");
    fgets(p.address, 100, stdin);

    printf("\n");
    printf("Nome: %s.\n", strtok(p.name, "\n"));
    printf("Idade: %d.\n", p.age);
    printf("Endereço: %s.\n", strtok(p.address, "\n"));

    return 0;
}