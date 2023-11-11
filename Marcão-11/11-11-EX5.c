#include <stdio.h>

int main() {
    // Declarando o vetor
    int numeros[10], i, somaPositivos = 0;

    // Solicitando ao usuário que insira os números no vetor
    printf("Digite 10 numeros:\n");

    // Loop para receber os números
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Calculando a soma dos números positivos
    for (i = 0; i < 10; i++) {
        if (numeros[i] > 0) {
            somaPositivos += numeros[i];
        }
    }

    // Ezibindo a soma dos números positivos
    printf("\nA soma dos numeros positivos inseridos e: %d\n", somaPositivos);

    return 0;
}
