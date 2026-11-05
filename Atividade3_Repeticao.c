// Misael Witalo Ferreira da Silva
#include <stdio.h>

int main() {
    // Definindo a capacidade máxima do estacionamento
    int capacidade = 10;

    // Variável para controlar quantos veículos estão estacionados
    int ocupados = 0;

    // Variável para o menu
    int opcao;

    // Laço para manter o sistema rodando
    do {
        // Exibindo o menu
        printf("\n=== SISTEMA DE ESTACIONAMENTO ===\n");
        printf("1 - Entrada de veiculo\n");
        printf("2 - Saida de veiculo\n");
        printf("3 - Mostrar vagas disponiveis\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Estrutura de decisão
        if (opcao == 1) {
            // Entrada de veículo
            if (ocupados < capacidade) {
                ocupados++; // operador de atribuição
                printf("Veiculo entrou com sucesso!\n");
            } else {
                printf("Estacionamento lotado!\n");
            }

        } else if (opcao == 2) {
            // Saída de veículo
            if (ocupados > 0) {
                ocupados--; // operador de atribuição
                printf("Veiculo saiu com sucesso!\n");
            } else {
                printf("Estacionamento vazio!\n");
            }

        } else if (opcao == 3) {
            // Mostrar vagas
            int livres = capacidade - ocupados; // operação aritmética

            printf("\n--- Situacao do Estacionamento ---\n");
            printf("Total de vagas: %d\n", capacidade);
            printf("Vagas ocupadas: %d\n", ocupados);
            printf("Vagas livres: %d\n", livres);

        } else if (opcao == 0) {
            printf("Encerrando o sistema...\n");

        } else {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0); // condição do laço

    return 0;
}