/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* cifra_cesar(char* msg) 
{
    int tamanho = strlen(msg);
    char *codificada = (char *)malloc((tamanho + 1) * sizeof(char));

    if (codificada == NULL)
    {
        printf("Erro de alocação de memória!\n");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (isalpha(msg[i])) 
        {
            if (islower(msg[i])) 
            {
                codificada[i] = ((msg[i] - 'a' + 3) % 26) + 'a';
            } 
            else if (isupper(msg[i])) 
            {
                codificada[i] = ((msg[i] - 'A' + 3) % 26) + 'A';
            }
        }
        else 
        {
            codificada[i] = msg[i];
        }
    }

    codificada[tamanho] = '\0';
    return codificada;
}

int main() 
{
    char msg[100];
    printf("Digite a mensagem para codificar: ");
    fgets(msg, sizeof(msg), stdin);
    msg[strcspn(msg, "\n")] = '\0';

    char *codificada = cifra_cesar(msg);
    printf("Mensagem codificada: %s\n", codificada);

    free(codificada);
    return 0;
}