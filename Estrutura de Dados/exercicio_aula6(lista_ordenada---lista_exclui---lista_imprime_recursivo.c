/*Instruções do exercício

Implementar as funções de inserção ordenada na lista e de excluir um elemento.
Usar o código disponível na pasta da Aula 03.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int info;
    struct lista* prox;
} TLista;

TLista* cria_lista (void);
TLista* insere_inicio (TLista* li, int i);
TLista* insere_fim (TLista* li, int i);
TLista* insere_ordenado (TLista* li, int i);
void imprime (TLista* li);
//Cria uma lista vazia
TLista* cria_lista (void) {
    return NULL;
}
//Insere um elemento no início da lista
TLista* insere_inicio (TLista* li, int i) {
    TLista* novo = (TLista*) malloc(sizeof(TLista));
    novo->info = i;
    novo->prox = li;
    return novo;
}
//insere um elemento no fim da lista
TLista* insere_fim (TLista* li, int i) {
    TLista* novo = (TLista*) malloc(sizeof(TLista));
    novo->info = i;
    novo->prox = NULL;
    TLista* p = li;
    if (p == NULL) { //se a lista estiver vazia
        li = novo;
    }
    else {
        while (p->prox != NULL) { //encontra o ultimo elemento
            p = p->prox;
        }
        p->prox = novo;
    }
    return li;
}
//insere um elemento de forma que a lista esteja sempre ordenada
TLista* insere_ordenado (TLista* li, int i) {
	TLista* novo;
	novo = (TLista*)malloc(sizeof(TLista));
	novo->info=i;
	TLista* p = li;
	if(p == NULL){//lista vazia -- insere no início
	    novo->prox = NULL;
	    li = novo;
	}
	else if(p->info>i){//é menor que todos
	    novo->prox = li;
	    li = novo;
	}
	else{//procura posição de inserção
	    while(p->prox != NULL && p->prox->info<i){
	        p=p->prox;
	    }
	    novo->prox=p->prox;
	    p->prox=novo;
	}
	return li;
}
//Achar o elemento com info = i e remover da lista.
//Assumir que existe apenas 1 elemento com info = i na lista.
TLista* exclui (TLista* li, int i) {
    TLista* ant = NULL;//auxiliar para guardar o elemento anterior
    TLista* p = li;

    while (p != NULL && p->info != i) { // Procura o elemento a ser removido
        ant = p;
        p = p->prox;
    }

    if (p == NULL) { // Elemento não encontrado
        return li;
    }

    if (ant == NULL) { // Elemento é o primeiro da lista
        li = p->prox;
    } 
    else { // Elemento está no meio ou no final da lista
        ant->prox = p->prox;
    }
    free(p); // Libera a memória do nó removido
    return li;
}
void imprime_lista_recursivamente(TLista* li) {
    if (li == NULL) { // Caso base: quando a lista chega ao fim
        return;
    }
    printf("info = %d\n", li->info); // Imprime o elemento atual
    imprime_lista_recursivamente(li->prox); // Chama recursivamente para o próximo elemento
}
void imprime_lista(TLista *li) {
    TLista* p;
    for (p = li; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}

int main (void) {
    TLista* l1;
    TLista* l2;
    TLista* l3; /* declara listas não inicializadas */
    /* Insere elementos no inicio da lista */
    l1 = cria_lista(); /* cria e inicializa lista como vazia */
    l1 = insere_inicio(l1, 2);
    l1 = insere_inicio(l1, 3);
    l1 = insere_inicio(l1, 5);
    l1 = insere_inicio(l1, 4);
    printf("Lista 1:\n");
    imprime_lista(l1);

    /* Insere elementos no final da lista*/
    l2 = cria_lista(); /* cria e inicializa lista como vazia */
    l2 = insere_fim(l2, 2);
    l2 = insere_fim(l2, 3);
    l2 = insere_fim(l2, 5);
    l2 = insere_fim(l2, 4);
    printf("Lista 2:\n");
    imprime_lista(l2);

    // Insere elementos de forma que a lista esteja sempre ordenada
    l3 = cria_lista();
    l3 = insere_ordenado(l3, 2);
    l3 = insere_ordenado(l3, 5);
    l3 = insere_ordenado(l3, 3);
    l3 = insere_ordenado(l3, 4);
    l3 = insere_ordenado(l3, 1);
    l3 = exclui(l3, 2);
    printf("Lista 3:\n");
    imprime_lista(l3);
    printf("Lista 3 (recursiva):\n"); //impresso recursivamente
    imprime_lista_recursivamente(l3);
    return 0;
}