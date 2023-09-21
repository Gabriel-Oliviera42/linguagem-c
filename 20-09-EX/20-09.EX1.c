#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int mat [3][5] = {
     //C1,C2,C3,C4,C5
        {1,1,1,1,1},//L1
        {1,1,1,1,1},//L2
        {1,1,1,1,1} //L3
    };
    int j, i;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d", mat[i][j]);
        }
    }
    return 0;
}