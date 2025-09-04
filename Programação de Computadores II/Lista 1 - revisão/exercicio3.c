/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char operador;
    float a, b, operacao;

    printf("Digite a operação a ser realizada (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite dois números reais: ");
    scanf("%f %f", &a, &b);

    switch (operador) {
        case '+':
            operacao = a + b;
            break;
        case '-':
            operacao = a - b;
            break;
        case '*':
            operacao = a * b;
            break;
        case '/':
            if (b != 0)
                operacao = a / b;
            else{
                printf("Erro: divisão por zero não é permitida.\n");
                return 1;
            }
            break;
        default:
            printf("Operador inválido.\n");
            return 1;
    }

    printf("Resultado: %f\n", operacao);

    return 0;
}