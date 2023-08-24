#include <stdio.h>

int main(void)
{
    int I, MA = 0, A;

    for (I = 0; I < 10; I++) {
        
        printf("Coloque a Altura: ");
        scanf("%i",&A);

        if (A > MA) {
            MA = A;
        }
    }

    printf("Maior Altura: %i", MA);


    return 0;
}