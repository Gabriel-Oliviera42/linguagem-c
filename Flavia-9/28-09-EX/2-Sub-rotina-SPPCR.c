#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Sub-rotina - Funções Sem Passagem de Parâmetros e Com Retorno:

int obterNumeroAleatorio() {
    srand(time(NULL)); // Inicializa a semente para números aleatórios
    
    // Gera um número aleatório entre 1 e 10
    return rand() % 10 + 1;
}

// ---------------- COMEÇA O CÓDIGO PRINCIPAL ----------------

int main() {
    // Chama a função para obter um número aleatório
    int numero = obterNumeroAleatorio();
    
    // Imprime o número aleatório
    printf("Numero aleatorio: %d\n", numero);
    
    return 0;
}
