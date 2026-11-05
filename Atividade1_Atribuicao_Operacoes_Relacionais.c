//Misael Witalo Ferreira da Silva
#include <stdio.h>

int main() {
    // Declaração das variáveis
    char nome[50];
    float salarioAtual, novoSalario, aumento;
    int tempoEmpresa;
    float percentual;

    // Entrada de dados
    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);

    printf("Digite o salario atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de empresa (em anos): ");
    scanf("%d", &tempoEmpresa);

    // Verificando o tempo de empresa para aplicar o reajuste
    if (tempoEmpresa < 1) {
        percentual = 0.05; // 5%
    } else if (tempoEmpresa >= 1 && tempoEmpresa < 5) {
        percentual = 0.10; // 10%
    } else {
        percentual = 0.15; // 15%
    }

    // Cálculo do aumento
    aumento = salarioAtual * percentual;

    // Cálculo do novo salário usando operador de atribuição
    novoSalario = salarioAtual + aumento;

    // Saída de dados
    printf("\n--- Resultado ---\n");
    printf("Nome do funcionario: %s\n", nome);
    printf("Salario antigo: R$ %.2f\n", salarioAtual);
    printf("Percentual aplicado: %.0f%%\n", percentual * 100);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}