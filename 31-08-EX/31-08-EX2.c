/*Leia dois nomes. Converta-os para maiúsculo. Em seguida,
escreva-os na tela. Conte o número de caracteres de cada um e
escreva na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra1[50] = {"gabriel"}, palavra2[50] = {"cleiton"};
    int N;

    strupr(palavra1);
    strupr(palavra2);

    N = strlen(palavra1);
    printf("\nmaiuscula: %s com %d letras\n", palavra1,N);

    N = strlen(palavra2);
    printf("\nmaiuscula: %s com %d letras\n", palavra2,N);


    return 0;
}