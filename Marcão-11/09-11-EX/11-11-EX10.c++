#include <stdio.h>
#include "Pilha.h"

int somaPositivosPilha(Pilha P) {
    int soma = 0;

    for (int i = 0; i < P->topo; i++) {
        if (P->item[i] > 0) {
            soma += P->item[i];
        }
    }

    return soma;
}

int main() {
    Pilha minhaPilha = criapilha(10);
    int resultadoSomaPositivos;

    push(minhaPilha, -2);
    push(minhaPilha, 4);
    push(minhaPilha, -5);
    push(minhaPilha, 2);
    push(minhaPilha, -20);
    push(minhaPilha, 7);

    // Supondo que 'minhaPilha' é uma pilha já preenchida
    resultadoSomaPositivos = somaPositivosPilha(minhaPilha);

    printf("A soma dos numeros positivos na pilha e: %d\n", resultadoSomaPositivos);

    return 0;
}
