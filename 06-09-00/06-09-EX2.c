#include <stdio.h>
#include <string.h>

int main(){

    float notas[10];
    int i, cont;

    for(i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%f",&notas[i]);
    }

    cont = 0;

    for(i = 0; i < 10; i++) {
        if(notas[i] >= 7.5) {
            printf("\n%.1f",notas[i]);
            cont++;
        }
    }

    printf("%d",cont);
    return 0;
}