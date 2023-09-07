#include <stdio.h>
#include <string.h>

int main(){

    float notas[5] = {6,9,8,4,5};
    int I, SN = 0;


    for(I = 0; I < 5; I++) {
        SN += notas[I];
    }

    for(I = 0; I < 5; I++) {
        if(notas[I] > (SN/5)) {
            printf("%.1f \n",notas[I]);
        }
    }
    return 0;
}