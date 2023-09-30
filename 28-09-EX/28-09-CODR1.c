//Funções com Passagem de Parâmetros e Sem Retorno

#include <stdio.h>

// Função que soma dois números e exibe o resultado
void soma(int a, int b) {
    int resultado = a + b;
    printf("A soma de %d e %d é %d\n", a, b, resultado);
}

// Função que conta quantas vezes um caractere aparece em uma string
void contarCaractere(char str[], char ch) {
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            cont++;
        }
    }
    printf("O caractere '%c' aparece %d vezes na string.\n", ch, cont);
}

int main() {
    int num1 = 5, num2 = 7;
    soma(num1, num2);

    char texto[] = "exemplo de texto";
    char caractere = 'e';
    contarCaractere(texto, caractere);

    return 0;
}
