#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");
    
    int QP;


    printf("Coloque a quantidade de pessoas: ");
    scanf("%i",&QP);

    if (QP < 1000) {
        printf("público baixo");
    } else if (QP < 10001){
        printf("público médio");
    } else {
        printf("público bom");
    }

    return 0;
}