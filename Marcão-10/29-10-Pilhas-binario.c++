#include <iostream>
#include "Pilha.h"

int main(void) {
    int n;
    Pilha P = criapilha(32);   // Cria uma pilha com capacidade para 32 elementos

    printf("Decimal? ");       // Escreve na Tela pedindo o número em decimal
    scanf("%d",&n);            // Pega o número que será usado no código

    do
    {
        push(P, n % 2);
        n /= 2;
    } while (n != 0);

    printf("Binario: ");    

    while (!vaziap(P))
    {
        printf("%d", pop(P));
    }

    destroip(P);

    return 0;
}
