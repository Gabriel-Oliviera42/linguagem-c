#include <stdio.h>
#include <stdlib.h>

int main(void) {
        int mat[3][4];
        int j,i,x=20;

        for(i=0;i<3;i++){
            for(j=0;j<4;j++,x++){
                mat[i][j] = x;
                printf("%d ", mat[i][j]);
            }   
            printf("\n");                                            
        }
       


    return 0;
}