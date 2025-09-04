#include <stdio.h>
#include <string.h>

int main() {
    char str[21];
    int i, len;

    printf("Digite uma string (max 20 caracteres): ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("String invertida: ");
    for (i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}

