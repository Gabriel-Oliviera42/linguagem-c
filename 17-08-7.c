#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");
    
    int T;


    printf("Coloque sua témperatura: ");
    scanf("%i",&T);

    if (T >= 37) {
        printf("você está com febre");
    } else {
        printf("você tá bem");
    }

    return 0;
}