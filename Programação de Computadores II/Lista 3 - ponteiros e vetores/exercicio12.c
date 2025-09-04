/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//REVISAR

#include <stdio.h>
#include <conio.h>

int main()
{
    char frase[81]; // 80 caracteres + '\0'
    int i = 0;

    printf("Digite uma frase (máx. 80 caracteres): \n");

    while (i < 80)
    {
        char ch = getch(); // Lê um caractere sem mostrar mensagem na tela

        if (ch == '\r') // Se for enter, finaliza a leitura
        {
            break;
        }

        frase[i] = ch; // Armazena o caractere no vetor
        i++;
        printf("%c", ch); // Imprime o caractere na tela
    }

    frase[i] = '\0'; // Finaliza a string

    printf("\n\nPalavras da frase em linhas separadas:\n");
    
    char *palavra = strtok(frase, " ");
    
    while (palavra != NULL) {
        printf("%s\n", palavra);
        palavra = strtok(NULL, " ");
    }

    return 0;
}