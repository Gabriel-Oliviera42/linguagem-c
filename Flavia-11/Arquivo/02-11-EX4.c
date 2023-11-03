#include <stdio.h>

int main() {
    FILE *p;
    char carac;
    p = fopen("C:\\exemplo\\teste\\caract.dat", "r");
    if (p == NULL)
        printf("\nErro na abertura");
    else
    {
        do
        {
            carac = fgetc(p);
            if (ferror(p))
                printf("\nErro na leitura do caractere");
            else
            {
                if (!feof(p))
                {
                    printf("\nLeitura realizada com sucesso");
                    printf("Caractere lido: %c", carac);
                }
            }
        } while (!feof(p));
    }
    fclose(p);
    system("pause");
    return 0;
}
