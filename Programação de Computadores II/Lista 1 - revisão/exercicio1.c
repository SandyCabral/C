/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int s;
    printf("Digite um número para conversão: ");
    scanf("%d", &s);
    int min = s/60;
    int hora = s/360;
    printf("segundos = %d\nminutos = %d\nhoras = %d", s, min, hora);
    return 0;
}
