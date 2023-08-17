#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL)
    int N;

    printf("coloque o numero: ");   
    scanf("%i",&N);

    printf("Numero: %i", N);   

    return 0;
}
