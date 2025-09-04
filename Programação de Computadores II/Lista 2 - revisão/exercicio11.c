/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Programa para potenciação*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int x, y, potencia;
    printf("Digite 2 números inteiros: ");
    scanf("%d %d", &x, &y);
    
    potencia = pow(x, y);
    
    printf("%d", potencia);
    
    return 0;
}