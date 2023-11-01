#include <stdio.h>
#include <string.h>

int main() {

    char gabarito[10] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
    char respostas[10];
    int i, acertos = 0, erros = 0;

    for (i = 0; i < 10; i++) {
        printf("\nDigite uma letra: "); 
        scanf(" %s", &respostas[i]); 
    }

    for (i = 0; i < 10; i++) {
        if (respostas[i] == gabarito[i]) { 
            acertos++;
        } else {
            erros++;
        }
    }

    printf("Acertos: %d\n", acertos); // Adicionei "\n" para formatação
    printf("Erros: %d\n", erros);     // Adicionei "\n" para formatação

    return 0;
}
