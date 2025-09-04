/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int maior;
    int menor;
    int media;
    
    printf("Digite 3 números: ")
    scanf("%d, %d, %d", &a, &b, &c);
    // Descobrir o maior
    if (a > b && a > c)
    {
        maior = a;
    }
    else if (b > c)
    {
        maior = b;
    }
    else
    {
        maior = c;
    }
    // Descobrir o menor
    if (a < b && a < c)
    {
        menor = a;
    }
    else if (b < c)
    {
        menor = b;
    }
    else
    {
        menor = c;
    }
    printf("O menor é = %d, O maior é = %d \n", menor, maior);
    // Descobrir os pares
    if (a % 2 == 0)
    {
        printf("%d é par \n", a);
    }
    if (b % 2 == 0)
    {
        printf("%d é par \n", b);
    }
    if (c % 2 == 0)
    {
        printf("%d é par \n", c);
    }
    // Calcular a média
    media = (a+b+c)/3;
    printf("A média de a, b e c = %d \n", media);
    return 0;
}
	