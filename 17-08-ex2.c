#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");
    
    int N;


    printf("Coloque o Número: ");
    scanf("%i",&N);

    if (N % 5 == 0) {
        printf("é divisivel por 5");
    } else {
        printf("não divisivel por 5");
    }

    return 0;
}