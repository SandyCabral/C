/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

//Somar os "n" primeiros termos da série de Fibonacci
int main()
{
    int n, i, prox_termo;
    int n1 = 1, n2 = 1;
    
    printf("Digite a qtd de termos da série de Fibonacci a serem impressos: \n");
    scanf("%d", &n);
    printf("%d %d", n1, n2);
    
    for (i = 1; i <= n-2; i++)
    {
       prox_termo = n1 + n2;
       n1 = n2;
       n2 = prox_termo;
       printf(" %d", prox_termo);
    }
    
    return 0;
}