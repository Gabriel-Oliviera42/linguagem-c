#include <stdio.h>

int main() {
    FILE *arq;
    arq = fopen("arquivo1.dat", "r");
    if (arq == NULL) {
        printf("\nOcorreu um erro. O arquivo não foi aberto.");
    } else {
        /* As demais instruções do programa só poderão ser
        executadas se o arquivo foi aberto de forma correta. */
    }
    // continuação do programa
    return 0;
}
