#include <stdio.h>

int main(void)
{
    int I, soma = 0;

    for (I = 0; I < 100; I++) {
        if (I % 2 == 0) {
            soma += I;
        }
    }

    printf("Soma %i", soma);

    return 0;
}