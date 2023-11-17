#include <iostream>
#include "Pilha.h"

Elem maiorNumeroPilha(Pilha P) {
    if (P->topo > 0) {
        Elem maior = P->item[0];  // Inicializa o maior como o primeiro elemento da pilha

        for (int i = 1; i < P->topo; i++) {
            if (P->item[i] > maior) {
                maior = P->item[i];  // Atualiza o maior se encontrar um número maior na pilha
            }
        }

        return maior;
    } 
}

int main(void) {
    Pilha minhaPilha = criapilha(10);

    // Solicitando ao usuário que insira os números na pilha
    printf("Digite 10 numeros para a pilha:\n");
    for (int i = 0; i < 10; i++) {
        Elem numero;
        printf("Numero %d: ", i + 1);
        scanf(" %c", &numero);
        push(minhaPilha, numero);
    }

    // Chamando a função para mostrar os números na pilha
    maiorNumeroPilha(minhaPilha);

    // Chamando a função para encontrar o maior número na pilha
    Elem maior = maiorNumeroPilha(minhaPilha);
    if (maior != '\0') {
        printf("\nO maior numero na pilha e: %c\n", maior);
    } else {
        printf("\nA pilha esta vazia.\n");
    }

    return 0;
}