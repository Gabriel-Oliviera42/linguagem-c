#include <stdlib.h>
#include <stdio.h>

int main(void) {

    int A = 100, *B, **C;

    B = &A;
    C = &B;

    printf("Endereco de A: %p\t Conteudo de A: %d\n", &A, A);
    printf("Endereco de B: %p\t Conteudo de B: %p\n", &B, B);
    printf("Conteudo apontado por B: %d", *B);
    printf("Endereco de C: %p\t Conteudo de C: %p\n", &C, C);
    printf("Conteudo apontado por C: %d", **C);

    return 0;
}