#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    float x1, x2, y1, y2, F;


    printf("Coloque o X1: ");
    scanf("%f",&x1);
    printf("Coloque o X2: ");
    scanf("%f",&x2);
    printf("Coloque o y1: ");
    scanf("%f",&y1);
    printf("Coloque o y2: ");
    scanf("%f",&y2);

    F = sqrt(pow((x1-x2),2) + pow((y1-y2),2));

    printf("A tersa parte deste número é: %f", F);

    return 0;
}
