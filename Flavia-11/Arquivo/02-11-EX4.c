#include <stdio.h> // Inclui a biblioteca de entrada e saída padrão em C.

int main() { // Função principal do programa.
    FILE *p; // Declara um ponteiro para um arquivo.
    char carac; // Declara uma variável do tipo caractere.

    p = fopen("C:\\exemplo\\teste\\caract.dat", "r"); // Abre o arquivo em modo de leitura.

    if (p == NULL) // Verifica se houve erro na abertura do arquivo.
        printf("\nErro na abertura"); // Imprime uma mensagem de erro caso não seja possível abrir o arquivo.
    else {
        do { // Inicia um loop que continuará até o final do arquivo.
            carac = fgetc(p); // Lê o próximo caractere do arquivo.

            if (ferror(p)) // Verifica se ocorreu algum erro durante a leitura do arquivo.
                printf("\nErro na leitura do caractere"); // Imprime uma mensagem de erro caso ocorra um erro na leitura.
            else {
                if (!feof(p)) { // Verifica se ainda não chegou ao final do arquivo.
                    printf("\nLeitura realizada com sucesso"); // Imprime uma mensagem de sucesso na leitura.
                    printf("Caractere lido: %c", carac); // Imprime o caractere lido do arquivo.
                }
            }
        } while (!feof(p)); // Continua o loop até que o final do arquivo seja alcançado.
    }
    fclose(p); // Fecha o arquivo.
    system("pause"); // Pausa o sistema antes de encerrar o programa.
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
