#include <stdio.h>
#define N 3

void lerMatriz(int matriz[N][N]) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int Simetrica(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() 
{
    int matriz[N][N];

    lerMatriz(matriz);

    if (Simetrica(matriz)) 
    {
        printf("A matriz é simétrica.\n");
    } 
    else 
    {
        printf("A matriz não é simétrica.\n");
    }

    return 0;
}

