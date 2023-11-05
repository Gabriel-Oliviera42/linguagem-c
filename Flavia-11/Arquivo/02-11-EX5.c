#include <stdio.h> // Inclui a biblioteca de entrada e saída padrão em C.

int main() { // Função principal do programa.
    FILE *p; // Declara um ponteiro para um arquivo.
    char cadeia[30]; // Declara uma matriz de caracteres para armazenar uma cadeia de no máximo 30 caracteres.

    p = fopen("C:\\exemplo\\teste\\cadeias.txt", "a"); // Abre o arquivo em modo de adição.

    if (p == NULL) // Verifica se houve erro na abertura do arquivo.
        printf("\nErro na abertura"); // Imprime uma mensagem de erro caso não seja possível abrir o arquivo.
    else {
        printf("\nDigite uma cadeia de caracteres: "); // Solicita ao usuário que digite uma cadeia de caracteres.
        gets(cadeia); // Lê a cadeia de caracteres digitada pelo usuário.

        while (_stricmp(cadeia, "fim") != 0) { // Enquanto a cadeia de caracteres digitada não for "fim":
            fputs(cadeia, p); // Escreve a cadeia de caracteres no arquivo.

            if (ferror(p)) // Verifica se ocorreu algum erro durante a gravação no arquivo.
                printf("\nErro na gravação da cadeia"); // Imprime uma mensagem de erro caso ocorra um erro na gravação.
            else
                printf("\nGravação realizada com sucesso"); // Caso contrário, imprime uma mensagem de sucesso na gravação.

            printf("\nDigite outra cadeia: "); // Solicita ao usuário que digite outra cadeia de caracteres.
            gets(cadeia); // Lê a próxima cadeia de caracteres digitada pelo usuário.
        }
    }

    fclose(p); // Fecha o arquivo.
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
