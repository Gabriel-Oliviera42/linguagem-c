#include <stdio.h>

// Função que calcula o fatorial de um número
unsigned long long calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calcularFatorial(num - 1);
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido. Digite um número não negativo.\n");
    } else {
        unsigned long long resultado = calcularFatorial(numero);
        printf("%d! = %llu\n", numero, resultado);
    }

    return 0;
}
