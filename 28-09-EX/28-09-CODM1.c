#include <stdio.h>

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

    // Calcula a média
    media = (num1 + num2 + num3) / 3.0;

    // Exibe o resultado
    printf("A média dos três números é: %.2f\n", media);

    return 0;
}
