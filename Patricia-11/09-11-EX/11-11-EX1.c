#include <stdio.h>

int main() {
    // Declarando o vetor
    int numeros[10], i;

    // Solicitando ao usuário que insira os números no vetor
    printf("Digite 10 numeros:\n");

    // Loop para receber os números
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Exibindo os números do vetor
    printf("\nNumeros inseridos:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
