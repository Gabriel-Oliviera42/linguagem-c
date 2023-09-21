#include <stdio.h>

int main(void) {

    int matriz1[3][3], matriz2[3][3], resultado[3][3];
    int i, j, k;
    
    // ---------------Leitura da primeira matriz------------------

    printf("Digite os elementos da primeira matriz:\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    // ---------------Leitura da segunda matriz-------------------

    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    // ---------Inicializa a matriz resultado com zeros------------

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultado[i][j] = 0;
        }
    }
    
    // ---------------Multiplicação das matrizes--------------------

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    
    // -----------------Impressão da matriz resultado--------------
    
    printf("Resultado da multiplicação:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
