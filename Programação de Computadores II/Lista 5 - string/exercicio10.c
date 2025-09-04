#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarCaracter(char ch) {
    return (isdigit(ch) || isalpha(ch));
}

void cadastrarUsuario(char nomeUsuario[9]) {
    char ch;
    int i = 0;
    printf("Cadastre o nome de usuário (max 8 caracteres): ");
    while (i < 8 && (ch = getchar()) != '\n') {
        if (validarCaracter(ch)) {
            nomeUsuario[i++] = ch;
            putchar(ch);
        }
    }
    nomeUsuario[i] = '\0';
    printf("\n");
}

void cadastrarSenha(char senha[9]) {
    char ch;
    int i = 0;
    printf("Cadastre a senha (max 8 caracteres): ");
    while (i < 8 && (ch = getchar()) != '\n') {
        if (validarCaracter(ch)) {
            senha[i++] = ch;
            putchar('*');
        }
    }
    senha[i] = '\0';
    printf("\n");
}

int main(void) 
{
    char nomeUsuario[9];
    char senha[9];
    char novoUsuario[9];
    char novaSenha[9];

    cadastrarUsuario(nomeUsuario);
    cadastrarSenha(senha);

    printf("Digite o nome de usuário: ");
    cadastrarUsuario(novoUsuario);
    printf("Digite a senha: ");
    cadastrarSenha(novaSenha);

    if (strcmp(nomeUsuario, novoUsuario) == 0 && strcmp(senha, novaSenha) == 0) {
        printf("OK\n");
    } else {
        printf("Acesso negado\n");
    }

    return 0;
}
