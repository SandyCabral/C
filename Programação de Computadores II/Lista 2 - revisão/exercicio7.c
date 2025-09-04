/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Calcular o salário semanal:
inputs -> 'nº de horas trabalhadas' e o 'valor da horas'
Acima de 40h = bônus de 50% para essas horas
Acima de 60 = bônus de 100% para essas horas*/

#include <stdio.h>

int main() 
{
    int horas_semanais, valor_hora, salario, bonus;
    
    printf("Digite a quantidade de horas semanais trabalhadas\
 e o valor da hora: ");
    scanf("%d %d", &horas_semanais, &valor_hora);
    
    if (horas_semanais <= 40)
    {
        salario = horas_semanais*valor_hora;
        printf("O salário semanal é de R$%d\n", salario);
    }
    else if (horas_semanais <= 60)
    {
        bonus = (horas_semanais - 40)*(valor_hora*0.5);
        salario = ((horas_semanais*valor_hora)+bonus);
        printf("O salário semanal é de R$%d\n", salario);
    }
    else
    {
        bonus = (horas_semanais - 60)*(valor_hora);
        salario = ((horas_semanais*valor_hora)+bonus);
        printf("O salário semanal é de R$%d\n", salario);
    }
    
    return 0;
}