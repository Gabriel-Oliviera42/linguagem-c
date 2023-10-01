#include <stdio.h>

// Função para trocar os valores de duas variáveis usando passagem por valor
void trocarPorValor(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// Função para trocar os valores de duas variáveis usando passagem por referência
void trocarPorReferencia(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Valores antes da troca: a = %d, b = %d\n", a, b);

    // Chame uma das funções abaixo para realizar a troca

    // Para trocar usando passagem por valor:
    // trocarPorValor(a, b);

    // Para trocar usando passagem por referência:
    trocarPorReferencia(&a, &b);

    printf("Valores após a troca: a = %d, b = %d\n", a, b);

    return 0;
}
