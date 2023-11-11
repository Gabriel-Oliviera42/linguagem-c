#include <iostream>

int main(void) {

    FILE *arquivo = fopen("C:\\lin_c\\caract.txt", "w"); // Abre o arquivo em modo de adição.
    char texto[100];

 if (arquivo  == NULL) {// Verifica se houve erro na abertura do arquivo.
        printf("\nErro na abertura"); // Imprime uma mensagem de erro caso não seja possível abrir o arquivo.
    } else {
        printf("Digite um texto: ");
        gets(texto);
    }

    fprintf(arquivo, "%s", texto);

    printf("Texto gravado com sucesso.\n");

    fclose(arquivo);

    return 0;
}