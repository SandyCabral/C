#include <stdio.h>

void inicializarVetor(char vetor[]) {
    for (int i = 0; i < 26; i++) {
        vetor[i] = 'a' + i;
    }
}

void imprimirVetor(const char vetor[]) {
    for (int i = 0; i < 26; i++) {
        printf("%c ", vetor[i]);
    }
    printf("\n");
}

int main() {
    char alfabeto[26];

    inicializarVetor(alfabeto);
    imprimirVetor(alfabeto);

    return 0;
}

