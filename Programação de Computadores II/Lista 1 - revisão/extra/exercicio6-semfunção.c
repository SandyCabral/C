/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float x1, x2;
	float delta;
	printf("Digite os coeficientes da equação: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a != 0)
    {
    
        delta = ((b*b)-(4*a*c));
        
        if (delta > 0)
        {
        
            x1 = (((-b) + (sqrt(delta)))/(2*a));
            x2 = (((-b) - (sqrt(delta)))/(2*a));
            
            printf("As raízes são x1 = %f e x2 = %f\n", x1, x2);
        }
        else if (delta == 0)
        {
            x1 = ((-b)/(2*a));
            printf("As raízes são x1 = x2 = %f\n", x1);
        }
        else
        {
            printf("Não existem raízes reais\n");
        }
    }
    else
    {
        printf("O coeficiente 'a' deve ser diferente de 0!\n");
    }
	return 0;
}
