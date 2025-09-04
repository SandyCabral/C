/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Função que calcula a média

#include <stdio.h>

float media(int n, float *v)
{
    float soma = 0.0;

    for (int i = 0; i < n; i++)
    {
        soma += v[i];
    }

    return soma / n;
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

    float resultado = media(n, vet);
    printf("A média dos elementos do vetor é: %.2f\n", resultado);

    return 0;
}
