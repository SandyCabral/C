/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/* REVISAR: 3025 = 30 + 25 = 55 -> 55*55 = 3025
Obtenha todos os números de 4 algarismos
com essa característica do número 3025.*/

#include <stdio.h>

int main()
{
    int num, parte1, parte2, soma, quadrado;

    for (num = 1000; num <= 9999; num++)
    {
        parte1 = num / 100;  // Pega os dois primeiros dígitos
        parte2 = num % 100;  // Pega os dois últimos dígitos
        soma = parte1 + parte2;
        quadrado = soma * soma;

        if (quadrado == num)
        {
            printf("%d possui a característica especial\n", num);
        }
    }

    return 0;
}