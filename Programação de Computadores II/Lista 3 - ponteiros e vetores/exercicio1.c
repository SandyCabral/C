/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Calcular área e o comprimento da circunferência de um círculo

#include <stdio.h>

//Definir quanto vai valer a constante "pi" nesse exercício
#define PI 3.14159265

void calc_circulo(float r, float *circunferencia, float *area)
{
    *circunferencia = 2 * PI * r;
    *area = PI * r * r;
}

int main() 
{
    float raio, circunferencia, area;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    calc_circulo(raio, &circunferencia, &area);

    printf("Circunferência: %.2f\n", circunferencia);
    printf("Área: %.2f\n", area);

    return 0;
}