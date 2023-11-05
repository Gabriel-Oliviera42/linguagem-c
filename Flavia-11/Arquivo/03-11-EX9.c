#include <stdio.h> // Inclui a biblioteca de entrada e saída padrão em C.

int main() { // Função principal do programa.

    // Declarações de variáveis
    FILE *cli; // Declara um ponteiro para um arquivo.
    struct cliente { // Definição da estrutura 'cliente'
        int numero;
        char nome[20];
    };
    struct cliente c; // Declara uma estrutura 'cliente' chamada 'c'.

    // Abre o arquivo em modo de adição e leitura.
    cli = fopen("c:\\exemplo\\teste\\clientes.dat", "a+");

    if (cli == NULL) // Verifica se houve erro na abertura do arquivo.
        printf("\nErro na abertura do arquivo"); // Imprime uma mensagem de erro caso não seja possível abrir o arquivo.
    else {
        // Lê a estrutura 'cliente' do arquivo.
        fread(&c, sizeof(struct cliente), 1, cli);

        if (ferror(cli)) // Verifica se ocorreu algum erro durante a leitura do arquivo.
            printf("\nErro na leitura"); // Imprime uma mensagem de erro caso ocorra um erro na leitura.
        else {
            printf("\nLeitura realizada com sucesso"); // Imprime uma mensagem de sucesso na leitura.
            printf("\nNúmero do cliente: %d", c.numero); // Imprime o número do cliente lido.
            printf("\nNome do cliente: %s", c.nome); // Imprime o nome do cliente lido.

            rewind(cli); // Reposiciona o cursor no início do arquivo.

            printf("\nCursor reposicionado no início"); // Imprime uma mensagem informando que o cursor foi reposicionado.

            // Lê a estrutura 'cliente' do arquivo novamente.
            fread(&c, sizeof(struct cliente), 1, cli);

            if (ferror(cli)) // Verifica se ocorreu algum erro durante a leitura do arquivo.
                printf("\nErro na leitura"); // Imprime uma mensagem de erro caso ocorra um erro na leitura.
            else {
                printf("\nLeitura realizada com sucesso"); // Imprime uma mensagem de sucesso na leitura.
                printf("\nNúmero do cliente: %d", c.numero); // Imprime o número do cliente lido.
                printf("\nNome do cliente: %s", c.nome); // Imprime o nome do cliente lido.
            }
        }
        fclose(cli); // Fecha o arquivo.
    }
    getchar(); // Aguarda a entrada de um caractere antes de encerrar o programa.
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
