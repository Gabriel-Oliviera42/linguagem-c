#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");
    
    int N;


    printf("Coloque o Número: ");
    scanf("%i",&N);

    if (N % 2 == 0) {
        printf("o número é par");
    } else {
        printf("o número é impar");
    }

    return 0;
}
