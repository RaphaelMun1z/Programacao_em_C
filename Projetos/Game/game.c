#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
} Calcular;

void jogar();
void mostrarInfo(Calcular calc);
int somar(int resposta, Calcular calc);
int subtrair(int resposta, Calcular calc);
int multiplicar(int resposta, Calcular calc);

int pontos = 0;

int main()
{
    srand(time(NULL));

    jogar();

    return 0;
}

void jogar()
{
    Calcular calc;
    int dificuldade;

    printf("Informe o nível de dificuldade [1, 2, 3, ou 4]: \n");
    scanf("%d", &dificuldade);
    calc.dificuldade = dificuldade;

    calc.operacao = rand() % 3;

    switch (calc.dificuldade)
    {
    case 1:
        calc.valor1 = rand() % 11;
        calc.valor2 = rand() % 11;
        break;
    case 2:
        calc.valor1 = rand() % 101;
        calc.valor2 = rand() % 101;
        break;
    case 3:
        calc.valor1 = rand() % 1001;
        calc.valor2 = rand() % 1001;
        break;
    case 4:
        calc.valor1 = rand() % 10001;
        calc.valor2 = rand() % 10001;
        break;
    default:
        calc.valor1 = rand() % 100001;
        calc.valor2 = rand() % 100001;
        break;
    }

    int resposta;
    printf("Informe o resultado para a seguinte operação: \n");

    switch (calc.operacao)
    {
    case 0:
        printf("%d + %d = ", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if (somar(resposta, calc))
        {
            pontos++;
            printf("Você tem %d ponto(s).\n", pontos);
        }
        break;
    case 1:
        printf("%d - %d = ", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if (subtrair(resposta, calc))
        {
            pontos++;
            printf("Você tem %d ponto(s).\n", pontos);
        }
        break;
    case 2:
        printf("%d * %d = ", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if (multiplicar(resposta, calc))
        {
            pontos++;
            printf("Você tem %d ponto(s).\n", pontos);
        }
        break;
    default:
        printf("A operação %d não é reconhecida. \n", calc.operacao);
        break;
    }

    mostrarInfo(calc);

    printf("Deseja continuar jogando? [1 - Sim, 0 - Não]: \n");
    int continuar;
    scanf("%d", &continuar);

    if (continuar)
    {
        jogar();
    }
    else
    {
        printf("Você finalizou com %d ponto(s). \n", pontos);
        exit(0);
    }
}

void mostrarInfo(Calcular calc)
{
    char op[25];

    switch (calc.operacao)
    {
    case 0:
        sprintf(op, "Somar");
        break;
    case 1:
        sprintf(op, "Subtrair");
        break;
    case 2:
        sprintf(op, "Multiplicar");
        break;
    default:
        sprintf(op, "Operação desconhecida!");
        break;
    }

    printf("Valor 1: %d \n", calc.valor1);
    printf("Valor 2: %d \n", calc.valor2);
    printf("Dificuldade: %d \n", calc.dificuldade);
    printf("Operação: %s \n", op);
}

int somar(int resposta, Calcular calc)
{
    int resultado = calc.valor1 + calc.valor2;
    calc.resultado = resultado;

    int certo = 0;

    if (resposta == calc.resultado)
    {
        printf("Resposta correta!\n");
        certo = 1;
    }
    else
    {
        printf("Resposta errada!\n");
    }

    printf("%d + %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

int subtrair(int resposta, Calcular calc)
{
    int resultado = calc.valor1 - calc.valor2;
    calc.resultado = resultado;

    int certo = 0;

    if (resposta == calc.resultado)
    {
        printf("Resposta correta!\n");
        certo = 1;
    }
    else
    {
        printf("Resposta errada!\n");
    }

    printf("%d - %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

int multiplicar(int resposta, Calcular calc)
{
    int resultado = calc.valor1 * calc.valor2;
    calc.resultado = resultado;

    int certo = 0;

    if (resposta == calc.resultado)
    {
        printf("Resposta correta!\n");
        certo = 1;
    }
    else
    {
        printf("Resposta errada!\n");
    }

    printf("%d * %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}