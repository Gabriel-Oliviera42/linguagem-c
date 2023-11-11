#include <iostream>
#include <string.h>

int main(void) {             // Função principal do programa.
    FILE *p;             // Declara um ponteiro para um arquivo.
    char nome[30];       // Declara uma variável do tipo caractere.

    p = fopen("C:\\lin_c\\caract.txt", "a"); // Abre o arquivo em modo de adição.

    if (p == NULL) // Verifica se houve erro na abertura do arquivo.
        printf("\nErro na abertura"); // Imprime uma mensagem de erro caso não seja possível abrir o arquivo.
    else { // Caso contrário, se o arquivo foi aberto com sucesso:
        printf("Digite um nome: ");
        gets(nome);

        while (strcmp(nome,"fim") != 0) { // Enquanto o caractere digitado não for 'fim':
            fprintf(p, "%s\n", nome); 
            fputc('\n', p);

            if (ferror(p)) // Verifica se ocorreu algum erro durante a gravação no arquivo.
                printf("\nErro  na gravação do caractere"); // Imprime uma mensagem de erro caso ocorra um erro na gravação.
            else {
                printf("\nGravação realizada com sucesso"); // Caso contrário, imprime uma mensagem de sucesso na gravação.
            }
            printf("\nDigite outro caractere: "); // Solicita ao usuário que digite outro caractere.
            gets(nome); // Lê um novo caractere digitado pelo usuário.
        }
    }
    fclose(p); // Fecha o arquivo.
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
