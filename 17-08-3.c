#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    int N;


    printf("Coloque o Número: ");
    scanf("%i",&N);

    printf("A tersa parte deste número é: %i", N/3);

    return 0;
}
