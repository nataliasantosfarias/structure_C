#include <stdio.h>

// Definindo a estrutura 'conta_bancaria'
    struct conta_bancaria {
        char cliente[30];    // componente para o nome do cliente
        int agencia;         // componente para indicar a agê             
        int conta;           // número da conta do cliente
        float valor;         // componente que identifica o valor do lançamento
        char tipo;     // tipo de operação bancaria, sendo D=débito e C=crédito
    };

    // Função para exibir uma conta bancária


    void exibirConta(struct conta_bancaria conta) {
        printf("CLiente: %s\n", conta.cliente);
        printf("Agencia: %d\n", conta.agencia);
        printf("conta: %d\n", conta.conta );
        printf("valor: %f\n", conta.valor);
        printf("tipo: %c\n", conta.tipo);

    }

    int main() {
    // Criando uma instância da struct conta_bancaria
    struct conta_bancaria minhaConta = {"Joao da Silva", 1234, 56789, 1000.50, 'C'};

    // Exibindo os detalhes da conta
        printf("Detalhes da conta bancaria:\n");
        exibirConta(minhaConta); //função

        return 0;
}
