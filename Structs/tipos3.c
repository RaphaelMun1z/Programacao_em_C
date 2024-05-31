#include <stdio.h>
#include <string.h>

struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} alunos[2];

int main()
{
    for (int ii = 0; ii < 2; ii++)
    {
        printf("[%d/2] Informe a matrícula do aluno: ", ii + 1);
        fgets(alunos[ii].matricula, 10, stdin);

        printf("[%d/2] Informe o nome do aluno: ", ii + 1);
        fgets(alunos[ii].nome, 100, stdin);

        printf("[%d/2] Informe o curso do aluno: ", ii + 1);
        fgets(alunos[ii].curso, 50, stdin);

        printf("[%d/2] Informe o ano de nascimento do aluno: ", ii + 1);
        scanf("%d", &alunos[ii].ano_nascimento);

        getchar();
        printf("====================================================\n");
    }

    for (int ii = 0; ii < 2; ii++)
    {
        printf("================== Dados do Aluno ==================\n");
        printf("Matrícula: %s", alunos[ii].matricula);
        printf("Nome: %s", alunos[ii].nome);
        printf("Curso: %s", alunos[ii].curso);
        printf("Ano de nascimento: %d\n", alunos[ii].ano_nascimento);
        printf("====================================================\n");
    }

    return 0;
}