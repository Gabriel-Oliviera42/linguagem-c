#include <stdio.h>

// Sub-rotina - Funções com Passagem de Parâmetros e Sem Retorno:

void soma(int a, int b) {
    // Realiza a soma dos parâmetros
    int resultado = a + b;
    
    // Imprime o resultado
    printf("A soma de %d e %d e %d\n", a, b, resultado);
}

// ---------------- COMEÇA O CÓDIGO PRINCIPAL ----------------

int main() {
    int num1 = 5, num2 = 7;
    
    // Chama a função soma com os valores de num1 e num2
    soma(num1, num2);
    
    return 0;
}
