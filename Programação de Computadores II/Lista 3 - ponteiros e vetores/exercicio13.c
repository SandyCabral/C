/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//REVISAR

#include <stdio.h>

int main() {
    // a. declarar variáveis a, b, c, d do tipo int.
    int a = 5, b = 10, c = 15, d = 20;
    
    // b. declarar variáveis e, f, g, h do tipo float.
    float e = 1.1, f = 2.2, g = 3.3, h = 4.4;
    
    // c. declarar vetor v de 10 elementos do tipo char.
    char v[10] = "Hello";
    
    // d. declarar variável x do tipo int.
    int x = 25;

    // e. criar um ponteiro apontando para o endereço de a.
    int *p = &a;

    // f. incrementar o ponteiro, mostrando o conteúdo do endereço apontado (em forma de número).
    // e verificar se o endereço coincide com o de outra variável.
    p++;
    printf("Conteúdo do endereço apontado por p: %d\n", *p);

    if (p == &b) {
        printf("O ponteiro está apontando para a variável b\n");
    } else if (p == &c) {
        printf("O ponteiro está apontando para a variável c\n");
    } else if (p == &d) {
        printf("O ponteiro está apontando para a variável d\n");
    } else if (p == (int *)&e) {
        printf("O ponteiro está apontando para a variável e (float convertida)\n");
    } else if (p == (int *)&f) {
        printf("O ponteiro está apontando para a variável f (float convertida)\n");
    } else if (p == (int *)&g) {
        printf("O ponteiro está apontando para a variável g (float convertida)\n");
    } else if (p == (int *)&h) {
        printf("O ponteiro está apontando para a variável h (float convertida)\n");
    } else if (p == (int *)&v) {
        printf("O ponteiro está apontando para o vetor v\n");
    } else if (p == &x) {
        printf("O ponteiro está apontando para a variável x\n");
    } else {
        printf("O ponteiro não coincide com nenhuma outra variável\n");
    }

    return 0;
}