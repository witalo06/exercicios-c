//Misael Witalo Ferreira da Silva
#include <stdio.h>

int main() {
    // Matriz 3x3 (3 dias x 3 períodos: manhã, tarde, noite)
    float temp[3][3];
    float media;
    float maior;
    int i, j;

    // Entrada de dados
    for(i = 0; i < 3; i++) {
        printf("Digite as temperaturas do Dia %d:\n", i + 1);
        
        for(j = 0; j < 3; j++) {
            printf("Periodo %d: ", j + 1);
            scanf("%f", &temp[i][j]);
        }
    }

    // Inicializa maior com o primeiro valor
    maior = temp[0][0];

    printf("\n--- Resultado ---\n");

    // Cálculo das médias e maior temperatura
    for(i = 0; i < 3; i++) {
        media = 0;

        for(j = 0; j < 3; j++) {
            media += temp[i][j];

            // verifica maior temperatura
            if(temp[i][j] > maior) {
                maior = temp[i][j];
            }
        }

        media = media / 3; // calcula média do dia
        printf("Media Dia %d: %.2f\n", i + 1, media);
    }

    // Mostra maior temperatura
    printf("\nMaior temperatura: %.0f\n", maior);

    return 0;
}
