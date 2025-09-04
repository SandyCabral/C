/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Sortear um número de 0 a 100 e pedir pro usuário acertar.
Se errar, dizer se é maior ou menor.
Caso contrário, imprimir a quantidade de tentativas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int NumSorteado, NumUsuario;
    int tentativas = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Sorteia um número entre 0 e 100
    NumSorteado = rand() % 101;

    printf("Tente adivinhar o número sorteado (entre 0 e 100): ");

    do 
    {
        tentativas++;
        scanf(" %d", &NumUsuario);
        if ((NumUsuario >=0) && (NumUsuario <= 100))
        {
            if (NumUsuario > NumSorteado) 
            {
                printf("O número sorteado é menor que %d. Tente novamente: ", NumUsuario);
                
            }
            else if (NumUsuario < NumSorteado) 
            {
                printf("O número sorteado é maior que %d. Tente novamente: ", NumUsuario);
            }
            else
            {
                printf("Parabéns! Você acertou o número %d em %d tentativas.\n", NumUsuario, tentativas);
            }
        }
        else
        {
        printf("Digite um número de 0 a 100!");
        return 0;
        }
        
    } while (NumUsuario != NumSorteado);

    return 0;
}