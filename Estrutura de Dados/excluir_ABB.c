#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int chave;
    struct No *esquerda, *direita;
} No;

// Função para criar um novo nó
No* criarNo(int chave) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->chave = chave;
    novoNo->esquerda = novoNo->direita = NULL;
    return novoNo;
}

// Função para inserir um nó na árvore
No* inserir(No* raiz, int chave) {
    if (raiz == NULL) return criarNo(chave);
    if (chave < raiz->chave)
        raiz->esquerda = inserir(raiz->esquerda, chave);
    else
        raiz->direita = inserir(raiz->direita, chave);
    return raiz;
}

// Função para encontrar o menor nó na subárvore
No* encontrarMenor(No* no) {
    while (no->esquerda != NULL)
        no = no->esquerda;
    return no;
}

// Função para excluir um nó
No* excluirNo(No* raiz, int chave) {
    if (raiz == NULL) return raiz;

    if (chave < raiz->chave) {
        raiz->esquerda = excluirNo(raiz->esquerda, chave);
    } else if (chave > raiz->chave) {
        raiz->direita = excluirNo(raiz->direita, chave);
    } else {
        // Caso 1: Nó folha
        if (raiz->esquerda == NULL && raiz->direita == NULL) {
            free(raiz);
            return NULL;
        }
        // Caso 2: Nó com uma subárvore
        else if (raiz->esquerda == NULL) {
            No* temp = raiz->direita;
            free(raiz);
            return temp;
        } else if (raiz->direita == NULL) {
            No* temp = raiz->esquerda;
            free(raiz);
            return temp;
        }
        // Caso 3: Nó com duas subárvores
        else {
            No* temp = encontrarMenor(raiz->direita);
            raiz->chave = temp->chave;
            raiz->direita = excluirNo(raiz->direita, temp->chave);
        }
    }
    return raiz;
}

// Função para imprimir a árvore em ordem
void emOrdem(No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        printf("%d ", raiz->chave);
        emOrdem(raiz->direita);
    }
}

int main() {
    No* raiz = NULL;
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    printf("Árvore antes da exclusão:\n");
    emOrdem(raiz);
    printf("\n");

    raiz = excluirNo(raiz, 30); // Excluindo um nó com uma subárvore

    printf("Árvore após exclusão:\n");
    emOrdem(raiz);
    printf("\n");

    return 0;
}