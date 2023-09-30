#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido. Digite um número não negativo.\n");
    } else {
        unsigned long long resultado = 1;
        for (int i = 1; i <= numero; i++) {
            resultado *= i;
        }
        printf("%d! = %llu\n", numero, resultado);
    }

    return 0;
}
