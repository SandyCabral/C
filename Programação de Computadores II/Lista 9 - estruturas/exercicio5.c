#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct endereco {
    char rua[100]; 
    int numero; 
} Endereco;

typedef struct notas {
    float p1, p2, p3; 
} Notas;

typedef struct aluno {
    int mat; 
    char nome[81]; 
    Notas nota; 
    Endereco *end; 
} Aluno;

Aluno ** alocaAlunos(int n) {
    Aluno **alunos = (Aluno **)malloc(n * sizeof(Aluno *));
    for (int i = 0; i < n; i++) {
        alunos[i] = (Aluno *)malloc(sizeof(Aluno));
        alunos[i]->end = (Endereco *)malloc(sizeof(Endereco));
    }
    return alunos;
}

void atribui(Aluno **a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero)
{
    a[indice]->mat = matricula;
    strncpy(a[indice]->nome, nome, 81);
    a[indice]->nome[81] = '\0'; 
    a[indice]->nota.p1 = nota1;
    a[indice]->nota.p2 = nota2;
    a[indice]->nota.p3 = nota3;
    strncpy(a[indice]->end->rua, nomeRua, 100);
    a[indice]->end->rua[100] = '\0';
    a[indice]->end->numero = numero;
}

int main() {
    Aluno **alunos;
    alunos = alocaAlunos(3);
    atribui(alunos, 0, 10, "Um", 1, 1, 1, "Getulio Vargas", 100);
    atribui(alunos, 1, 20, "Dois", 8, 8, 8, "Amaral Peixoto", 200);
    atribui(alunos, 2, 30, "Tres", 9, 9, 9, "Ouro Verde", 300);

    printf("\n5a. Aluno ** alocaAlunos(int n) {"
    "\nAluno **alunos = (Aluno **)malloc(n * sizeof(Aluno *));"
    "\nfor (int i = 0; i < n; i++) {"
        "\nalunos[i] = (Aluno *)malloc(sizeof(Aluno));"
        "\nalunos[i]->end = (Endereco *)malloc(sizeof(Endereco));"
    "\n}"
    "\nreturn alunos;"
"\n}");

    printf("\n\n5b. void atribui(Aluno **a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero)"
"\n{"
    "\na[indice]->mat = matricula;"
    "\nstrncpy(a[indice]->nome, nome, 81);"
    "\na[indice]->nome[81] = '\ 0';" 
    "\na[indice]->nota.p1 = nota1;"
    "\na[indice]->nota.p2 = nota2;"
    "\na[indice]->nota.p3 = nota3;"
    "\nstrncpy(a[indice]->end->rua, nomeRua, 100);"
    "\na[indice]->end->rua[100] = '\ 0';"
    "\na[indice]->end->numero = numero;"
"\n}");

    printf("\n\nNeste caso, com n = 3 \n");
    for (int i = 0; i < 3; i++) {
        printf("\n\nAluno %d: %s\n", alunos[i]->mat, alunos[i]->nome);
        printf("Notas: %f, %f, %f\n", alunos[i]->nota.p1, alunos[i]->nota.p2, alunos[i]->nota.p3);
        printf("Endereço: %s, %d\n", alunos[i]->end->rua, alunos[i]->end->numero);
    }

    for (int i = 0; i < 3; i++) 
    {
        free(alunos[i]->end);
        free(alunos[i]);
    }
    free(alunos);

    return 0;
}
