#include <stdio.h>

int main() {
    // Declarando o vetor
    int numeros[20], i;;

    // Solicitando ao usuário que insira os números no vetor
    printf("Digite 20 numeros:\n");

    for (i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Encontrando o maior número no vetor
    int maior = numeros[0];
    for (i = 1; i < 20; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Exibindo o maior número
    printf("\nO maior numero inserido e: %d\n", maior);

    return 0;
}
