/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//REVISAR

#include <stdio.h>
#define CAPACIDADE 100

typedef struct {
    int idade;
    char opiniao;
} Espectador;

void quantidade_otimo(Espectador espectadores[], int *qtde_otimo) {
    for (int i = 0; i < CAPACIDADE; i++) {
        if (espectadores[i].opiniao == 'O') {
            (*qtde_otimo)++;
        }
    }
}

void diferenca_percentual(Espectador espectadores[], int *qtde_bom, int *qtde_regular) {
    for (int i = 0; i < CAPACIDADE; i++) {
        if (espectadores[i].opiniao == 'B') {
            (*qtde_bom)++;
        } else if (espectadores[i].opiniao == 'R') {
            (*qtde_regular)++;
        }
    }
}

void media_idade_ruim(Espectador espectadores[], int *soma_idade_ruim, int *qtde_ruim) {
    for (int i = 0; i < CAPACIDADE; i++) {
        if (espectadores[i].opiniao == 'U') {
            (*soma_idade_ruim) += espectadores[i].idade;
            (*qtde_ruim)++;
        }
    }
}

void porcentagem_pessimo(Espectador espectadores[], int *qtde_pessimo, int *maior_idade_pessimo) {
    for (int i = 0; i < CAPACIDADE; i++) {
        if (espectadores[i].opiniao == 'P') {
            (*qtde_pessimo)++;
            if (espectadores[i].idade > *maior_idade_pessimo) {
                *maior_idade_pessimo = espectadores[i].idade;
            }
        }
    }
}

void diferenca_idade(Espectador espectadores[], int *maior_idade_otimo, int *maior_idade_ruim) {
    for (int i = 0; i < CAPACIDADE; i++) {
        if (espectadores[i].opiniao == 'O') {
            if (espectadores[i].idade > *maior_idade_otimo) {
                *maior_idade_otimo = espectadores[i].idade;
            }
        } else if (espectadores[i].opiniao == 'U') {
            if (espectadores[i].idade > *maior_idade_ruim) {
                *maior_idade_ruim = espectadores[i].idade;
            }
        }
    }
}

int main() {
    Espectador espectadores[CAPACIDADE];
    int qtde_otimo = 0, qtde_bom = 0, qtde_regular = 0, qtde_ruim = 0, qtde_pessimo = 0;
    int soma_idade_ruim = 0, maior_idade_pessimo = 0, maior_idade_otimo = 0, maior_idade_ruim = 0;

    // Recebe os dados dos espectadores
    for (int i = 0; i < CAPACIDADE; i++) {
        printf("Digite a idade e a opiniao (O, B, R, U, P) do espectador %d: ", i + 1);
        scanf("%d %c", &espectadores[i].idade, &espectadores[i].opiniao);
    }

    // Calcula a quantidade de respostas ótimo
    quantidade_otimo(espectadores, &qtde_otimo);

    // Calcula a diferença percentual entre respostas bom e regular
    diferenca_percentual(espectadores, &qtde_bom, &qtde_regular);

    // Calcula a média de idade das pessoas que responderam ruim
    media_idade_ruim(espectadores, &soma_idade_ruim, &qtde_ruim);

    // Calcula a porcentagem de respostas péssimo e a maior idade que utilizou esta opção
    porcentagem_pessimo(espectadores, &qtde_pessimo, &maior_idade_pessimo);

    // Calcula a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim
    diferenca_idade(espectadores, &maior_idade_otimo, &maior_idade_ruim);

    printf("a. Quantidade de respostas ótimo: %d\n", qtde_otimo);
    printf("b. Diferença percentual entre respostas bom e regular: %.2f%%\n", 
           ((qtde_bom - qtde_regular) / (float)CAPACIDADE) * 100);
    if (qtde_ruim != 0) {
        printf("c. Média de idade das pessoas que responderam ruim: %.2f\n", soma_idade_ruim / (float)qtde_ruim);
    } else {
        printf("c. Média de idade das pessoas que responderam ruim: N/A\n");
    }
    printf("d. Porcentagem de respostas péssimo: %.2f%%\n", (qtde_pessimo / (float)CAPACIDADE) * 100);
    printf("   Maior idade que utilizou a opção péssimo: %d\n", maior_idade_pessimo);
    printf("e. Diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim: %d\n", 
           maior_idade_otimo - maior_idade_ruim);

    return 0;
}