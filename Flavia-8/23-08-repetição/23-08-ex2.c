#include <stdio.h>
#include <math.h>

int main(void)
{
    int P, N, I;
    double R;

    printf("Coloque o Numero: ");
    scanf("%i",&N);

    printf("Coloque o Potencia: ");
    scanf("%i",&P);

    for (I = 0; I <= P; I++) {
        R = pow(N,I);
        printf("%i elevado a %i: %.0f \n",N,I,R);
    }


    return 0;
}