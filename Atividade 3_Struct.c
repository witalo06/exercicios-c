//Misael Witalo Ferreira da Silva
#include <stdio.h>

typedef struct {
    int numero;
    char titular[50];
    float saldo;
} Conta;

void depositar(Conta *c, float valor) {
    c->saldo += valor;
    printf("Sucesso! Novo saldo: R$ %.2f\n", c->saldo);
}

void sacar(Conta *c, float valor) {
    if (valor > c->saldo) {
        printf("ERRO: Saldo insuficiente! (Saldo atual: R$ %.2f)\n", c->saldo);
    } else {
        c->saldo -= valor;
        printf("Saque realizado! Novo saldo: R$ %.2f\n", c->saldo);
    }
}

int main() {
    Conta conta1 = {101, "Aluno ADS", 500.00};
    int opcao;
    float valor;

    do {
        printf("\n--- BANCO ADS ---\n");
        printf("1. Ver Saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nSaldo atual: R$ %.2f\n", conta1.saldo);
                break;
            case 2:
                printf("Valor para depósito: ");
                scanf("%f", &valor);
                depositar(&conta1, valor);
                break;
            case 3:
                printf("Valor para saque: ");
                scanf("%f", &valor);
                sacar(&conta1, valor);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 0);

    return 0;
}
