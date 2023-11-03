#include <stdio.h>

int main() {
    FILE *p;
    char cadeia[30];

    p = fopen("C:\\exemplo\\teste\\cadeias.txt", "a");

    if (p == NULL)
        printf("\nErro na abertura");
    else {
        printf("\nDigite uma cadeia de caracteres: ");
        gets(cadeia);

        while (_stricmp(cadeia, "fim") != 0) {
            fputs(cadeia, p);

            if (ferror(p))
                printf("\nErro na gravação da cadeia");
            else
                printf("\nGravação realizada com sucesso");

            printf("\nDigite outra cadeia: ");
            gets(cadeia);
        }
    }

    fclose(p);
    return 0;
}
