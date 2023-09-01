//Faça um programa que receba uma frase e troque a palavra ALUNO por ESTUDANTE e a palavra ESCOLA por UNIVERSIDADE.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra1[50] = {"EU SOU ALUNO DA ESCOLA"}, palavra2[50];
    int N, I, k;

    N = strlen(palavra1);

    printf("%d", N);
    
    for (I = 0; I <N; I++) {
        k = 0;
        if (palavra1[I] == ' ') {
            k = I-1;
            for (I = 0; I < k; I++) {
            palavra2[I] = palavra1[I];
            }
        }
    }
    printf("%s", palavra2);
    printf("%s", palavra1);

    return 0;
}