#include <stdlib.h>
#include <stdio.h>

int main(void) {

    int A = 100, *B, **C;

    B = &A;
    C = &B;

    printf("Endereco de A: %p\tConteudo de A: %d\n", &A, A);
    printf("Endereco de B: %p\tConteudo de B: %p\n", &B, B);
    printf("Conteudo apontado por B: %d", *B);
    printf("Endereco de B: %p\tConteudo de B: %p\n", &c, c);
    return 0;
}