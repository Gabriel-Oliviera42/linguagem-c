#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");
    
    int idade;


    printf("Coloque a idade: ");
    scanf("%i",&idade);

    if (idade > 17 && idade < 68) {
        printf("pode doar sangue");
    } else {
        printf("não pode doar sangue");
    }

    return 0;
}