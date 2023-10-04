#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função sem parâmetros, com retorno

int obter_numero_aleatorio() {
    srand(time(NULL)); // Inicializa a semente para números aleatórios
    return rand() % 10 + 1; // Retorna um número aleatório entre 1 e 10
}

int main() {
    int numero = obter_numero_aleatorio();
    printf("Numero aleatorio: %d\n", numero);
    return 0;
}   