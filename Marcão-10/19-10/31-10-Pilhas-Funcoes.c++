#include <iostream>

typedef char Elem; // Define o tipo de dado 'Elem' como um caractere

// ------------------------ Definição da estrutura da pilha ------------------------ 

typedef struct pilha {
    int MAX;      // Capacidade máxima da pilha
    int topo;     // Índice que aponta para o topo da pilha
    Elem *item;   // Array de elementos da pilha
} * Pilha;        // Definição do ponteiro para a estrutura

// ---------------- Função para criar uma nova pilha com tamanho 'tam' ---------------- 

Pilha criapilha(int tam) {
    Pilha aux = new pilha;     // Aloca memória para a estrutura da pilha
    aux->MAX = tam;            // Define a capacidade máxima da pilha como 'tam'
    aux->topo = 0;             // Inicializa o topo como 0, indicando uma pilha vazia
    aux->item = new Elem[tam]; // Aloca memória para o array de elementos da pilha
    return aux;                // Retorna o ponteiro para a nova pilha
}

// ---------------- Função para adicionar um elemento 'x' à pilha 'P' ----------- 

void push(Pilha P, Elem x) {
    if (P->topo < P->MAX) {     // Verifica se a pilha não está cheia
        P->item[P->topo] = x;   // Adiciona o elemento 'x' no topo da pilha
        P->topo++;              // Incrementa o topo para apontar para o próximo espaço vazio
    }
}

// ----------- Função para remover e retornar o elemento no topo da pilha 'P' ----------- 

Elem pop(Pilha P) {
    if (P->topo > 0) {           // Verifica se a pilha não está vazia
        P->topo--;               // Decrementa o topo para apontar para o elemento anterior
        return P->item[P->topo]; // Retorna o elemento que estava no topo
    }
}

// ---------------- Função para verificar se a pilha 'P' está vazia ---------------- 

int vaziap(Pilha P) {
    if (P->topo == 0) {   // Verifica se o topo da pilha está no índice 0, indicando que a pilha está vazia
        return 1;         // Retorna 1 se a pilha estiver vazia
    } else {
        return 0;         // Retorna 0 se a pilha não estiver vazia
    }
}

// ----------------- Função para verificar se a pilha 'P' está cheia---------------

int cheiap(Pilha P) {
    if (P->topo == P->MAX) { // Verifica se o topo da pilha está no índice máximo, indicando que a pilha está cheia
        return 1;            // Retorna 1 se a pilha estiver cheia
    } else {
        return 0;            // Retorna 0 se a pilha não estiver cheia
    }
}

// --------- Função para acessar e devolver o item existente no topo da pilha 'P' --------

Elem topo(Pilha P) {
    if (P->topo > 0) {               // Verifica se a pilha não está vazia
        return P->item[P->topo - 1]; // Retorna o elemento que está no topo da pilha
    }
}

// ------------------------- Função para destruir a pilha 'P' -------------------------

void destroip(Pilha &P) {
    delete[] P->item;  // Libera a memória alocada para o array de elementos da pilha
    delete P;          // Libera a memória alocada para a estrutura da pilha
    P = nullptr;       // Atribui nullptr ao ponteiro da pilha para evitar o acesso após a destruição
}
