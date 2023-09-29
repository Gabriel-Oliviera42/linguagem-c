#include <stdio.h>

// Função para calcular a média de três números inteiros
float calcularMedia(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    int num1, num2, num3;
    float media;

    // Solicita ao usuário que insira três números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Chamando a função para calcular a média
    media = calcularMedia(num1, num2, num3);

    // Exibe o resultado
    printf("A média dos três números é: %.2f\n", media);

    return 0;
}
