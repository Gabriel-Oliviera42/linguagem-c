#include <iostream>

int main(void) {            // Função principal do programa.

    struct rej {
        char nome[40],
        char tel[10],
        char email[30];
    };

    FILE *arq;                // Declara um ponteiro para um arquivo.

    if ((arq = fopen("C:\\lin_c\\dados.txt", "rb+")) == NULL) {
        if ((arq = fopen("C:\\lin_c\\dados.txt", "wb+")) == NULL) {
            printf("\nErro na abertura");
            system("pause");
        }
    }

    fclose(arq); // Fecha o arquivo.
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
