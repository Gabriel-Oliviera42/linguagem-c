#include <stdio.h>

int main() {
    int n;
    printf("Quantos números você deseja inserir? ");
    scanf("%d", &n);

    int soma = 0, i;
    for (i = 0; i < n; i++) {
        int num;
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }

    double media = (double)soma / n;
    printf("A média dos números é: %.2lf\n", media);

    return 0;
}
