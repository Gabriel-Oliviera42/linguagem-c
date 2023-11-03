#include <stdio.h>
int main()
{
    int x;
    x = rename("c:\\exemplo\\teste\\clientes.dat", "c:\\exemplo\\teste\\dados.cli");
    if (x == 0)
        printf("Sucesso na troca de nome");
    else 
        printf("Erro na troca de nome");
    getchar();
    return 0;
}
