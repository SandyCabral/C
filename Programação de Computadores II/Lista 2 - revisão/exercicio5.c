/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Ler um número X e Z, com Z > X e contar quantos números em sequência 
devem ser somados a X para que ultrapasse a Z o mínimo possível*/

#include <stdio.h>

int main() 
{
    int x, z, soma = 0, resposta = 0;
    printf("Digite 2 números inteiros: ");
    scanf("%d %d", &x, &z);
    
    // Garantir que X não seja maior que Z
    if (x<z)
    {
    // Parar quando a soma for maior ou igual a Z
    while(soma < z)
    {
        soma += x;
        x += 1;
        resposta += 1;
    }
    }
    else
    {
        printf("X deve ser menor que Z!");
    }
    printf("%d\n", resposta);
    
    return 0;
}