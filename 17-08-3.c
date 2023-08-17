#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    int N;


    printf("Coloque o Número: ");
    scanf("%i",&N);

    printf("A tersa parte deste número é: %f", N/3.0);

    return 0;
}
