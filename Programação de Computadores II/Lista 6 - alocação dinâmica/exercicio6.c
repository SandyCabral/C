/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int tam;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int *)malloc(tam * sizeof(int));

    if (vet == NULL) 
    {
        printf("Erro de alocação de memória\n");
        return 1;
    }
    srand(time(0));

    printf("Vetor: ");
    for (int i = 0; i < tam; i++) 
    {
        vet[i] = rand() % 10;
        printf("%d ", vet[i]);
    }
    printf("\n");

    printf("Números que se repetem: ");
    int *contagem = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < tam; i++)
    {
        contagem[vet[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (contagem[i] > 1) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    free(vet);
    free(contagem);

    return 0;
}