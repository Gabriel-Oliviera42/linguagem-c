#include <stdio.h>

int calcularFatorial() {
    int num, fatorial = 1;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int resultado = calcularFatorial();
    printf("O fatorial é %d\n", resultado);

    return 0;
}
