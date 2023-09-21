#include <stdio.h>

int main(void) {

    int matriz1[2][2], matriz2[2][2], resultado[2][2];
    int i, j, k;
    
    // ---------------Leitura da primeira matriz------------------

    printf("Digite os elementos da primeira matriz:\n\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    // ---------------Leitura da segunda matriz-------------------

    printf("\nDigite os elementos da segunda matriz:\n\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    // ---------Inicializa a matriz resultado com zeros------------

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            resultado[i][j] = 0;
        }
    }
    
    // ---------------Multiplicação das matrizes--------------------

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                resultado[i][j] =  resultado[i][j] + (matriz1[i][k] * matriz2[k][j]);
            }
        }
    }
    
    // -----------------Impressão da matriz resultado--------------
    
    printf("Resultado da multiplicação:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
