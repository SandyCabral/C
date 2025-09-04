/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Sortear uma letra de 'a' a 'z' e perguntar ao usuário qual é.
Depois informar se ele acertou ou não qual era a letra*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    char letraSorteada, letraUsuario;
    int tentativas = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Sorteia uma letra entre 'a' e 'z'
    letraSorteada = 'a' + rand() % 26;

    printf("Tente adivinhar a letra sorteada (entre 'a' e 'z'): ");

    do 
    {
        tentativas++;
        scanf(" %c", &letraUsuario);

        if (letraUsuario > letraSorteada) {
            printf("A letra sorteada é menor que %c. Tente novamente: ", letraUsuario);
        } else if (letraUsuario < letraSorteada) {
            printf("A letra sorteada é maior que %c. Tente novamente: ", letraUsuario);
        } else {
            printf("Parabéns! Você acertou a letra %c em %d tentativas.\n", letraUsuario, tentativas);
        }
    } while (letraUsuario != letraSorteada);

    return 0;
}