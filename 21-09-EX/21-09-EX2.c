/* 2 - Faça um programa que leia uma matriz 3 x 2 e mostre a matriz
transposta ( 2 x 3).Exemplo:*/

//   Matriz Lida    |       Matriz Transposta
//------------------|-------------------------------
//    3    7        |      3      -9     141
//   -9   85        |      7      85      22
//  141   22        |

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int Matriz [3][2] = {
        //C1 C2 
          {3,7}, //L1
         {9,85}, //L2
        {141,22} //L3
    };
    int MatrizTransposta [2][3];
    int j, i;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            MatrizTransposta [i][j] = 0;
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            MatrizTransposta  [j][i] = Matriz [i][j];
            printf("%d ", MatrizTransposta [i][j]);

        }
        printf("\n");
    }

    return 0;
}