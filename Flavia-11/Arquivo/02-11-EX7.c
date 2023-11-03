#include <stdio.h>

int main()
{
    struct cliente
    {
        int numero;
        char nome[20];
    };
    FILE *cli;
    struct cliente c;
    cli = fopen("c:\\exemplo\\teste\\clientes.dat", "a+");
    if (cli == NULL)
        printf("\nErro na abertura do arquivo");
    else
    {
        printf("\nDigite o número do cliente a ser incluído: ");
        scanf("%d%*c", &c.numero);
        printf("Digite o nome do cliente a ser incluído: ");
        gets(c.nome);
        fwrite(&c, sizeof(struct cliente), 1, cli);
        if (ferror(cli))
            printf("Erro na gravação ");
        else
            printf("Gravação realizada com sucesso ");
        fclose(cli);
    }
    getchar();
    return 0;
}
