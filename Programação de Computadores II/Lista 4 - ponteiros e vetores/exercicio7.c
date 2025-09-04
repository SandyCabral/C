/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void CamelCase(char *s)
{
    int i = 0, j = 0;
    int tamanho = strlen(s);
    char result[81];

    while (i < tamanho) 
    {
        if (s[i] != ' ') 
        {
            // Se for o primeiro caractere ou após um espaço, converte para maiúscula
            if (j == 0 || s[i-1] == ' ')
            {
                result[j++] = toupper(s[i]);
            } 
            else 
            {
                result[j++] = s[i];
            }
        }
        i++;
    }
    result[j] = '\0'; // Finaliza a string resultante
    strcpy(s, result); // Copia o resultado de volta para s
}

int main() 
{
    char s[81] = "media da turma";
    CamelCase(s);
    printf("CamelCase: %s\n", s);
    return 0;
}