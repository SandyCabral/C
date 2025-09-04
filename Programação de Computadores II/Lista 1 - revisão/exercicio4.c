/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Função para calcular a média
float media(float n1, float n2, float n3)
{
    float media;
    media = ((n1+n2+n3)/3);
    return media;
}

// Função principal
int main()
{
    float n1, n2, n3;
    float mediadasnotas;
    
    // Receber as notas
    printf("Digite as notas de 3 provas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    // Verificar se as notas são válidas
    if ((0<=n1 && n1<=10)&&(0<=n2 && n2<=10)&&(0<=n3 && n3<=10))
    {
        //nota 1
        
        if (n1 >= 6.0)
        {
            printf("Aluno aprovado\n");
        }
        else if (n1 >= 4.0) 
        {
            printf("Realizar VS\n");
        }
        else 
        {
            printf("Aluno reprovado\n");
        }
        //nota 2
        
        if (n2 >= 6.0)
        {
            printf("Aluno aprovado\n");
        }
        else if (n2 >= 4.0) 
        {
            printf("Realizar VS\n");
        }
        else 
        {
            printf("Aluno reprovado\n");
        }
        //nota 3
        
        if (n3 >= 6.0)
        {
            printf("Aluno aprovado\n");
        }
        else if (n3 >= 4.0) 
        {
            printf("Realizar VS\n");
        }
        else 
        {
            printf("Aluno reprovado\n");
        }
        
        // Cáculo da média das 3 notas
        mediadasnotas = media(n1, n2, n3);
        printf("média = %f \n", mediadasnotas);
    }
    else
    {
        printf("Digite notas válidas");
    }
    return 0;
}
