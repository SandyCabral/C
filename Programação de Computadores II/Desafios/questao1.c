#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* estado[27] = {"AC", "AL", "AM", "AP", "BA", "CE", "DF", "ES", "GO", "MA", "MG", "MS", "MT", "PA", "PB", "PE", "PI", "PR", "RJ", "RN", "RO", "RR", "RS", "SC", "SE", "SP", "TO"};
typedef struct assalariados{
    char nome[51];
    char sexo;
    int idade;
    float salario;
    char estado[3];
} Assalariados;

Assalariados* cadastra(char* nome, char sexo, int idade, float salario, char* estado){
    Assalariados *pessoa = (Assalariados*)malloc(sizeof(Assalariados));
    if (pessoa != NULL){
    strcpy(pessoa->nome, nome);
    pessoa->sexo = sexo;
    pessoa->idade = idade;
    pessoa->salario = salario;
    strcpy(pessoa->estado, estado);
    }
    return pessoa;
}

void imprime(Assalariados** ptr, int numAssalariados){
    int i;
    for(i=0; i < numAssalariados; i++){
        printf("Nome: %s \n", ptr[i]->nome);
        printf("Sexo: %c \n", ptr[i]->sexo);
        printf("Idade: %d \n", ptr[i]->idade);
        printf("Salário: %.2f \n", ptr[i]->salario);
        printf("Estado: %s \n\n", ptr[i]->estado);
    }
}

int main(){
    Assalariados** pessoas;
    int numAssalariados = 3;
    pessoas = (Assalariados**) malloc(numAssalariados * sizeof(Assalariados*));
    if (pessoas == NULL) {
        printf("Falta memória\n"); exit(1);
    }
    pessoas[0] = cadastra("Fulano de tal", 'M', 45, 1500.00, "RJ");
    pessoas[1] = cadastra("Cicrano", 'M', 50, 2500.00, "BA");
    pessoas[2] = cadastra("Beltrano", 'M', 42, 500.00, "MG");
    imprime(pessoas, numAssalariados);
    
    for (int i = 0; i < numAssalariados; i++) {
        free(pessoas[i]);
    }
    free(pessoas);

    return 0;
}