/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Fazer uma função que calcule o MDC de dois números 'a' e 'b'*/

#include <stdio.h>

int mdc (int a, int b)
{
    int i, MDC;
    
    if(a>b)
    {
        for(i = 1; i <= a/2; i++)
        {
            if ((a%i == 0) && (b%i == 0))
            {
                MDC = i;
            }
           
            
        }
    }
    else
    {
        for(i = 1; i <= b/2; i++)
        {
            if ((a%i == 0) && (b%i == 0))
            {
                MDC = i;
            }
            
        }
    }
    
    return MDC;
}

int main() 
{
    int a, b, MDC;
    printf("Digite 2 números para obter o MDC: ");
    scanf("%d %d", &a, &b);
    
    MDC = mdc(a, b);
    
    printf("O MDC entre %d e %d é %d", a, b, MDC);
    
    return 0;
}