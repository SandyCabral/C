/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//REVISAR

#include <stdio.h>

float max_vet(int n, float *vet)
{
    float max = vet[0];

    for (int i = 1; i < n; i++) 
    {
        if (vet[i] > max) 
        {
            max = vet[i];
        }
    }

    return max;
}

int main() 
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vet[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%f", &vet[i]);
    }

    float max = max_vet(n, vet);
    printf("O maior número no vetor é: %.2f\n", max);

    return 0;
}
