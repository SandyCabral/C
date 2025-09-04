/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Identificar se número é PRIMO ou NÃO PRIMO

int main()
{
    int numero, i;
    printf("Digite um número para verificar se é PRIMO ou NÃO PRIMO: \n");
    scanf("%d", &numero);
    
    // Dividir por todos os números até a metade do próprio número
    for (i = 2; i <= ((numero/2)+1); i++)
    {
       if (numero%i == 0)
       {
           printf("Número NÃO PRIMO\n");
           return 0;
       }
    }
    
    // No caso de não ser divisível por nenhum, o número é PRIMO
    printf("Número PRIMO\n");
    
    return 0;
}