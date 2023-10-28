#include <iostream>

typedef char Elem;  // Define o tipo de dado 'Elem' como um caractere


// ------------------------ Definição da estrutura da pilha ------------------------ 
typedef struct pilha {
  int MAX;     // Capacidade máxima da pilha
  int topo;    // Índice que aponta para o topo da pilha
  Elem *item;  // Array de elementos da pilha
} *Pilha;      // Definição do ponteiro para a estrutura

// ---------------- Função para criar uma nova pilha com tamanho 'tam' ---------------- 

Pilha criapilha(int tam) {
  Pilha aux = new pilha;      // Aloca memória para a estrutura da pilha
  aux->MAX = tam;             // Define a capacidade máxima da pilha como 'tam'
  aux->topo = 0;              // Inicializa o topo como 0, indicando uma pilha vazia
  aux->item = new Elem[tam];  // Aloca memória para o array de elementos da pilha
  return aux;                 // Retorna o ponteiro para a nova pilha
}

// ---------------- Função para adicionar um elemento 'x' à pilha 'P' ----------- 

void push(Pilha P, Elem x) {
  if (P->topo < P->MAX) {  // Verifica se a pilha não está cheia
    P->item[P->topo] = x;  // Adiciona o elemento 'x' no topo da pilha
    P->topo++;             // Incrementa o topo para apontar para o próximo espaço vazio
  }
}

// ----------- Função para remover e retornar o elemento no topo da pilha 'P' ----------- 

Elem pop(Pilha P) {
  if (P->topo > 0) {          // Verifica se a pilha não está vazia
    P->topo--;                // Decrementa o topo para apontar para o elemento anterior
    return P->item[P->topo];  // Retorna o elemento que estava no topo
  }
}

// ---------------------------- Função principal ---------------------------- 

int main(void) {
  
  Pilha P1 = criapilha(20);  // Cria uma pilha com capacidade para 20 elementos

  push(P1, 'a');             // Adiciona 'a' à pilha
  push(P1, 'b');             // Adiciona 'b' à pilha

  printf("%c\n", pop(P1));   // monstra no terminal

  return 0;
}
