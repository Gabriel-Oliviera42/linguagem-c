#include <stdio.h>

// Passagem de Parâmetro por Valor:

void duplica(int x) {
    // Dobra o valor do parâmetro
    x = x * 2;
    
    // Imprime o dobro
    printf("O dobro do numero e: %d\n", x);
}

// ---------------- COMEÇA O CÓDIGO PRINCIPAL ----------------

int main() {
    int numero = 10;
    
    // Chama a função duplica com o valor de numero
    duplica(numero);
    
    // Imprime o valor original
    printf("O numero original e: %d\n", numero);
    
    return 0;
}
