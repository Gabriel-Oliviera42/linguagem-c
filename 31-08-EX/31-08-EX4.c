/*Faça um programa que receba uma frase, calcule e mostre a quantidade de vogais da frase
digitada. O programa deverá contar vogais maiúsculas e minúsculas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char TEXTO1[50] = {"Uma frase qualquer"};
    int I, TAMANHO, vogais;

    TAMANHO = strlen(TEXTO1);

    for (I = 0; I<TAMANHO; I++) {
        if (TEXTO1[I] == 'A' || TEXTO1[I] == 'E'|| TEXTO1[I] == 'I' || TEXTO1[I] == 'O'|| TEXTO1[I] == 'U' || TEXTO1[I] == 'a' || TEXTO1[I] == 'e' || TEXTO1[I] == 'i' || TEXTO1[I] == 'o' || TEXTO1[I] == 'u') {
        vogais++;        
        }

    }

    printf("tem %d vogais na frase",vogais);


    return 0;
}