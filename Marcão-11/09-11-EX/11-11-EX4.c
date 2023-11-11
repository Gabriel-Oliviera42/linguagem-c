#include <stdio.h>

int main() {
    // Declarando o vetor
    int numeros[15], i;

    // Solicitando ao usuário que insira os números no vetor
    printf("Digite 15 numeros:\n");

    // Loop para receber os números
    for (i = 0; i < 15; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Exibindo os números pares
    printf("\nNumeros pares inseridos:\n");
    for (i = 0; i < 15; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }

    return 0;
}
