#include <stdio.h>
#include <stdlib.h>

// Função para ler o vetor do arquivo "entrada.txt"
int *le_vetor(int *n) {
    FILE *fr;
    int *v, i;

    fr = fopen("entrada.txt", "r");
    if (fr == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        exit(-1);
    }

    // Lê a dimensão do vetor
    fscanf(fr, "%d", n);

    // Aloca memória para o vetor
    v = (int*)malloc(*n * sizeof(int));
    if (v == NULL) {
        printf("Falta memória\n");
        exit(1);
    }

    // Lê os elementos do vetor
    for (i = 0; i < *n; i++) {
        fscanf(fr, "%d", &v[i]);
    }

    fclose(fr); // Fecha o arquivo após a leitura

    return v;
}

// Função para escrever o vetor no arquivo "saida.txt"
void escreve_vetor(int *v, int n) {
    FILE *fw; // define e variável arquivo
    int i;

    fw = fopen("saida.txt", "w");
    if (fw == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        exit(-1);
    }

    // Grava a dimensão do vetor
    fprintf(fw, "%d\n", n);

    // Grava os elementos do vetor no arquivo
    for (i = 0; i < n; i++) {
        fprintf(fw, "%d ", v[i]);
    }

    fclose(fw); // Fecha o arquivo após a escrita
}

int main() {
    int *v;
    int n;

    // Lê o vetor do arquivo de entrada
    v = le_vetor(&n);

    // Escreve o vetor no arquivo de saída
    escreve_vetor(v, n);

    // Libera a memória alocada
    free(v);

    return 0;
}


