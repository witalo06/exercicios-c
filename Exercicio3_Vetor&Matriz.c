//Misael Witalo Ferreira da Silva
#include <stdio.h>

int main() {
    //Variáveis utilizadas
    int matriz[3][3];
    int i, j;
    int pares = 0;
    int impares = 0;
    int soma = 0;

    // Entrada de dados
    printf("Digite os 9 valores da matriz:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Processamento
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {

            soma = soma + matriz[i][j];

            if(matriz[i][j] % 2 == 0) {
                pares = pares + 1;
            } else {
                impares = impares + 1;
            }
        }
    } 
    // Saída
    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);
    printf("Soma total: %d\n", soma);

    return 0;
}