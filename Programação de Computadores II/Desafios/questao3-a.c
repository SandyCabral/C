#include <stdio.h>
int main (void){
    char frase[80] = "Quem ensina aprende ao ensinar e quem aprende ensina ao aprender";
    char *p;
    p = frase;
    printf("%c\n", p[3]);
    p[3]='X';
    p[13]='\0';
    printf("%s\n", frase);
    p=p+3;
    printf("%s\n", p);
    return 0;
}