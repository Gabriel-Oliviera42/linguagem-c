#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int N1, N2, SOMA;

    printf("Coloque o Número 1: ");
    scanf("%i",&N1);

    printf("Coloque o Número 2: ");
    scanf("%i",&N2);

    SOMA = N1 + N2;

    printf("A soma dos números é: %i", SOMA);

    return 0;
}
