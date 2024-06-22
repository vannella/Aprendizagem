#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct Node {
    int num;
    struct Node *prox;
    struct Node *ant;
} Node;

// Função principal para testar as operações
int main() {
    Node *head = NULL;

    // Inserção de elementos na lista
    int values[] = {10, 20, 15, 5};
    for (int i = 0; i < 4; i++) {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->num = values[i];
        newNode->prox = NULL;
        newNode->ant = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node *current = head;
            Node *previous = NULL;
            while (current != NULL && current->num < values[i]) {
                previous = current;
                current = current->prox;
            }
            newNode->prox = current;
            newNode->ant = previous;
            if (previous != NULL) {
                previous->prox = newNode;
            } else {
                head = newNode;
            }
            if (current != NULL) {
                current->ant = newNode;
            }
        }
    }

    // Impressão da lista do início ao fim
    printf("Lista do início ao fim: ");
    Node *current = head;
    while (current != NULL) {
        printf("%d ", current->num);
        current = current->prox;
    }
    printf("\n");

    // Impressão da lista do fim ao início
    printf("Lista do fim ao início: ");
    current = head;
    if (current != NULL) {
        while (current->prox != NULL) {
            current = current->prox;
        }
        while (current != NULL) {
            printf("%d ", current->num);
            current = current->ant;
        }
    }
    printf("\n");

    // Remoção de um elemento específico
    int valueToRemove = 15;
    current = head;
    while (current != NULL && current->num != valueToRemove) {
        current = current->prox;
    }
    if (current != NULL) {
        if (current->ant != NULL) {
            current->ant->prox = current->prox;
        } else {
            head = current->prox;
        }
        if (current->prox != NULL) {
            current->prox->ant = current->ant;
        }
        free(current);
    }

    // Impressão da lista após remoção
    printf("Lista após remover %d: ", valueToRemove);
    current = head;
    while (current != NULL) {
        printf("%d ", current->num);
        current = current->prox;
    }
    printf("\n");

    // Esvaziamento da lista
    current = head;
    while (current != NULL) {
        Node *next = current->prox;
        free(current);
        current = next;
    }
    head = NULL;

    // Impressão da lista após esvaziamento
    printf("Lista após esvaziar: ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->num);
        current = current->prox;
    }
    printf("\n");

    return 0;
}

