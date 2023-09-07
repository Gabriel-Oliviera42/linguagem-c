#include <stdio.h>
#include <string.h>

int main(){

    int N[5], i, MN = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d",&N[i]);
        if(N[i] > MN) {
            MN = N[i];
        }
    }

    printf("%d e o maior numero", MN);

    return 0;
}