#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[100]; 
    printf("Digite uma frase: ");
    gets(frase);

    char *palavra;
    palavra = strtok(frase, " "); // Divide a frase em palavras com base nos espaços em branco

    while (palavra != NULL) { // vai dar as sub strings até chegar ao final
        if (strcmp(palavra, "ALUNO") == 0) {
            printf("ESTUDANTE ");
        } else if (strcmp(palavra, "ESCOLA") == 0) {
            printf("UNIVERSIDADE ");    
        } else {
            printf("%s ", palavra);
        }
        palavra = strtok(NULL, " "); // coloca os espaços de volta
    }

    return 0;
}
