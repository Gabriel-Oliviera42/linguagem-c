#include <stdio.h>

double calcularMedia(int n) {
    int soma = 0;
    int i;  
    for (i = 0; i < n; i++) {
        int num;
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }
    return (double)soma / n;
}

int main() {
    int n;
    printf("Quantos números você deseja inserir? ");
    scanf("%d", &n);

    double media = calcularMedia(n);
    printf("A média dos números é: %.2lf\n", media);

    return 0;
}
