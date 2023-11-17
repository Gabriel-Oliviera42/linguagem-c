#include <iostream>
#include "Pilha.h"

int somaPilha(Pilha P) {
    int soma = 0;

    for (int i = 0; i < P->topo; i++) {
        soma += P->item[i];
    }

    return soma;
}

int main() {

    Pilha minhaPilha = criapilha(10);

    push(minhaPilha, 1);
    push(minhaPilha, 4);
    push(minhaPilha, 5);
    push(minhaPilha, 2);

    // Supondo que 'minhaPilha' é uma pilha já preenchida
    int resultadoSoma = somaPilha(minhaPilha);

    printf("A soma dos numeros na pilha e: %d\n", resultadoSoma);

    return 0;
}