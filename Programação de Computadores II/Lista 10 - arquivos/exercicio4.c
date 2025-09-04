#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHAS 1024

void removeComentarios(char *inputFile, char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    if (in == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        exit(EXIT_FAILURE);
    }

    FILE *out = fopen(outputFile, "w");
    if (out == NULL) {
        perror("Erro ao criar o arquivo de saída");
        fclose(in);
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINHAS];
    while (fgets(line, sizeof(line), in) != NULL) {
        char *commentPos = strstr(line, "//");
        if (commentPos != NULL) {
            *commentPos = '\0';
        }
        fprintf(out, "%s", line);
    }

    fclose(in);
    fclose(out);
}

int main() {
    char inputFile[256];
    char outputFile[256];

    printf("Digite o nome do arquivo .c de entrada: ");
    scanf("%s", inputFile);

    printf("Digite o nome do arquivo .c de saída: ");
    scanf("%s", outputFile);

    removeComentarios(inputFile, outputFile);

    printf("Novo arquivo gerado sem comentários de linha.\n");

    return 0;
}
