#include <stdio.h> // Inclui a biblioteca de entrada e saída padrão em C.

int main() { // Função principal do programa.
    FILE *p; // Declara um ponteiro para um arquivo.
    char cadeia[5]; // Declara uma matriz de caracteres para armazenar uma cadeia de no máximo 5 caracteres.

    p = fopen("c:\\exemplo\\teste\\cadeias.txt", "r"); // Abre o arquivo em modo de leitura.

    if (p == NULL) // Verifica se houve erro na abertura do arquivo.
        printf("\nErro na abertura"); // Imprime uma mensagem de erro caso não seja possível abrir o arquivo.
    else {
        while (!feof(p)) { // Enquanto não atingir o final do arquivo:
            fgets(cadeia, 5, p); // Lê uma linha do arquivo de até 4 caracteres (o quinto é para o caractere nulo).

            if (ferror(p)) // Verifica se ocorreu algum erro durante a leitura do arquivo.
                printf("\nErro na leitura da cadeia"); // Imprime uma mensagem de erro caso ocorra um erro na leitura.
            else {
                printf("\nLeitura realizada com sucesso"); // Imprime uma mensagem de sucesso na leitura.
                printf("Cadeia lida: %s", cadeia); // Imprime a cadeia lida do arquivo.
            }
        }
    }
    getchar(); // Aguarda a entrada de um caractere antes de encerrar o programa.
    fclose(p); // Fecha o arquivo.
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
