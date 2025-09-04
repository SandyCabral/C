#include <stdio.h>
int transforma(int n){
    if (n == 1) return 1;
    else return(7+ transforma(n-1));
}
int main(){
    printf("%d\n", transforma(2)); //8
    printf("%d\n", transforma(4)); //22
    printf("%d\n", transforma(5)); //29
    return 0;
}