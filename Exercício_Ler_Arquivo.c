//Misael Witalo Ferreira da Silva

#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[50];
    int idade;
    float nota;
};

struct Aluno lerAluno(){
    struct Aluno a;
    char buffer[50];

    printf("Digite o nome do Aluno: ");
    fgets(a.nome, sizeof(a.nome), stdin);

    printf("Digite a idade: ");
    fgets(buffer, sizeof(buffer), stdin);
    a.idade = atoi(buffer);

    printf("Digite a nota: ");
    fgets(buffer, sizeof(buffer), stdin);
    a.nota = atof(buffer);

    return a;
}

// Função para salvar em arquivo 
void salvarArquivo(struct Aluno a){
    
    FILE *arquivo = fopen("alunos.txt", "a");
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    fprintf(arquivo, "Nome: %sIdade: %d\nNota: %.2f\n\n",
            a.nome, a.idade, a.nota);
    
    fclose(arquivo);
}
// Função para ler Arquivo
void lerArquivo(){
    FILE *arquivo = fopen("alunos.txt", "r");
    char linha[100];

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    printf("\n=== Dados salvos ===\n\n");

    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }

    fclose(arquivo);
}

// função principal
int main(){
    struct Aluno aluno;
    
    aluno = lerAluno();
    salvarArquivo(aluno);

    printf("\nAluno salvo com sucesso!\n");

    // chamada da função de leitura
    lerArquivo();

    return 0;
}