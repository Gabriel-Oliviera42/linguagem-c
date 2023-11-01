#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");
    
    int N;


    printf("Coloque o Número: ");
    scanf("%i",&N);

    if (N > 0) {
        printf("o número é positivo");
    } else if (N < 0) {
        printf("o número é negativo");
    } else {
        printf("o número é 0");
    }

    return 0;
}