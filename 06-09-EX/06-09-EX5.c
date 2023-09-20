#include <stdio.h>

int main() {
    int vetor[8];
    int i, j, aux;
    
    for (i = 0; i < 8; i++) {
        printf("digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]); 
    }

    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 8; j++) {
            if (vetor[i] > vetor[j]) {  // só troca de lugar usando um auxiliar
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("Vetor em ordem crescente: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
