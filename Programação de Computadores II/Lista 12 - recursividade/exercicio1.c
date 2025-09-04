/*
int mdc_recursiva(int a, int b) 
{
    printf("\n%d e %d", a, b);
    if (a % b == 0) return b;
    return mdc_recursiva (b, a % b);
}
int main()
{
    int a=32, b=18;
    printf("\nResultado=%d",mdc_recursiva(a, b));
}
*/
#include <stdio.h>
int main()
{
printf("\nEssa função calcula recursivamente o MDC entre dois números."
"\nEla imprime os parâmetros e verifica se o resto da divisão entre eles é 0"
"\nComo não é, na primeira chamada, ela apenas imprime os valores e retorna uma outra chamada da mesma função."
"\nDeixa a primeira chamada pendente e cria outro ambiente com os parâmetros dessa vez: '18 e 14'"
"\n18 que é o antigo 'b' e 14 que é o resto da divisão entre 32 e 18, novo 'b'"
"\nSendo assim, a função fica com resultado pendente toda vez que se chama, até chegar na última chamada"
"\nNa chamada seguinte, imprime 18 e 14 e, como o resto da divisão também não é 0, ela se chama passando 14 e 4 como parâmetros"
"\nA seguir, a função imprime '14 e 4' e tem que 14%4 != 0, passando 4 e 14%4 == 2 como parâmetros"
"\n\nChegando na última chamada, imprime '4 e 2' e como 4%2 == 0, retorna b que é '2'"
"\nAssim, ela retorna '2' para os resultados pendentes, liberando a pilha de execução"
"\nE imprimindo por fim 'resultado = 2', na função main, como MDC entre 32 e 18"
"\n\n IMPRIME:"
"\n'32 e 18'"
"\n'18 e 14'"
"\n'14 e 4'"
"\n'4 e 2'"
"\n'resultado = 2'");
return 0;
}