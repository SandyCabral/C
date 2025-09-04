/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, maior, menor, media;

    printf("Digite 3 números: ");
    scanf("%d %d %d", &a, &b, &c);

    // Determinar maior e menor
    maior = (a > b && a > c) ? a : (b > c ? b : c);
    menor = (a < b && a < c) ? a : (b < c ? b : c);

    printf("O menor é = %d, O maior é = %d \n", menor, maior);

    // Números pares
    if (a % 2 == 0) printf("%d é par \n", a);
    if (b % 2 == 0) printf("%d é par \n", b);
    if (c % 2 == 0) printf("%d é par \n", c);

    // Calcular média
    media = (a + b + c) / 3;
    printf("A média de a, b e c = %d \n", media);

    return 0;
}