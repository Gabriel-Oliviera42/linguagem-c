#include <stdio.h>

int main() {
    int num = 5;
    int resultado_quadrado = num * num;
    printf("O quadrado de %d é %d\n", num, resultado_quadrado);

    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = 5;
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    double media = (double)soma / tamanho;
    printf("A média dos valores é %.2lf\n", media);

    return 0;
}
