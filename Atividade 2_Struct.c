//Misael Witalo Ferreira da Silva
#include <stdio.h>
// Struct
struct Produto {
    char nome[50];
    int quantidade;
};

// Função para adicionar
void adicionar(struct Produto *p, int qtd) {
    p->quantidade += qtd;
}

// Função para remover
void remover(struct Produto *p, int qtd) {
    if (qtd <= p->quantidade) {
        p->quantidade -= qtd;
    } else {
        printf("Erro: estoque insuficiente!\n");
    }
}

// Mostrar produto
void mostrar(struct Produto p) {
    printf("\nProduto: %s", p.nome);
    printf("\nQuantidade: %d\n", p.quantidade);
}

int main() {
    struct Produto p;

    printf("Nome: ");
    scanf(" %[^\n]", p.nome);

    printf("Quantidade inicial: ");
    scanf("%d", &p.quantidade);

    adicionar(&p, 5);
    remover(&p, 3);
    remover(&p, 10); // teste de erro

    mostrar(p);

    return 0;
}
