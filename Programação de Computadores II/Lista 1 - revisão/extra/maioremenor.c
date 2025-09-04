/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int valor;
	int maior;
	int menor;
	printf("Digite um número: ");
	scanf("%d", &maior);
	menor = maior;
	for(i=0; i<2; i++)
	{
		printf("Digite um número: ");
		scanf("%d", &valor);
		if (valor > maior)
		{
			maior = valor;
		}
		else if (valor < menor)
		{
			menor = valor;
		}
	}
	printf("O maior = %d e o menor = %d", maior, menor);

}