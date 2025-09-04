/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[6] = {1, 2, 3, 4, 5, 6};
    int y=vet[2], *p, x, *p2=&x;
    p = &y;
    x = *p + 1;
    *p2 = *p2 * 2;
    *p = *p2 + 1;
    y = *p + x;
    
    printf ("%d\n", *p);
    printf("%d\n", y);
    printf("%d\n", *p2);
    
    x=2;
    p = &vet[0];
    for(;x<5; x++, p++)
    printf("%d ", *p);

    return 0;
}