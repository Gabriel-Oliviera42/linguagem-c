#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída em C.

int main() {   // Função principal do programa.
    FILE *arq; // Declaração de um ponteiro para um arquivo.
    arq = fopen("arquivo1.dat", "r"); // Abre o arquivo "arquivo1.dat" em modo de leitura.

    if (arq == NULL) { // Verifica se ocorreu um erro ao abrir o arquivo.
        printf("\nOcorreu um erro. O arquivo não foi aberto."); // Imprime uma mensagem de erro.
    } else {
        /* As demais instruções do programa só poderão ser
        executadas se o arquivo foi aberto de forma correta. */
    }
    return 0; // Retorna 0, indicando que o programa foi executado com sucesso.
}
