#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int mat [4][5];
    int j, i, n = 11;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++, n++) {
            mat[i][j] = n; 
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}