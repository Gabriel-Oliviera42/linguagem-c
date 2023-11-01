#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[50] = {"gabriel"};

    printf("\nAntes: %s\n", palavra);

    strupr(palavra);
    printf("\nmaiuscula: %s\n", palavra);

    return 0;
}