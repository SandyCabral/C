#define MAX 4
#define MAXNOME 31
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void atribui(char **nomes, int indice, char *nome) {
    strcpy(nomes[indice], nome);
}

char *get_sobrenome(char *nome) {
    char *sobrenome = strrchr(nome, ' ');
    if (sobrenome != NULL) {
        return sobrenome + 1;
    }
    return nome;
}

int main() {
    printf("\nNo 2º printf, se o comprimento do sobrenome for maior que 5, imprime o valor de 'i'. Caso contrário, imprime '0'."
    "\nNo caso deste exercício 'Silva' e 'Carmo' tem comprimento menor que 5 caracteres, então será impresso '0'"
    "\nPor outro lado, o comprimento de 'Santos' e 'Belmonte' ultrapassa 5 caracteres, então serão impressos seus respectivos índices, '2' e '3'"
    "\n\nNo 3º printf, o programa acessa o 4º elemento ('a') do 1º nome ('Fulano Silva') da matriz 'nomes'"
    "\n\nSendo assim:\n");
    
    int i;
    char **nomes;
    char *sobrenome;

    nomes = (char **) malloc(MAX * sizeof(char *));
    for (i = 0; i < MAX; i++) 
    {
        nomes[i] = (char *) malloc(sizeof(char) * MAXNOME);
    }

    atribui(nomes, 0, "Fulano Silva");
    atribui(nomes, 1, "Maria do Carmo");
    atribui(nomes, 2, "Beltrano Belmonte");
    atribui(nomes, 3, "Pedro dos Santos");

    for (i = 0; i < MAX; i++) {
        sobrenome = get_sobrenome(nomes[i]);
        printf("\n%s ", sobrenome);
        printf(" %d", strlen(sobrenome) > 5 ? i : 0);
    }

    printf("\n%c", nomes[0][3]);

    return 0;
}
