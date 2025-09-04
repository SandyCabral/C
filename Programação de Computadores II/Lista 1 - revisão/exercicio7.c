/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
// Função principal
int main()
{
	float a, arredondado;
	printf("Digite o número que deseja arredondar: \n");
	scanf("%f", &a);
	
	// função "round() para arredondamento"
	arredondado = round(a);
	printf("O número arredondado é = %f\n", arredondado);
	return 0;
}
