/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Calcular área e o comprimento da circunferência de um círculo

/*Seja o seguinte trecho de programa:
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;

Qual é o valor das seguintes expressões ?
a) p == &i; b) *p - *q c) **&p d) 3* - *p/(*q)+7 

a) true
b) -2
c) **&p = *p = 3
d) primeiro (*) 3* - *p = -9, depois (/) -9/(*q) = -1, por fim (+) = -1+7 = 6

*/

#include <stdio.h>

int main ()
{
int i=3,j=5, soma;
int *p, *q;
p = &i;
q = &j;

soma = 3* - *p/(*q)+7;

printf("O valor da soma é %d", soma);

return 0;

}
