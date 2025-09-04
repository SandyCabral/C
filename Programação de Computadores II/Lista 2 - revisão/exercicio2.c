/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

//Somar os "n" primeiros números ímpares
int main()
{
    int n, i, soma = 0;
    printf("Digite a quantidade de números ímpares a ser somado: \n");
    scanf("%d", &n);
    
    for (i = 1; i <= 2*n; i += 2)
    {
       soma += i;
    }

    printf("A soma dos %d primeiros números naturais ímpares = %d", n, soma);
    
    return 0;
}