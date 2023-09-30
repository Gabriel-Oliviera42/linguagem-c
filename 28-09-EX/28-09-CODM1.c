#include <stdio.h>

int main() {
    int num1 = 5, num2 = 7;
    int resultado_soma = num1 + num2;
    printf("A soma de %d e %d é %d\n", num1, num2, resultado_soma);

    char texto[] = "exemplo de texto";
    char caractere = 'e';
    int cont = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == caractere) {
            cont++;
        }
    }
    printf("O caractere '%c' aparece %d vezes na string.\n", caractere, cont);

    return 0;
}
