#include <stdio.h>

#define L 3
#define C 4

void lerMatriz(int matriz[L][C], int linhas, int colunas) 
{
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somarMatrizes(int matriz1[L][C], int matriz2[L][C], int resultado[L][C], int linhas, int colunas) 
{
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void imprimirMatriz(int matriz[L][C], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[L][C];
    int matriz2[L][C];
    int resultado[L][C];

    printf("Digite os elementos da primeira matriz:\n");
    lerMatriz(matriz1, L, C);

    printf("Digite os elementos da segunda matriz:\n");
    lerMatriz(matriz2, L, C);

    somarMatrizes(matriz1, matriz2, resultado, L, C);

    printf("A soma das matrizes é:\n");
    imprimirMatriz(resultado, L, C);

    return 0;
}
