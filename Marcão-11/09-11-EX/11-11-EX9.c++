#include <stdio.h>
#include "Pilha.h"

void mostraParesPilha(Pilha P) {
    printf("\nNumeros pares na pilha:\n");

    for (int i = 0; i < P->topo; i++) {
        if (P->item[i] % 2 == 0) {
            printf("%d ", P->item[i]);
        }
    }

    printf("\n");
}

int main() {
    Pilha minhaPilha = criapilha(10);

    push(minhaPilha, 1);
    push(minhaPilha, 4);
    push(minhaPilha, 5);
    push(minhaPilha, 2);

    // Supondo que 'minhaPilha' é uma pilha já preenchida
    mostraParesPilha(minhaPilha);

    return 0;
}
