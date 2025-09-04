/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

/* Incrementa elementos de um vetor */
void une_intercalado ( int n, int *u, int *v, int *z )
{
    int i;
    for (i = 0; i < n; i++) 
    {
        //adiciona elementos nas posições pares
        z[2*i] = u[i];
        //adiciona elementos nas posições ímpares
        z[2*i+1] = v[i];
    }
}

int main ( void )
{
    //Vetor a[] de 3 elementos
    int a[ ] = {1, 3, 5};
    //Vetor b[] de 3 elementos
    int b[ ] = {2, 4, 6};
    //vetor c[] de 6 elementos (vazio) 
    int c[6];
    //"i" que será utilizado na estrutura de repetição
    int i;
    //chamada da função que une os elementos de 2 listas em 1 intercaladamente 
    une_intercalado(3, a, b, c);
    //estrutura de repetição para imprimir cada elemento da lista (6)
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", c[i]);
    }
        
    return 0;
}