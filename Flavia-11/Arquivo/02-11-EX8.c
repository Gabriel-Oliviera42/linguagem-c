#include <stdio.h>

int main()
{
    FILE *cli;
    struct cliente
    {
        int numero;
        char nome[20];
    };
    struct cliente c;
    cli = fopen("c:\\exemplo\\teste\\clientes.dat", "a+");
    if (cli == NULL)
        printf("\nErro na abertura do arquivo");
    else
    {
        fread(&c, sizeof(struct cliente), 1, cli);
        if (ferror(cli))
            printf("\nErro na leitura ");
        else
            printf("\nLeitura realizada com sucesso ");
        while (!feof(cli))
        {
            printf("\nNúmero do cliente lido: %d", c.numero);
            printf("\nNome do cliente lido: %s", c.nome);
            fread(&c, sizeof(struct cliente), 1, cli);
            if (ferror(cli))
                printf("\nErro na leitura ");
            else
                printf("\nLeitura realizada com sucesso ");
        }
        fclose(cli);
    }
    getchar();
    return 0;
}
