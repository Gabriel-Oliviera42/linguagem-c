#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Valores antes da troca: a = %d, b = %d\n", a, b);

    // Troca os valores de a e b sem o uso de funções
    int temp = a;
    a = b;
    b = temp;

    printf("Valores após a troca: a = %d, b = %d\n", a, b);

    return 0;
}
