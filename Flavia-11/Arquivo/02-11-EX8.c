#include <stdio.h> // Inclui a biblioteca de entrada e saída padrão em C.

int main() { // Função principal do programa.

    // Definição da estrutura 'cliente'
    struct cliente {
        int numero;
        char nome[20];
    };

    // Declarações de variáveis
    FILE *cli; // Declara um ponteiro para um arquivo.
    struct cliente c; // Declara uma estrutura 'cliente' chamada 'c'.

    // Abre o arquivo em modo de adição e leitura.
    cli = fopen("c:\\exemplo\\teste\\clientes.dat", "a+");

    if (cli == NULL) // Verifica se houve erro na abertura do arquivo.
        printf("\nErro na abertura do arquivo"); // Imprime uma mensagem de erro caso não seja possível abrir o arquivo.
    else {
        // Solicita ao usuário para digitar o número e o nome do cliente a ser incluído.
        printf("\nDigite o número do cliente a ser incluído: ");
        scanf("%d%*c", &c.numero);
        printf("Digite o nome do cliente a ser incluído: ");
        gets(c.nome);

        // Escreve a estrutura 'cliente' no arquivo.
        fwrite(&c, sizeof(struct cliente), 1, cli);

        if (ferror(cli)) // Verifica se ocorreu algum erro durante a gravação no arquivo.
            printf("Erro na gravação "); // Imprime uma mensagem de erro caso ocorra um erro na gravação.
        else
            printf("Gravação realizada com sucesso "); // Caso contrário, imprime uma mensagem de sucesso na gravação.

        fclose(cli); // Fecha o arquivo.
    }
    getchar(); // Aguarda a entrada de um caractere antes de encerrar o programa.
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
