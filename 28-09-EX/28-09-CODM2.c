#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numeroAleatorio = (rand() % 100) + 1;
    printf("Número aleatório gerado: %d\n", numeroAleatorio);

    return 0;
}
