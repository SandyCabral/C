#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(char* mat, char* arquivo_notas) {
    FILE *file = fopen(arquivo_notas, "r");
    if (file == NULL) {
        printf("ERRO\n");
        return -1.0;
    }

    char linha[100];
    char matricula[10];
    float p1, p2, p3;

    while (fgets(linha, sizeof(linha), file)) 
    {
        sscanf(linha, "%s %f %f %f", matricula, &p1, &p2, &p3);

        if (strcmp(matricula, mat) == 0) 
        {
            fclose(file);
            return (p1 + p2 + p3) / 3.0;
        }
    }

    fclose(file);
    return -1.0;
}

int main() 
{
    char matricula[10];
    char notas[50];

    printf("Digite o número de matrícula: ");
    scanf("%s", matricula);
    printf("Digite o nome do arquivo: ");
    scanf("%s", notas);

    float resultado = media(matricula, notas);

    if (resultado == -1.0) 
    {
        printf("Matrícula não encontrada ou erro ao abrir o arquivo.\n");
    } 
    else
    {
        printf("A média do aluno com matrícula %s é: %f\n", matricula, resultado);
    }

    return 0;
}
