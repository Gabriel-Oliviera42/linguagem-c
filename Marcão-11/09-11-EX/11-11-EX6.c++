#include <iostream>
#include "Pilha.h"

void mostraNumerosPilha(Pilha P) {
    printf("\nNumeros na pilha:\n");
    for (int i = 0; i < P->topo; i++) {
        printf("%c ", P->item[i]);
    }
    printf("\n");
}

int main(void) {
    Pilha minhaPilha = criapilha(10);

    // Solicitando ao usuário que insira os números na pilha
    printf("Digite 10 numeros para a pilha:\n");
    for (int i = 0; i < 10; i++) {
        Elem numero;
        printf("Numero %d: ", i + 1);
        scanf(" %c", &numero); // Note o espaço antes do %c para consumir possíveis quebras de linha anteriores
        push(minhaPilha, numero);
    }

    // Chamando a função para mostrar os números na pilha
    mostraNumerosPilha(minhaPilha);

    return 0;
}