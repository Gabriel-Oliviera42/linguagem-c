//Função Sem Passagem de Parâmetros e Com Retorno

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função que gera um número aleatório entre 1 e 100 e o retorna
int gerarNumeroAleatorio() {
    srand(time(NULL));
    return (rand() % 100) + 1;
}

int main() {
    int numeroAleatorio = gerarNumeroAleatorio();
    printf("Número aleatório gerado: %d\n", numeroAleatorio);

    return 0;
}
