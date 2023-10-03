#include <stdio.h>

// Função sem retorno, com parâmetros
void saudacao(char *nome) {
    printf("Olá, %s\n", nome);
}

int main() {
    saudacao("Alice"); // Isso imprimirá "Olá, Alice"
    return 0;
}