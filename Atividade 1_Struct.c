//Misael Witalo Ferreira da Silva
#include <stdio.h>

// Struct Aluno
struct Aluno {
    int matricula;
    char nome[50];
    float nota;
};

// Função para exibir dados
void exibirAluno(struct Aluno a) {
    printf("\nMatricula: %d", a.matricula);
    printf("\nNome: %s", a.nome);
    printf("\nNota: %.2f\n", a.nota);
}

// Função para verificar aprovação
void verificarAprovacao(struct Aluno a) {
    if (a.nota >= 6) {
        printf("Status: Aprovado\n");
    } else {
        printf("Status: Reprovado\n");
    }
}

int main() {
    struct Aluno aluno1;
    // Os próximos comandos pedem a matrícula, nome e nota
    printf("Digite a matricula: ");
    scanf("%d", &aluno1.matricula);

    printf("Digite o nome: ");
    scanf(" %[^\n]", aluno1.nome);

    printf("Digite a nota: ");
    scanf("%f", &aluno1.nota);

    exibirAluno(aluno1);
    verificarAprovacao(aluno1);

    return 0;
}


