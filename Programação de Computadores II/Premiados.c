/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Autor: Anderson
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, \ 
    int p2, int *tam);

int main(void)
{
    int i, n, *inscr, p1, p2, tam, *resposta;
    float *t1, *t2;
    printf("Informe a quantidade de participantes do concurso:\n");
    scanf ("%d", &n);
    
    inscr=(int *) malloc(n*sizeof(int));
    t1=(float *) malloc(n*sizeof(float));
    t2=(float *) malloc(n*sizeof(float));    
    
    printf("\nInsira o numero da inscricao de cada candidato:\n");    
    for (i=0; i<n; i++)
        scanf("%d", &inscr[i]);
    printf ("\nInsira a nota do teste 01 de cada candidato:\n");
    for (i=0; i<n; i++)
        scanf("%f", &t1[i]);
    printf ("\nInforme o peso do teste 01");
    scanf ("%d", &p1);
    printf ("\nInsira a nota do teste 02 de cada candidato:\n");
    for (i=0; i<n; i++)
        scanf("%f", &t2[i]);
    printf ("\nInforme o peso do teste 02:\n");
    scanf ("%d", &p2);
    
    resposta = premiados(n, inscr, t1, p1, t2, p2, &tam);
    printf("A quantidade de aluno(s) que alcancaram a maior media \ 
         � %d.\n\n", tam);
    printf("O numero de inscricao do(s) aluno(s) que alcancou(aram) \ 
         a maior media:\n");
    for (i=0; i<tam; i++)
         printf ("%d\n", resposta[i]);
    system("pause");
    return 0;
}

int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam)
{
    int k=0, i=0, cont=0, *resposta;
    float *media, maior_nota=0;
    
    media=(float *) malloc(n*sizeof(float));
    
    for(i=0; i<n; i++)
        media[i] = (p1*t1[i]+p2*t2[i])/(p1+p2);
        
    for (i=0; i<n; i++) {
        printf("\nA media do candidato %d \
        foi %0.4f.\n", inscr[i], media[i]);
        if (media[i] > maior_nota)
            maior_nota = media[i];
    }
    printf("\nA maior media encontrada \
    foi %0.4f.\n\n", maior_nota);

    for (i=0; i<n; i++)
        if(maior_nota == media[i])
            cont++;
        
    *tam = cont;
    resposta=(int*)malloc(cont*sizeof(int));
    k=0;
    for (i=0; i<n; i++)
        if(maior_nota == media[i])
        {
            resposta[k]=inscr[i];
            k++;
        }
    return resposta;
}