#include <iostream>
#include "Pilha.h"

int main(void) {
  
  Pilha P1 = criapilha(20);  // Cria uma pilha com capacidade para 20 elementos

  push(P1, 'a');             // Adiciona 'a' à pilha
  push(P1, 'b');             // Adiciona 'b' à pilha

  printf("%c\n", pop(P1));   // monstra no terminal

  return 0;
}
