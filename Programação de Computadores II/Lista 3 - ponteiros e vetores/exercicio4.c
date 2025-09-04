/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//REVISAR

#include <stdio.h>

int divs(int n, int *min, int *max)
{
    int i;
    int primo = 1;

    *min = n;
    *max = 1;

    for (i = 2; i <= n/2; i++) 
    {
        if (n % i == 0) 
        {
            if (primo) 
            {
                *min = i;
                primo = 0;
            }
            *max = i;
        }
    }

    return primo ? 0 : 1;
}

int main() 
{
    int num, menor, maior, resultado;

    printf("Digite um número: ");
    scanf("%d", &num);

    resultado = divs(num, &menor, &maior);

    if (resultado == 0) 
    {
        printf("%d é um número primo.\n", num);
    } else 
    {
        printf("%d não é um número primo.\n", num);
        printf("Menor divisor: %d\n", menor);
        printf("Maior divisor: %d\n", maior);
    }

    return 0;
}
