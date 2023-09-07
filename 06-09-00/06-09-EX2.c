#include <stdio.h>
#include <string.h>

int main(){

    float notas[10] = {7,5,3,5,8,6,3,1,3,7};
    int I;

    for(I = 0; I < 10; I++) {
        if(notas[I] >= 7.5) {
            printf("%.1f \n",notas[I]);
        }
    }
    return 0;
}