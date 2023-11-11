#include <stdio.h>

int main() {
    // Declarando o vetor
    int numeros[30], i, soma = 0;

    // Solicitando ao usuário que insira os números no vetor
    printf("Digite 30 numeros:\n");

    // Loop para receber os números
    for (i = 0; i < 30; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Calculando a soma dos números
    for (i = 0; i < 30; i++) {
        soma += numeros[i];
    }

    // Exibindo a soma
    printf("\nA soma dos numeros inseridos e: %d\n", soma);

    return 0;
}
