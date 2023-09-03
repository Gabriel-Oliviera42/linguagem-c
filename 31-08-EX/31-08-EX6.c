#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100]; 

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho, i , j, palindromo = 1;

    tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0; // Se encontrarmos caracteres diferentes, não é um palíndromo, e se for ele usa o BREAK para sair da função
            break;
        }
    }

    if (palindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}
