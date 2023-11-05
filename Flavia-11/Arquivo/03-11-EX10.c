#include <stdio.h> // Inclui a biblioteca de entrada e saída padrão em C.

int main() { // Função principal do programa.
    int x; // Declara uma variável inteira.
    x = rename("c:\\exemplo\\teste\\clientes.dat", "c:\\exemplo\\teste\\dados.cli"); // Tenta renomear o arquivo.

    if (x == 0) // Verifica se o valor retornado por rename é 0 (o que indica sucesso na troca de nome).
        printf("Sucesso na troca de nome"); // Imprime uma mensagem de sucesso na troca de nome.
    else 
        printf("Erro na troca de nome"); // Imprime uma mensagem de erro na troca de nome.

    getchar(); // Aguarda a entrada de um caractere antes de encerrar o programa.
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
