#include <stdio.h>

int main() {
    FILE *cli;
    struct cliente {
        int numero;
        char nome[20];
    };
    struct cliente c;
    cli = fopen("c:\\exemplo\\teste\\clientes.dat", "a+");
    if (cli == NULL)
        printf("\nErro na abertura do arquivo");
    else {
        fread(&c, sizeof(struct cliente), 1, cli);
        if (ferror(cli))
            printf("\nErro na leitura");
        else {
            printf("\nLeitura realizada com sucesso");
            printf("\nNúmero do cliente: %d", c.numero);
            printf("\nNome do cliente: %s", c.nome);
            rewind(cli);
            printf("\nCursor reposicionado no início");
            fread(&c, sizeof(struct cliente), 1, cli);
            if (ferror(cli))
                printf("\nErro na leitura");
            else {
                printf("\nLeitura realizada com sucesso");
                printf("\nNúmero do cliente: %d", c.numero);
                printf("\nNome do cliente: %s", c.nome);
            }
        }
        fclose(cli);
    }
    getchar();
    return 0;
}
