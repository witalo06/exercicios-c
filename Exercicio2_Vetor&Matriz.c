//Misael Witalo Ferreira Da Silva
#include <stdio.h>
int main() {
    //Variáveis usadas
    char nomes[3][20] = {"Ana", "Bruno", "Carlos"};
    float notas[3][3];
    float media[3];
    int i, j;
    int melhor = 0;

    // Entrada das notas
    for(i = 0; i < 3; i++) {
        printf("Digite as 3 notas de %s: ", nomes[i]);
        for(j = 0; j < 3; j++) {
            scanf("%f", &notas[i][j]);
        }
    }

    // Cálculo das médias
    for(i = 0; i < 3; i++) {
        float soma = 0;

        for(j = 0; j < 3; j++) {
            soma += notas[i][j];
        }

        media[i] = soma / 3.0;
        printf("%s: Media %.2f\n", nomes[i], media[i]);
    }

    // Descobrir o melhor aluno
    for(i = 1; i < 3; i++) {
        if(media[i] > media[melhor]) {
            melhor = i;
        }
    }
    //Resultado do cálculo
    printf("\nMelhor aluno: %s\n", nomes[melhor]);

    return 0;
}