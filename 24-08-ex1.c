#include <stdio.h>

int main() {
    int num, sum = 0, i;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d é um número perfeito.\n", num);
    } else {
        printf("%d não é um número perfeito.\n", num);
    }

    return 0;
}


