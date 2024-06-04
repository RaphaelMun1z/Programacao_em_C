#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

typedef struct
{
    int codigo;
    char nome[30];
    float preco;
} Produto;

typedef struct
{
    Produto produto;
    int quantidade;
} Carrinho;

void infoProduto(Produto prod);
void menu();
void cadastrarProduto();
void listarProdutos();
void comprarProduto();
void visualizarCarrinho();
Produto pegarProdutoPorCodigo(int codigo);
int *temNoCarrinho(int codigo);
void fecharPedido();

static int contador_produto = 0;
static int contador_carrinho = 0;
static Carrinho carrinho[50];
static Produto produtos[50];

int main()
{
    menu();

    return 0;
}

void infoProduto(Produto prod)
{
    printf("Código: %d\n", prod.codigo);
    printf("Nome: %s\n", strtok(prod.nome, "\n"));
    printf("Preço: %.2f\n", prod.preco);
}

void menu()
{
    printf("====================================================\n");
    printf("==================| Bem-vindo(a) |==================\n");
    printf("====================================================\n");

    printf("Selecione uma opção abaixo: \n");
    printf("1 - Cadastrar produto\n");
    printf("2 - Listar produtos\n");
    printf("3 - Comprar produto\n");
    printf("4 - Visualizar carrinho\n");
    printf("5 - Fechar pedido\n");
    printf("6 - Sair\n");

    int opcao;
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 1:
        cadastrarProduto();
        break;
    case 2:
        listarProdutos();
        break;
    case 3:
        comprarProduto();
        break;
    case 4:
        visualizarCarrinho();
        break;
    case 5:
        fecharPedido();
        break;
    case 6:
        printf("Volte sempre!\n");
        sleep(2);
        exit(0);
        break;
    default:
        printf("Opção inválida.\n");
        sleep(2);
        menu();
        break;
    }
}

void cadastrarProduto()
{
    printf("==============| Cadastro de produto |===============\n");
    printf("====================================================\n");

    printf("Informe o nome do produto: ");
    fgets(produtos[contador_produto].nome, 30, stdin);

    printf("Informe o preço do produto: ");
    scanf("%f", &produtos[contador_produto].preco);

    printf("O produto %s foi cadastrado com sucesso! \n", strtok(produtos[contador_produto].nome, "\n"));

    produtos[contador_produto].codigo = (contador_produto + 1);
    contador_produto++;

    sleep(2);
    menu();
}

void listarProdutos()
{
    if (contador_produto > 0)
    {
        printf("==============| Listagem de produtos |==============\n");
        printf("====================================================\n");

        for (int ii = 0; ii < contador_produto; ii++)
        {
            infoProduto(produtos[ii]);
            printf("----------------------------------------------------\n");
            sleep(1);
        }

        sleep(2);
        menu();
    }
    else
    {
        printf("Não há produtos cadastrados.\n");
        sleep(2);
        menu();
    }
}

void comprarProduto()
{
    if (contador_produto > 0)
    {
        printf("Informe o código do produto: \n");

        printf("====================| Produtos |====================\n");
        printf("====================================================\n");

        for (int ii = 0; ii < contador_produto; ii++)
        {
            infoProduto(produtos[ii]);
            printf("----------------------------------------------------\n");
            sleep(1);
        }

        int codigo;
        scanf("%d", &codigo);
        getchar();

        int tem_mercado = 0;
        for (int ii = 0; ii < contador_produto; ii++)
        {
            if (produtos[ii].codigo == codigo)
            {
                tem_mercado = 1;

                if (contador_carrinho > 0)
                {
                    int *retorno = temNoCarrinho(codigo);

                    if (retorno[0] == 1)
                    {
                        carrinho[retorno[1]].quantidade++;
                        printf("[+1] %s.\n", strtok(carrinho[retorno[1]].produto.nome, "\n"));
                        sleep(2);
                        menu();
                    }
                    else
                    {
                        Produto p = pegarProdutoPorCodigo(codigo);
                        carrinho[contador_carrinho].produto = p;
                        carrinho[contador_carrinho].quantidade = 1;
                        contador_carrinho++;
                        printf("O produto %s foi adicionado ao carrinho. \n", strtok(p.nome, "\n"));
                        sleep(2);
                        menu();
                    }
                }
                else
                {
                    Produto p = pegarProdutoPorCodigo(codigo);
                    carrinho[contador_carrinho].produto = p;
                    carrinho[contador_carrinho].quantidade = 1;
                    contador_carrinho++;
                    printf("O produto %s foi adicionado ao carrinho. \n", strtok(p.nome, "\n"));
                    sleep(2);
                    menu();
                }
            }
        }

        if (tem_mercado < 1)
        {
            printf("Não foi encontrado o produto com o código %d. \n", codigo);
            sleep(2);
            menu();
        }
    }
    else
    {
        printf("Não há produtos cadastrados.\n");
        sleep(2);
        menu();
    }
}

void visualizarCarrinho()
{
    if (contador_carrinho > 0)
    {
        printf("====================| Carrinho |====================\n");
        printf("====================================================\n");

        for (int ii = 0; ii < contador_carrinho; ii++)
        {
            infoProduto(carrinho[ii].produto);
            printf("Quantidade: %d\n", carrinho[ii].quantidade);
            printf("----------------------------------------------------\n");
            sleep(1);
        }

        sleep(2);
        menu();
    }
    else
    {
        printf("Carrinho vazio.\n");
        sleep(2);
        menu();
    }
}

Produto pegarProdutoPorCodigo(int codigo)
{
    Produto p;

    for (int ii = 0; ii < contador_produto; ii++)
    {
        if (produtos[ii].codigo == codigo)
        {
            p = produtos[ii];
        }
    }

    return p;
}

int *temNoCarrinho(int codigo)
{
    int static retorno[] = {0, 0};

    for (int ii = 0; ii < contador_carrinho; ii++)
    {
        if (carrinho[ii].produto.codigo == codigo)
        {
            retorno[0] = 1;
            retorno[1] = ii;
        }
    }

    return retorno;
}

void fecharPedido()
{
    if (contador_carrinho > 0)
    {
        float valorTotal = 0.0;

        printf("====================| Carrinho |====================\n");
        printf("====================================================\n");

        for (int ii = 0; ii < contador_carrinho; ii++)
        {
            Produto p = carrinho[ii].produto;
            int quantidade = carrinho[ii].quantidade;
            valorTotal += p.preco * quantidade;

            infoProduto(p);
            printf("Quantidade: %d\n", quantidade);
            printf("----------------------------------------------------\n");
            sleep(1);
        }

        printf("Total: R$%.2f \n", valorTotal);

        contador_carrinho = 0;
        printf("Obrigado pela preferência. \n");
        sleep(5);
        menu();
    }
    else
    {
        printf("O carrinho está vazio.\n");
        sleep(3);
        menu();
    }
}