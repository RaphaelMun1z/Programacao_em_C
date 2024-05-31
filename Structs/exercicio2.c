// 2. Crie um programa que tenha uma struct chamada aluno contendo nome, número de matrícula e curso.
// Leia do usuário a informação de 5 alunos, armazene em um vetor desta estrutura e imprima os dados na
// tela.
#include <stdio.h>
#include <string.h>

struct st_aluno
{
    char nome[50];
    char matricula[20];
    char curso[20];
};

int main()
{
    struct st_aluno alunos[5];

    for (int ii = 0; ii < 5; ii++)
    {
        printf("[%d/5] Qual o nome do aluno? ", ii + 1);
        fgets(alunos[ii].nome, 50, stdin);

        printf("[%d/5] Qual o número de matrícula do aluno? ", ii + 1);
        fgets(alunos[ii].matricula, 20, stdin);

        printf("[%d/5] Qual o curso do aluno? ", ii + 1);
        fgets(alunos[ii].curso, 20, stdin);

        printf("==========================================\n");
    }

    printf("\n");

    for (int ii = 0; ii < 5; ii++)
    {
        printf("----------------| Aluno %d |----------------\n", ii + 1);
        printf("Nome: %s.\n", strtok(alunos[ii].nome, "\n"));
        printf("Matrícula: %s.\n", strtok(alunos[ii].matricula, "\n"));
        printf("Curso: %s.\n", strtok(alunos[ii].curso, "\n"));
    }

    return 0;
}