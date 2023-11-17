#include <iostream>

int main() {

    FILE *arquivo = fopen("C:\\lin_c\\resultado.txt", "w");

    if (arquivo == NULL) {
        printf("Erro na abertura do arquivo.\n");
    } else {
        for (int i = 0; i <= 10; i++) {
            fprintf(arquivo, "%d\n", i);
        }
    }

    printf("Números gravados com sucesso.\n");

    fclose(arquivo);

    return 0;
}
