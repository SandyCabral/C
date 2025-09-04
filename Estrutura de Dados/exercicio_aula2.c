#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *v, media, soma =0;
    printf("Digite quantos números serão lidos: \n");
    scanf("%d", &n);
    v = (int*)malloc(n*sizeof(int));
    if (v == NULL){
        printf("Erro.\n");
        exit(1);
    }
    else{
        printf("Digite os números para calcular a média: \n");
        for(i=0; i<n; i++){
            scanf("%d", &v[i]);
            soma += v[i];
            printf("\n");
        }
        media = soma/n;
        printf("A média é igual a: %d\n", media);
        return 0;
    }

}