#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char novaFrase[100];
    char *palavra;
    int posicao = 0;

    printf("Digite uma frase: ");
    gets(frase);

    palavra = strtok(frase, " ");

    while (palavra != NULL) {
        if (strcmp(palavra, "ALUNO") == 0) {
            strcat(novaFrase, "ESTUDANTE ");
        } else if (strcmp(palavra, "ESCOLA") == 0) {
            strcat(novaFrase, "UNIVERSIDADE ");
        } else {
            strcat(novaFrase, palavra);
            strcat(novaFrase, " ");
        }
        palavra = strtok(NULL, " ");
    }

    novaFrase[strlen(novaFrase) - 1] = '\0';

    printf("Saída: %s\n", novaFrase);

    return 0;
}