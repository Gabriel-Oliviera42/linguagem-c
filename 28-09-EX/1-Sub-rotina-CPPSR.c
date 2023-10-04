#include <stdio.h>

// Função sem retorno, com parâmetros
void saudacao(char *nome) {
    printf("Ola, %s\n", nome);
}

int main() {
    saudacao("Gabriel"); // Isso imprimirá "Ola, Gabriel"
    return 0;
}
