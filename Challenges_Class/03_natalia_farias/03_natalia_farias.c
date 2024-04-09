#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para representar um produto
typedef struct {
    char nome[50];
    char segmento[20];
    float precoCompra;
    float precoVenda;
    char unidade[5];
    int quantidadeEstoque;
} Produto;

// Função para adicionar um novo produto ao estoque
void adicionarProduto(Produto *estoque, int *totalProdutos) {
    printf("Nome do produto: ");
    fgets(estoque[*totalProdutos].nome, sizeof(estoque[*totalProdutos].nome), stdin);
    strtok(estoque[*totalProdutos].nome, "\n"); // Remover a quebra de linha
    
    printf("Segmento (limpeza, comida, etc.): ");
    fgets(estoque[*totalProdutos].segmento, sizeof(estoque[*totalProdutos].segmento), stdin);
    strtok(estoque[*totalProdutos].segmento, "\n"); // Remover a quebra de linha
    
    printf("Preço de compra: ");
    scanf("%f", &estoque[*totalProdutos].precoCompra);
    
    printf("Preço de venda: ");
    scanf("%f", &estoque[*totalProdutos].precoVenda);
    
    printf("Unidade comercial ('kg', 'un'.): ");
    scanf("%s", estoque[*totalProdutos].unidade);
    
    printf("Quantidade em estoque: ");
    scanf("%d", &estoque[*totalProdutos].quantidadeEstoque);

    getchar(); // Limpar o buffer do teclado
    (*totalProdutos)++;
}

// Função para exibir todos os produtos no estoque
void exibirEstoque(Produto *estoque, int totalProdutos) {
    printf("\nRelatório de gestão de produtos:\n");
    printf("--------------------------------\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("Nome: %s\n", estoque[i].nome);
        printf("Segmento: %s\n", estoque[i].segmento);
        printf("Preço de compra: R$%.2f\n", estoque[i].precoCompra);
        printf("Preço de venda: R$%.2f\n", estoque[i].precoVenda);
        printf("Unidade: %s\n", estoque[i].unidade);
        printf("Quantidade em estoque: %d\n", estoque[i].quantidadeEstoque);
        printf("--------------------------------\n");
    }
}

int main() {
    // Definindo o tamanho máximo do estoque
    const int MAX_PRODUTOS = 10;

    // Criando o array de produtos
    Produto estoque[MAX_PRODUTOS];
    int totalProdutos = 0;
    int opcao;

    do {
        printf("\nSelecione uma opção:\n");
        printf("1. Adicionar produto\n");
        printf("2. Exibir relatório de gestão de produtos\n");
        printf("3. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (totalProdutos < MAX_PRODUTOS) {
                    adicionarProduto(estoque, &totalProdutos);
                } else {
                    printf("O estoque está cheio.\n");
                }
                break;
            case 2:
                exibirEstoque(estoque, totalProdutos);
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 3);

    return 0;
}
