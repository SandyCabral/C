/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

// Função principal - sacar dinheiro em notas
int main()
{
	int notas_100 = 0, notas_50 = 0, notas_20 = 0;
	int notas_10 = 0, notas_5 = 0, notas_2 = 0, notas_1 = 0;
	
	int valor;
	printf("Digite o valor a ser sacado: \n");
	scanf("%d", &valor);
	
	if (valor >= 100)
	{
	    notas_100 = (valor/100);
	    valor = (valor%100);
	}
	if (valor <= 99 && valor >= 50)
	{
	    notas_50 = valor/50;
	    valor = (valor%50);
	}
    if (valor <= 50 && valor >= 20)
	{
	    notas_20 = valor/20;
	    valor = (valor%20);
	}
	if (valor <= 20 && valor >= 10)
	{
	    notas_10 = valor/10;
	    valor = (valor%10);
	}
	if (valor <= 10 && valor >= 5)
	{
	    notas_5 = valor/5;
	    valor = (valor%5);
	}
	if (valor <= 5 && valor >= 2)
	{
	    notas_2 = valor/2;
	    valor = (valor%2);
	}
	if (valor <= 2 && valor >= 1)
	{
	    notas_1 = valor/1;
	    valor = (valor%1);
	}
	
	// Indicação da quantidade de notas para o saque
	printf("Retire o dinheiro em %d nota(s) de 100\n", notas_100);
	printf("%d nota(s) de 50\n", notas_50);
	printf("%d nota(s) de 20\n", notas_20);
	printf("%d nota(s) de 10\n", notas_10);
	printf("%d nota(s) de 5\n", notas_5);
	printf("%d nota(s) de 2\n", notas_2);
	printf("%d nota(s) de 1\n", notas_1);
	
	return 0;
}
