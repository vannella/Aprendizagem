// Lista Duplamente Encadeada e Ordenada

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct No {
    int num;
    struct No *prox;
    struct No *ant;
} No;

// Função principal para testar as operações
int main() {
    No *cabeca = NULL;

    // Inserção de elementos na lista
    int valores[] = {10, 20, 15, 5};
    for (int i = 0; i < 4; i++) {
        No *novoNo = (No *)malloc(sizeof(No));
        novoNo->num = valores[i];
        novoNo->prox = NULL;
        novoNo->ant = NULL;

        if (cabeca == NULL) {
            cabeca = novoNo;
        } else {
            No *atual = cabeca;
            No *anterior = NULL;
            while (atual != NULL && atual->num < valores[i]) {
                anterior = atual;
                atual = atual->prox;
            }
            novoNo->prox = atual;
            novoNo->ant = anterior;
            if (anterior != NULL) {
                anterior->prox = novoNo;
            } else {
                cabeca = novoNo;
            }
            if (atual != NULL) {
                atual->ant = novoNo;
            }
        }
    }

    // Impressão da lista do início ao fim
    printf("Lista do início ao fim: ");
    No *atual = cabeca;
    while (atual != NULL) {
        printf("%d ", atual->num);
        atual = atual->prox;
    }
    printf("\n");

    // Impressão da lista do fim ao início
    printf("Lista do fim ao início: ");
    atual = cabeca;
    if (atual != NULL) {
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        while (atual != NULL) {
            printf("%d ", atual->num);
            atual = atual->ant;
        }
    }
    printf("\n");

    // Remoção de um elemento específico
    int valorParaRemover = 15;
    atual = cabeca;
    while (atual != NULL && atual->num != valorParaRemover) {
        atual = atual->prox;
    }
    if (atual != NULL) {
        if (atual->ant != NULL) {
            atual->ant->prox = atual->prox;
        } else {
            cabeca = atual->prox;
        }
        if (atual->prox != NULL) {
            atual->prox->ant = atual->ant;
        }
        free(atual);
    }

    // Impressão da lista após remoção
    printf("Lista após remover %d: ", valorParaRemover);
    atual = cabeca;
    while (atual != NULL) {
        printf("%d ", atual->num);
        atual = atual->prox;
    }
    printf("\n");

    // Esvaziamento da lista
    atual = cabeca;
    while (atual != NULL) {
        No *proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
    cabeca = NULL;

    // Impressão da lista após esvaziamento
    printf("Lista após esvaziar: ");
    atual = cabeca;
    while (atual != NULL) {
        printf("%d ", atual->num);
        atual = atual->prox;
    }
    printf("\n");

    return 0;
}
