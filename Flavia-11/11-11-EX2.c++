#include <iostream>

int main() {

    FILE *arquivo = fopen("C:\\lin_c\\caract.txt", "r");
    char linha[100];

    if (arquivo == NULL) {
        printf("Erro na abertura do arquivo.\n");
    } else {
        while (fgets(linha, sizeof(linha), arquivo) != NULL) {
            printf("%s", linha);
        }
    }

    fclose(arquivo);

    return 0;
}
