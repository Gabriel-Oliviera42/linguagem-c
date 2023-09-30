#include <stdio.h>

int main() {
    int num, fatorial = 1;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %d\n", num, fatorial);

    return 0;
}
