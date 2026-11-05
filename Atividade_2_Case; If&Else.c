//Aluno: Misael Witalo Ferreira da Silva
//Aluno: Heitor Alexandre
//Aluno: Bruno de Sousa 

#include <stdio.h>

int main() {

    // variáveis para opção, quantidade, preço e cálculos
    int opcao, quantidade;
    float preco, total, desconto, valorFinal;

    // mostra o menu do restaurante
    printf("MENU\n");
    printf("1 - Hamburguer -> R$ 18\n");
    printf("2 - Pizza -> R$ 30\n");
    printf("3 - Salada -> R$ 12\n");
    printf("4 - Refrigerante -> R$ 6\n");

    // pede a opção do usuário
    printf("Escolha um item: ");
    scanf("%d", &opcao);

    // usa switch para descobrir o item escolhido
    switch (opcao) {

        case 1:
            preco = 18;
            printf("Item escolhido: Hamburguer\n");
            break;

        case 2:
            preco = 30;
            printf("Item escolhido: Pizza\n");
            break;

        case 3:
            preco = 12;
            printf("Item escolhido: Salada\n");
            break;

        case 4:
            preco = 6;
            printf("Item escolhido: Refrigerante\n");
            break;

        default:
            printf("Opcao invalida\n");
            return 0;
    }

    // pergunta a quantidade do item
    printf("Quantidade: ");
    scanf("%d", &quantidade);

    // calcula o valor total
    total = preco * quantidade;

    // verifica se o total é maior que 100
    if (total > 100) {
        desconto = total * 0.15;
        printf("Desconto: 15%\n");
    }

    // verifica se o total é maior que 50
    else if (total > 50) {
        desconto = total * 0.10;
        printf("Desconto: 10%\n");
    }

    // se não tiver desconto
    else {
        desconto = 0;
        printf("Desconto: 0%\n");
    }

    // calcula o valor final após o desconto
    valorFinal = total - desconto;

    // mostra os resultados
    printf("Total: %.2f\n", total);
    printf("Valor final: %.2f\n", valorFinal);


    return 0;
}