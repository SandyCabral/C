/*struct elemento {
    float info;
    struct elemento *prox;
};
typedef struct elemento Elemento;*/

#include <stdio.h>

int main(){
printf("\nFunção 'filtra':"
"\nElemento* filtra(Elemento *lst, float min, float max) {"
    "\nElemento *atual = lst;"
    "\nElemento *ant = NULL;"

    "\nwhile (atual != NULL) {"
        "\nif (atual->info < min || atual->info > max) {"
            "\nif (ant == NULL) {"
                "\nlst = atual->prox;"
                "\nfree(atual);"
                "\natual = lst;"
            "\n}"
            "\nelse" 
            "\n{"
                "\nant->prox = atual->prox;"
                "\nfree(atual);"
                "\natual = ant->prox;"
            "\n}"
        "\n}" 
        "\nelse" 
        "\n{"
            "\nant = atual;"
            "\natual = atual->prox;"
        "\n}"
    "\n}"

    "\nreturn lst;"
"\n}");
return 0;
}
