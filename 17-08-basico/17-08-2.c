#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");
    
    int N;


    printf("Coloque o Número: ");
    scanf("%i",&N);

    printf("O antecessor: %i\n",N-1);

    printf("O sucessor: %i",N+1);

    return 0;
}
