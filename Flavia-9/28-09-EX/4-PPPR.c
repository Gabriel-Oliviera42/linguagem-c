#include <stdio.h>

// Passagem de Parâmetro por Referência:

void dobraPorReferencia(int *x) {
    // Dobra o valor referenciado pelo ponteiro
    *x = (*x) * 2;
}

// ---------------- COMEÇA O CÓDIGO PRINCIPAL ----------------

int main() {
    int numero = 7;
    
    // Chama a função dobraPorReferencia com o endereço de numero
    dobraPorReferencia(&numero);
    
    // Imprime o valor dobrado
    printf("O numero dobrado e: %d\n", numero);
    
    return 0;
}
