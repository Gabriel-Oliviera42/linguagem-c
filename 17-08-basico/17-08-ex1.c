#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");
    
    float N, RQ;


    printf("Coloque o Número: ");
    scanf("%f",&N);

    if (N > 0) {
        RQ = sqrt(N);
        printf("a raiz é: %.2f", RQ);
    } else {
        printf("O número é inválido.");
    }

    return 0;
}