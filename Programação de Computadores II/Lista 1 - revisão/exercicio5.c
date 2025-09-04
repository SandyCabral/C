/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    // caso 1
    float a = 3;
    float b = a/2;
    float c = b + 3.1;
    
    printf("Valor de c = %f\n", c);
    
    // caso 2
    int b2 = a/2;
    float c2 = b2 + 3.1;
    
    printf("Valor de c = %f\n", c2);
    
    // caso 3
    int b3 = a/2;
    int c3 = b3 + 3.1;
    
    printf("Valor de c = %d\n", c3);
    
    return 0;
}
