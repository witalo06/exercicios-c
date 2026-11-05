//Misael Witalo Ferreira da Silva
#include <stdio.h>

int main() {
    //Variáveis Usadas
    char dias[3][10] = {"Segunda", "Terca", "Quarta"};
    int comp[3][2];
    int i, j;
    int total[3];
    int mais_ocupado = 0;

    // Entrada de dados
    for(i = 0; i < 3; i++) {
        printf("%s (manha tarde): ", dias[i]);
        for(j = 0; j < 2; j++) {
            scanf("%d", &comp[i][j]);
        }
    }

    // Calcular totais
    for(i = 0; i < 3; i++) {
        total[i] = comp[i][0] + comp[i][1];
        printf("%s: %d compromissos\n", dias[i], total[i]);
    }

    // Descobrir o mais ocupado
    for(i = 1; i < 3; i++) {
        if(total[i] > total[mais_ocupado]) {
            mais_ocupado = i;
        }
    }

    printf("\nDia mais ocupado: %s\n", dias[mais_ocupado]);

    return 0;
}