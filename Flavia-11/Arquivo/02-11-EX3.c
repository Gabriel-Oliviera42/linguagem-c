#include <stdio.h> // Inclui a biblioteca de entrada e saída padrão em C.

int main() {             // Função principal do programa.
    FILE *p;             // Declara um ponteiro para um arquivo.
    char carac;          // Declara uma variável do tipo caractere.

    p = fopen("C:\\exemplo\\teste\\caract.dat", "a"); // Abre o arquivo em modo de adição.

    if (p == NULL) // Verifica se houve erro na abertura do arquivo.
        printf("\nErro na abertura"); // Imprime uma mensagem de erro caso não seja possível abrir o arquivo.
    else { // Caso contrário, se o arquivo foi aberto com sucesso:
        printf("\nDigite um caractere: "); // Solicita ao usuário que digite um caractere.
        scanf("%c", &carac); // Lê um caractere digitado pelo usuário.

        while (carac != 'f') { // Enquanto o caractere digitado não for 'f':
            fputc(carac, p); // Escreve o caractere no arquivo.

            if (ferror(p)) // Verifica se ocorreu algum erro durante a gravação no arquivo.
                printf("\nErro na gravação do caractere"); // Imprime uma mensagem de erro caso ocorra um erro na gravação.
            else
                printf("\nGravação realizada com sucesso"); // Caso contrário, imprime uma mensagem de sucesso na gravação.

            printf("\nDigite outro caractere: "); // Solicita ao usuário que digite outro caractere.
            scanf(" %c", &carac); // Lê um novo caractere digitado pelo usuário.
        }
    }
    fclose(p); // Fecha o arquivo.
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
