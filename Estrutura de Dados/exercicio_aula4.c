/*Instruções do Exercício:

Ler um inteiro N.
Alocar dinamicamente um vetor de N posições.
Armazenar os N inteiros no vetor.
Passar o vetor para um função que retorna o maior número digitado.
Imprimir o maior número.*/

#include <stdio.h>
#include <stdlib.h>

//Função para retornar o maior número de um vetor
int maior_numero(int m, int*v){
    int maior=0, j;
    for(j=0; j<m; j++){
        if(v[j]>maior){
            maior = v[j];
        }
    }
    return maior;
}

int main(){
    int n, i, *v, maior;
    //Ler um inteiro N
    printf("Digite a quantidade de números a ordenar: \n");
    scanf("%d", &n);
    //Alocar dinamicamente um vetor de N posições
    v = (int*)malloc(n*sizeof(int));
    if (v == NULL){
        printf("Memória Insuficiente\n");
        exit(1);
    }
    else{
        //Armazenar os N inteiros no vetor
        printf("Digite os números para serem ordenados: \n");
        for(i=0; i<n; i++){
            scanf("%d", &v[i]);
        }
        //Passar o vetor para uma função que retorna o maior número digitado
        maior = maior_numero(n, v);
        //Imprimir o maior número
        printf("O maior é igual a: %d", maior);
    }
    }