/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//*REVISAR* (novamente)

#include <stdio.h>

int maiores(int n, int *vet, int x)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (vet[i] > x) 
        {
            count++;
        }
    }

    return count;
}

int main() 
{
    int n, x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vet[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    int resultado = maiores(n, vet, x);
    printf("Existem %d números maiores que %d no vetor.\n", resultado, x);

    return 0;
}
