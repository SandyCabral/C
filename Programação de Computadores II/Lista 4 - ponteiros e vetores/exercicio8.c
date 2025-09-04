/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10  // Número par de elementos

int main() {
    int vetor[TAMANHO];
    int *inicio, *fim;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Preenche o vetor com valores aleatórios
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 100;  // Valores aleatórios entre 0 e 99
    }

    // Imprime o vetor
    printf("Vetor: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Inicializa os ponteiros
    inicio = &vetor[0];
    fim = &vetor[TAMANHO - 1];

    // Percorre o vetor usando os dois ponteiros
    while (inicio <= fim) {
        printf("Inicio aponta para: %d, Fim aponta para: %d\n", *inicio, *fim);
        inicio++;
        fim--;
    }

    return 0;
}