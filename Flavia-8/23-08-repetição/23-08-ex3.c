#include <stdio.h>

int main(void)
{
    float I, MA = 0, A;

    for (I = 0; I < 10; I++) {
        
        printf("Coloque a Altura: ");
        scanf("%f",&A);

        if (A > MA) {
            MA = A;
        }
    }

    printf("Maior Altura: %f", MA);


    return 0;
}