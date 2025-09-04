/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//REVISAR

#include <stdio.h>
#include <string.h>

// Função que calcula a variância
float calcular_variancia(float alturas[], int n, float media) 
{
    float soma = 0.0;
    for (int i = 0; i < n; i++) 
    {
        soma += (alturas[i] - media) * (alturas[i] - media);
    }
    return soma / n;
}

int main()
{
    int n, idade, num_mulheres = 0, num_homens_altos = 0;
    char sexo;
    float altura, soma_alturas = 0.0, media_altura;

    printf("Digite o número de pessoas: ");
    scanf("%d", &n);

    float alturas[n];

    for (int i = 0; i < n; i++) 
    {
        printf("Digite a idade, a altura (em metros) e o sexo (M/F) da pessoa %d: ", i + 1);
        scanf("%d %f %c", &idade, &altura, &sexo);

        alturas[i] = altura;
        soma_alturas += altura;
        
        //Contar quantas mulheres têm entre 20 e 35 anos de idade
        if (sexo == 'F' || sexo == 'f') {
            if (idade >= 20 && idade <= 35)
            {
                num_mulheres++;
            }
        }
        //Contar quantos homens têm mais de 1,80
        else if (sexo == 'M' || sexo == 'm') 
        {
            if (altura > 1.80) {
                num_homens_altos++;
            }
        }
    }

    media_altura = soma_alturas / n;
    float variancia = calcular_variancia(alturas, n, media_altura);

    printf("Número de mulheres com idade entre 20 e 35 anos: %d\n", num_mulheres);
    printf("Número de homens com altura maior que 1,80m: %d\n", num_homens_altos);
    printf("Variância da altura: %.2f\n", variancia);

    return 0;
}