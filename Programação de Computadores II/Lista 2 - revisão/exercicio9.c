/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*REVISAR: Fazer uma função que inverta o número de trás pra frente*/

#include <stdio.h>

unsigned int inverte(unsigned int num)
{
    unsigned int invertido = 0;

    while (num != 0)
    {
        invertido = invertido * 10 + (num % 10);
        printf("%u\n", invertido);
        num /= 10;
        printf("%u\n", num);
    }

    return invertido;
}

int main() 
{
    unsigned int num, resultado;
    
    printf("Digite um número inteiro não negativo: ");
    scanf("%u", &num);

    resultado = inverte(num);

    printf("Número invertido: %u\n", resultado);

    return 0;
}